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

## License

License: [GPL-3](./LICENSE)  
Author: Artem Shepelin (4.shepelin@gmail.com)