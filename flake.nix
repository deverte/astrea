{
  inputs = {
    nixpkgs.url = "nixpkgs/nixos-23.11";
  };

  outputs = inputs@{ self, nixpkgs, ... }:
  let
    system = "x86_64-linux";
    pkgs = import nixpkgs { inherit system; };
    stdenv = pkgs.llvmPackages_17.stdenv;
  in {
    devShells.${system}.default = stdenv.mkDerivation {
      name = "astrea";
      nativeBuildInputs = [
        pkgs.conan
        pkgs.just
        pkgs.python311
      ];
    };

    packages.${system}.default = stdenv.mkDerivation {
      name = "astrea";
      version = "0.7.5"; # managed by justfile
      src = ./.;
      nativeBuildInputs = [
        pkgs.cmake
      ];
      meta = {
        homepage = "http://gitea.nul/astro/astrea";
        licencse = pkgs.lib.licenses.gpl3;
        platforms = pkgs.lib.platforms.linux ++ pkgs.lib.platforms.darwin;
        maintainers = [ pkgs.lib.maintainers.deverte ];
      };
    };
  };
}
