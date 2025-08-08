{
  inputs = {
    nixpkgs.url = "nixpkgs/nixos-25.05";
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
        pkgs.just
        pkgs.python311
      ];
    };

    packages.${system}.default = stdenv.mkDerivation {
      name = "astrea";
      version = "0.8.0"; # managed by justfile
      src = ./.;
      nativeBuildInputs = [
        pkgs.cmake
      ];
      meta = {
        homepage = "https://github.com/deverte/astrea";
        licencse = pkgs.lib.licenses.gpl3;
        platforms = pkgs.lib.platforms.linux ++ pkgs.lib.platforms.darwin;
        maintainers = [ pkgs.lib.maintainers.deverte ];
      };
    };
  };
}
