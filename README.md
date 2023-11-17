# astrea

![logo](assets/logo.svg)

Header-only C++17 library for statistical equilibrium calculations in cosmic
plasma.

Available detailed balance pairs:

- collisional bound-bound transitions
- radiative bound-bound transitions
- collisional ionization / recombination (in progress)
- radiative ionization / recombination (in progress)

Available elements:

- C I
- C II
- C III
- O I
- O II
- Mg I
- Mg II
- Mg III
- Fe I
- Fe II
- Fe III

Available spectra:

- KELT-9

> See also Python version [astrea_py](https://gitea.zarux.ru/astro/astrea_py)
> and high-level API [urania](https://gitea.zarux.ru/astro/urania) with Jupyter
> Notebook
> [examples](https://gitea.zarux.ru/astro/urania/src/branch/main/examples).

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

### Other

You can clone, use as submodule, or download this repo.

```sh
git clone https://gitea.zarux.ru/astro/astrea
```

Next, install the following dependencies:

- [Eigen](https://eigen.tuxfamily.org/index.php?title=Main_Page)

## Documentation

### Physical quantities

Calculation functions for physical quantities are defined inside corresponding
namespaces.

```
<parent namespaces...>::<quantity>::<symbol>

astrea::cooling::cooling_rate::L
```

### Dimensions

Each quantity, for convenience can be distributed over different dimensions
which defined after quantity symbol (considered as **placeholder** for indices)
separated by underscore.

```
<symbol>_<dimensions>

L_X
```

Quantities can have multiple dimensions (axes) defined with increasing axis
number.

```
A_XKK
```

where

- `A` - quantity
- `X` - axis 0
- `K` - axis 1 and axis 2

By indexing, we reduce dimension:

```
A_XKK[i] -> A_KK
```

Sometimes it is useful to swap axes (can be implemented manually using loops):

```
A_XKK.swapaxes(0, 1) -> A_KXK
```

Conventional symbols for dimensions:

- `X` - coordinate
- `Z` - element
- `K` - element level (term)

### Multivariate distributions

Data and approximations usually defined using multivatiate or bivariate
distributions with the following syntax:

```
<Y>_vs_<X> - bivariate distribution (matrix)

C_vs_T - example
C_vs_T[0] == T_X
C_vs_T[1] == C_X
```

## License

- License: [GPL-3](./LICENSE)
- Author: [Artem Shepelin](mailto:4.shepelin@gmail.com)