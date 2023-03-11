# Vayu

Vayu is C++ header-only framework for elements kinetics calculation.

There is also Python version [vayu-py](https://gitea.zarux.ru/vayu/vayu-py).

## Usage

> More examples at [tests](src/tests).

Create environment:

```cpp
#include "extensions/environment/environment.h"

vayu::Environment environment;
```

Create element and set population:

```cpp
#include <memory>
#include <yaml-cpp/yaml.h>
#include "extensions/element/import/yaml/element.h"
#include "extensions/element/element.h"

vayu::Element element(YAML::LoadFile("oxygen.yaml").as<vayu::element::Model>());
```

Create element quantum transitions:

```cpp
#include "extensions/transitions/collisional_excitation_interpolation/import/yaml/transitions.h"
#include "extensions/transitions/collisional_excitation_interpolation/collisional_excitation_interpolation.h"
#include "extensions/transitions/collisional_excitation_regemorter/collisional_excitation_regemorter.h"
#include "extensions/transitions/collisional_excitation_regemorter_and_interpolation/collisional_excitation_regemorter_and_interpolation.h"

auto collisional_excitation =
  std::make_shared<vayu::CollisionalExcitationRegemorterAndInterpolation>(
    vayu::CollisionalExcitationRegemorterAndInterpolation::FromExtensions(
      vayu::CollisionalExcitationRegemorter::FromElement(element),
      vayu::CollisionalExcitationInterpolation(
        YAML::LoadFile("collisional_excitation.yaml")
          .as<vayu::collisional_excitation_interpolation::Model>()
      )
    )
  );
```

Add transitions to element:

```cpp
element.AddTransitions(collisional_excitation);
```

Connect changes:

```cpp
environment.electron_number_density_changed.Connect(
  [&](auto electron_number_density) {
    collisional_excitation->electron_number_density(electron_number_density);
  }
);
environment.electron_temperature_changed.Connect(
  [&](auto electron_temperature) {
    collisional_excitation->electron_temperature(electron_temperature);
  }
);
environment.temperature_changed.Connect([&](auto temperature) {
  collisional_excitation->temperature(temperature);
});
```

Set initial conditions:

```cpp
element.population({
  {"12P3P4", 0.0},
  {"12P1D4", 0.0},
  {"12P1S4", 0.0},
  {"13S5S", 0.0},
  {"22P4S", 1.0}
});
environment.temperature(1.0e4);
environment.electron_temperature(1.0e4);
environment.electron_number_density(1.0);
environment.time(0.0);
```

Act:

```cpp
environment.time_changed.Connect([&](auto delta_time) {
  element.PerformTransitions(delta_time);
});
environment.time(environment.time() + 60.0);
```

Get result:

```cpp
auto result = element.population();
```

## Installation



## License

License: GPL  
Author: Artem Shepelin (4.shepelin@gmail.com)