# astrea

![logo](assets/logo.svg)

Header-only C++17 library for statistical equilibrium calculations in cosmic
plasma.

Available physical processes:

- elements and electron levels populations (LTE and NLTE)
- thermodynamics
- optics

Available detailed balance pairs:

- collisional bound-bound transitions
- radiative bound-bound transitions
- collisional ionization / recombination
- radiative ionization / recombination

Available elements:

- H I
- H II (protons)
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
- Custom

Available spectra:

- GJ 436
- GJ 3470
- HAT-P-11
- HD 73583
- HD 85512
- HD 189733
- HD 209458
- KELT-9
- Sun
- WASP-80
- Custom

> See also Python version [astrea_py](http://gitea.nul/astro/astrea_py).

## Installation

### Using Nix

```
{
  inputs = {
    astreaPkg.url = "http://gitea.nul/astro/astrea/archive/v0.7.6.tar.gz";
  };

  outputs = inputs@{ self, astreaPkg, ... }:
  let
    system = "x86_64-linux";
    astrea = astreaPkg.packages.${system}.default;
  in {
    devShells.${system}.default = pkgs.mkShell {
      buildInputs = [
        astrea
      ];
    };
  };
}
```

### Using Conan

Add repo:

```sh
conan remote add astro http://gitea.nul/api/packages/astro/conan
```

Insall package:

```sh
conan install --remote=astro --requires=astrea/0.7.6
```

### Other

You can clone, use as submodule, or download this repo.

```sh
git clone http://gitea.nul/astro/astrea
```

Next, install the following dependencies:

- [Eigen](https://eigen.tuxfamily.org/index.php?title=Main_Page)

## Documentation

### Physical quantities

Calculation functions for physical quantities are defined inside corresponding
namespaces.

```
<parent namespaces...>::<quantity>::<symbol>

astrea::thermodynamics::cooling_rate::L
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
- `E` - continuous energy, frequency or wavelength

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