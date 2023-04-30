# astrea

Header-only C++17 library for statistical equilibrium calculations in plasma.
Supports the following detailed balance pairs: collisional bound-bound
transitions, collisional ionization-three-body recombination, radiative
bound-bound transitions, photoionization-radiative recombination-dielectronic
recombination, charge transfer ionization-recombination, and spontaneous
emission.

## Installation

### Using Conan

Add repo:

```sh
conan remote add astro https://gitea.zarux.ru/api/packages/astro/conan
```

Insall package:

```sh
conan install --remote=astro --requires=astrea/<VERSION>
```

## License

License: GPL-3  
Author: Artem Shepelin (4.shepelin@gmail.com)