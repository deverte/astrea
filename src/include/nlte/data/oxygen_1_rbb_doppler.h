#pragma once


#include <string>
#include <vector>


namespace nlte {


/**
 * Radiative bound-bound transition using Doppler profile.
 */
class RbbDopplerTransition {
 public:
  const std::string initial;
  const std::string final;
  const double oscillator_strength; // s^{-1},
};


class OxygenRbbDoppler {
 public:
  static const std::vector<RbbDopplerTransition>& transitions();

 private:
  static const std::vector<RbbDopplerTransition> transitions_;
};


inline const std::vector<RbbDopplerTransition>&
OxygenRbbDoppler::transitions() {
  return transitions_;
}


inline const std::vector<RbbDopplerTransition> OxygenRbbDoppler::transitions_{
  // {
  //   .initial = "12P3P4",
  //   .final = "13S3S",
  //   .oscillator_strength = .5111E-1,
  // },
  // {
  //   .initial = "12P3P4",
  //   .final = "14S3S",
  //   .oscillator_strength = .9089E-2,
  // },
  // {
  //   .initial = "12P3P4",
  //   .final = "15S3S",
  //   .oscillator_strength = .3278E-2,
  // },
  // {
  //   .initial = "12P3P4",
  //   .final = "16S3S",
  //   .oscillator_strength = .1567E-2,
  // },
  // {
  //   .initial = "12P3P4",
  //   .final = "17S3S",
  //   .oscillator_strength = .8689E-3,
  // },
  // {
  //   .initial = "12P3P4",
  //   .final = "18S3S",
  //   .oscillator_strength = .5333E-3,
  // },
  // {
  //   .initial = "12P3P4",
  //   .final = "19S3S",
  //   .oscillator_strength = .3511E-3,
  // },
  // {
  //   .initial = "13S3S",
  //   .final = "13P3P",
  //   .oscillator_strength = .1050E+1,
  // },
  {
    .initial = "13P3P",
    .final = "14S3S",
    .oscillator_strength = .1833E+0,
  },
  {
    .initial = "13P3P",
    .final = "15S3S",
    .oscillator_strength = .1722E-1,
  },
  {
    .initial = "13P3P",
    .final = "16S3S",
    .oscillator_strength = .5611E-2,
  },
  {
    .initial = "13P3P",
    .final = "17S3S",
    .oscillator_strength = .2622E-2,
  },
  {
    .initial = "13P3P",
    .final = "18S3S",
    .oscillator_strength = .1467E-2,
  },
  {
    .initial = "13P3P",
    .final = "19S3S",
    .oscillator_strength = .9133E-3,
  },
  {
    .initial = "13S3S",
    .final = "14P3P",
    .oscillator_strength = .7667E-2,
  },
  {
    .initial = "14S3S",
    .final = "14P3P",
    .oscillator_strength = .1503E+1,
  },
  {
    .initial = "14P3P",
    .final = "15S3S",
    .oscillator_strength = .3167E+0,
  },
  {
    .initial = "14P3P",
    .final = "16S3S",
    .oscillator_strength = .2789E-1,
  },
  {
    .initial = "14P3P",
    .final = "17S3S",
    .oscillator_strength = .9056E-2,
  },
  {
    .initial = "14P3P",
    .final = "18S3S",
    .oscillator_strength = .4278E-2,
  },
  {
    .initial = "14P3P",
    .final = "19S3S",
    .oscillator_strength = .2422E-2,
  },
  {
    .initial = "13S3S",
    .final = "15P3P",
    .oscillator_strength = .5433E-3,
  },
  {
    .initial = "14S3S",
    .final = "15P3P",
    .oscillator_strength = .2140E-1,
  },
  {
    .initial = "15S3S",
    .final = "15P3P",
    .oscillator_strength = .1937E+1,
  },
  {
    .initial = "15P3P",
    .final = "16S3S",
    .oscillator_strength = .4478E+0,
  },
  {
    .initial = "15P3P",
    .final = "17S3S",
    .oscillator_strength = .3833E-1,
  },
  {
    .initial = "15P3P",
    .final = "18S3S",
    .oscillator_strength = .1233E-1,
  },
  {
    .initial = "15P3P",
    .final = "19S3S",
    .oscillator_strength = .5867E-2,
  },
  {
    .initial = "13S3S",
    .final = "16P3P",
    .oscillator_strength = .6100E-4,
  },
  {
    .initial = "14S3S",
    .final = "16P3P",
    .oscillator_strength = .2830E-2,
  },
  {
    .initial = "15S3S",
    .final = "16P3P",
    .oscillator_strength = .3500E-1,
  },
  {
    .initial = "16S3S",
    .final = "16P3P",
    .oscillator_strength = .2363E+1,
  },
  {
    .initial = "16P3P",
    .final = "17S3S",
    .oscillator_strength = .5767E+0,
  },
  {
    .initial = "16P3P",
    .final = "18S3S",
    .oscillator_strength = .4856E-1,
  },
  {
    .initial = "16P3P",
    .final = "19S3S",
    .oscillator_strength = .1567E-1,
  },
  {
    .initial = "13S3S",
    .final = "17P3P",
    .oscillator_strength = .5900E-5,
  },
  {
    .initial = "14S3S",
    .final = "17P3P",
    .oscillator_strength = .7167E-3,
  },
  {
    .initial = "15S3S",
    .final = "17P3P",
    .oscillator_strength = .5633E-2,
  },
  {
    .initial = "16S3S",
    .final = "17P3P",
    .oscillator_strength = .4833E-1,
  },
  {
    .initial = "17S3S",
    .final = "17P3P",
    .oscillator_strength = .2783E+1,
  },
  {
    .initial = "17P3P",
    .final = "18S3S",
    .oscillator_strength = .7044E+0,
  },
  {
    .initial = "17P3P",
    .final = "19S3S",
    .oscillator_strength = .5878E-1,
  },
  {
    .initial = "13S3S",
    .final = "18P3P",
    .oscillator_strength = .5200E-7,
  },
  {
    .initial = "14S3S",
    .final = "18P3P",
    .oscillator_strength = .2510E-3,
  },
  {
    .initial = "15S3S",
    .final = "18P3P",
    .oscillator_strength = .1690E-2,
  },
  {
    .initial = "16S3S",
    .final = "18P3P",
    .oscillator_strength = .8567E-2,
  },
  {
    .initial = "17S3S",
    .final = "18P3P",
    .oscillator_strength = .6100E-1,
  },
  {
    .initial = "18S3S",
    .final = "18P3P",
    .oscillator_strength = .3203E+1,
  },
  {
    .initial = "18P3P",
    .final = "19S3S",
    .oscillator_strength = .8333E+0,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "13D3D",
  //   .oscillator_strength = .1889E-1,
  // },
  {
    .initial = "13P3P",
    .final = "13D3D",
    .oscillator_strength = .9644E+0,
  },
  {
    .initial = "13D3D",
    .final = "14P3P",
    .oscillator_strength = .1820E+0,
  },
  {
    .initial = "13D3D",
    .final = "15P3P",
    .oscillator_strength = .3927E-2,
  },
  {
    .initial = "13D3D",
    .final = "16P3P",
    .oscillator_strength = .1047E-2,
  },
  {
    .initial = "13D3D",
    .final = "17P3P",
    .oscillator_strength = .4500E-3,
  },
  {
    .initial = "13D3D",
    .final = "18P3P",
    .oscillator_strength = .2407E-3,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "13S3DP",
  //   .oscillator_strength = .5422E-1,
  // },
  {
    .initial = "13P3P",
    .final = "13S3DP",
    .oscillator_strength = .1091E-2,
  },
  {
    .initial = "14P3P",
    .final = "13S3DP",
    .oscillator_strength = .1589E-1,
  },
  {
    .initial = "13S3DP",
    .final = "15P3P",
    .oscillator_strength = .1987E-2,
  },
  {
    .initial = "13S3DP",
    .final = "16P3P",
    .oscillator_strength = .7867E-5,
  },
  {
    .initial = "13S3DP",
    .final = "17P3P",
    .oscillator_strength = .1473E-4,
  },
  {
    .initial = "13S3DP",
    .final = "18P3P",
    .oscillator_strength = .3280E-4,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "14D3D",
  //   .oscillator_strength = .1544E-1,
  // },
  {
    .initial = "13P3P",
    .final = "14D3D",
    .oscillator_strength = .4000E-1,
  },
  {
    .initial = "14P3P",
    .final = "14D3D",
    .oscillator_strength = .1211E+1,
  },
  {
    .initial = "14D3D",
    .final = "15P3P",
    .oscillator_strength = .3527E+0,
  },
  {
    .initial = "14D3D",
    .final = "16P3P",
    .oscillator_strength = .6560E-2,
  },
  {
    .initial = "14D3D",
    .final = "17P3P",
    .oscillator_strength = .1780E-2,
  },
  {
    .initial = "14D3D",
    .final = "18P3P",
    .oscillator_strength = .8000E-3,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "15D3D",
  //   .oscillator_strength = .6267E-2,
  // },
  {
    .initial = "13P3P",
    .final = "15D3D",
    .oscillator_strength = .7956E-2,
  },
  {
    .initial = "14P3P",
    .final = "15D3D",
    .oscillator_strength = .8889E-1,
  },
  {
    .initial = "15P3P",
    .final = "15D3D",
    .oscillator_strength = .1456E+1,
  },
  {
    .initial = "15D3D",
    .final = "16P3P",
    .oscillator_strength = .5207E+0,
  },
  {
    .initial = "15D3D",
    .final = "17P3P",
    .oscillator_strength = .8267E-2,
  },
  {
    .initial = "15D3D",
    .final = "18P3P",
    .oscillator_strength = .2140E-2,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "16D3D",
  //   .oscillator_strength = .3611E-2,
  // },
  {
    .initial = "13P3P",
    .final = "16D3D",
    .oscillator_strength = .2700E-2,
  },
  {
    .initial = "14P3P",
    .final = "16D3D",
    .oscillator_strength = .2300E-1,
  },
  {
    .initial = "15P3P",
    .final = "16D3D",
    .oscillator_strength = .1278E+0,
  },
  {
    .initial = "16P3P",
    .final = "16D3D",
    .oscillator_strength = .1678E+1,
  },
  {
    .initial = "16D3D",
    .final = "17P3P",
    .oscillator_strength = .6800E+0,
  },
  {
    .initial = "16D3D",
    .final = "18P3P",
    .oscillator_strength = .9400E-2,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "17D3D",
  //   .oscillator_strength = .2278E-2,
  // },
  {
    .initial = "13P3P",
    .final = "17D3D",
    .oscillator_strength = .1222E-2,
  },
  {
    .initial = "14P3P",
    .final = "17D3D",
    .oscillator_strength = .9333E-2,
  },
  {
    .initial = "15P3P",
    .final = "17D3D",
    .oscillator_strength = .3689E-1,
  },
  {
    .initial = "16P3P",
    .final = "17D3D",
    .oscillator_strength = .1622E+0,
  },
  {
    .initial = "17P3P",
    .final = "17D3D",
    .oscillator_strength = .1889E+1,
  },
  {
    .initial = "17D3D",
    .final = "18P3P",
    .oscillator_strength = .8400E+0,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "18D3D",
  //   .oscillator_strength = .1533E-2,
  // },
  {
    .initial = "13P3P",
    .final = "18D3D",
    .oscillator_strength = .6567E-3,
  },
  {
    .initial = "14P3P",
    .final = "18D3D",
    .oscillator_strength = .4756E-2,
  },
  {
    .initial = "15P3P",
    .final = "18D3D",
    .oscillator_strength = .1600E-1,
  },
  {
    .initial = "16P3P",
    .final = "18D3D",
    .oscillator_strength = .4922E-1,
  },
  {
    .initial = "17P3P",
    .final = "18D3D",
    .oscillator_strength = .1933E+0,
  },
  {
    .initial = "18P3P",
    .final = "18D3D",
    .oscillator_strength = .2089E+1,
  },
  {
    .initial = "13D3D",
    .final = "14F3F",
    .oscillator_strength = .1007E+1,
  },
  {
    .initial = "13S3DP",
    .final = "14F3F",
    .oscillator_strength = .4407E-2,
  },
  {
    .initial = "14F3F",
    .final = "15D3D",
    .oscillator_strength = .9619E-2,
  },
  {
    .initial = "14F3F",
    .final = "16D3D",
    .oscillator_strength = .1719E-2,
  },
  {
    .initial = "14F3F",
    .final = "17D3D",
    .oscillator_strength = .6143E-3,
  },
  {
    .initial = "14F3F",
    .final = "18D3D",
    .oscillator_strength = .2967E-3,
  },
  {
    .initial = "13D3D",
    .final = "15F3F",
    .oscillator_strength = .1580E+0,
  },
  {
    .initial = "13S3DP",
    .final = "15F3F",
    .oscillator_strength = .3667E-2,
  },
  {
    .initial = "14D3D",
    .final = "15F3F",
    .oscillator_strength = .8733E+0,
  },
  {
    .initial = "15F3F",
    .final = "16D3D",
    .oscillator_strength = .2524E-1,
  },
  {
    .initial = "15F3F",
    .final = "17D3D",
    .oscillator_strength = .4810E-2,
  },
  {
    .initial = "15F3F",
    .final = "18D3D",
    .oscillator_strength = .1762E-2,
  },
  {
    .initial = "13D3D",
    .final = "16F3F",
    .oscillator_strength = .5460E-1,
  },
  {
    .initial = "13S3DP",
    .final = "16F3F",
    .oscillator_strength = .1327E-2,
  },
  {
    .initial = "14D3D",
    .final = "16F3F",
    .oscillator_strength = .1840E+0,
  },
  {
    .initial = "15D3D",
    .final = "16F3F",
    .oscillator_strength = .8267E+0,
  },
  {
    .initial = "16F3F",
    .final = "17D3D",
    .oscillator_strength = .4471E-1,
  },
  {
    .initial = "16F3F",
    .final = "18D3D",
    .oscillator_strength = .8810E-2,
  },
  {
    .initial = "13D3D",
    .final = "17F3F",
    .oscillator_strength = .2600E-1,
  },
  {
    .initial = "13S3DP",
    .final = "17F3F",
    .oscillator_strength = .6413E-3,
  },
  {
    .initial = "14D3D",
    .final = "17F3F",
    .oscillator_strength = .7200E-1,
  },
  {
    .initial = "15D3D",
    .final = "17F3F",
    .oscillator_strength = .1953E+0,
  },
  {
    .initial = "16D3D",
    .final = "17F3F",
    .oscillator_strength = .8067E+0,
  },
  {
    .initial = "17F3F",
    .final = "18D3D",
    .oscillator_strength = .6667E-1,
  },
  {
    .initial = "13D3D",
    .final = "18F3F",
    .oscillator_strength = .1467E-1,
  },
  {
    .initial = "13S3DP",
    .final = "18F3F",
    .oscillator_strength = .3667E-3,
  },
  {
    .initial = "14D3D",
    .final = "18F3F",
    .oscillator_strength = .3647E-1,
  },
  {
    .initial = "15D3D",
    .final = "18F3F",
    .oscillator_strength = .8067E-1,
  },
  {
    .initial = "16D3D",
    .final = "18F3F",
    .oscillator_strength = .2013E+0,
  },
  {
    .initial = "17D3D",
    .final = "18F3F",
    .oscillator_strength = .8133E+0,
  },
  // {
  //   .initial = "13S5S",
  //   .final = "13P5P",
  //   .oscillator_strength = .9780E+0,
  // },
  {
    .initial = "13P5P",
    .final = "14S5S",
    .oscillator_strength = .1633E+0,
  },
  {
    .initial = "13P5P",
    .final = "15S5S",
    .oscillator_strength = .1680E-1,
  },
  {
    .initial = "13P5P",
    .final = "16S5S",
    .oscillator_strength = .5587E-2,
  },
  {
    .initial = "13P5P",
    .final = "17S5S",
    .oscillator_strength = .2633E-2,
  },
  {
    .initial = "13P5P",
    .final = "18S5S",
    .oscillator_strength = .1480E-2,
  },
  {
    .initial = "13S5S",
    .final = "14P5P",
    .oscillator_strength = .3140E-2,
  },
  {
    .initial = "14S5S",
    .final = "14P5P",
    .oscillator_strength = .1454E+1,
  },
  {
    .initial = "14P5P",
    .final = "15S5S",
    .oscillator_strength = .2967E+0,
  },
  {
    .initial = "14P5P",
    .final = "16S5S",
    .oscillator_strength = .2800E-1,
  },
  {
    .initial = "14P5P",
    .final = "17S5S",
    .oscillator_strength = .9267E-2,
  },
  {
    .initial = "14P5P",
    .final = "18S5S",
    .oscillator_strength = .4387E-2,
  },
  {
    .initial = "13S5S",
    .final = "15P5P",
    .oscillator_strength = .7140E-4,
  },
  {
    .initial = "14S5S",
    .final = "15P5P",
    .oscillator_strength = .1532E-1,
  },
  {
    .initial = "15S5S",
    .final = "15P5P",
    .oscillator_strength = .1894E+1,
  },
  {
    .initial = "15P5P",
    .final = "16S5S",
    .oscillator_strength = .4287E+0,
  },
  {
    .initial = "15P5P",
    .final = "17S5S",
    .oscillator_strength = .3867E-1,
  },
  {
    .initial = "15P5P",
    .final = "18S5S",
    .oscillator_strength = .1267E-1,
  },
  {
    .initial = "13S5S",
    .final = "16P5P",
    .oscillator_strength = .1718E-6,
  },
  {
    .initial = "14S5S",
    .final = "16P5P",
    .oscillator_strength = .1822E-2,
  },
  {
    .initial = "15S5S",
    .final = "16P5P",
    .oscillator_strength = .2880E-1,
  },
  {
    .initial = "16S5S",
    .final = "16P5P",
    .oscillator_strength = .2320E+1,
  },
  {
    .initial = "16P5P",
    .final = "17S5S",
    .oscillator_strength = .5587E+0,
  },
  {
    .initial = "16P5P",
    .final = "18S5S",
    .oscillator_strength = .4900E-1,
  },
  {
    .initial = "13S5S",
    .final = "17P5P",
    .oscillator_strength = .6820E-5,
  },
  {
    .initial = "14S5S",
    .final = "17P5P",
    .oscillator_strength = .4440E-3,
  },
  {
    .initial = "15S5S",
    .final = "17P5P",
    .oscillator_strength = .4480E-2,
  },
  {
    .initial = "16S5S",
    .final = "17P5P",
    .oscillator_strength = .4240E-1,
  },
  {
    .initial = "17S5S",
    .final = "17P5P",
    .oscillator_strength = .2740E+1,
  },
  {
    .initial = "17P5P",
    .final = "18S5S",
    .oscillator_strength = .6867E+0,
  },
  {
    .initial = "13S5S",
    .final = "18P5P",
    .oscillator_strength = .9580E-5,
  },
  {
    .initial = "14S5S",
    .final = "18P5P",
    .oscillator_strength = .1554E-3,
  },
  {
    .initial = "15S5S",
    .final = "18P5P",
    .oscillator_strength = .1346E-2,
  },
  {
    .initial = "16S5S",
    .final = "18P5P",
    .oscillator_strength = .7420E-2,
  },
  {
    .initial = "17S5S",
    .final = "18P5P",
    .oscillator_strength = .5600E-1,
  },
  {
    .initial = "18S5S",
    .final = "18P5P",
    .oscillator_strength = .3180E+1,
  },
  // {
  //   .initial = "13P5P",
  //   .final = "13D5D",
  //   .oscillator_strength = .9267E+0,
  // },
  {
    .initial = "13D5D",
    .final = "14P5P",
    .oscillator_strength = .1584E+0,
  },
  {
    .initial = "13D5D",
    .final = "15P5P",
    .oscillator_strength = .8920E-3,
  },
  {
    .initial = "13D5D",
    .final = "16P5P",
    .oscillator_strength = .2524E-3,
  },
  {
    .initial = "13D5D",
    .final = "17P5P",
    .oscillator_strength = .1180E-3,
  },
  {
    .initial = "13D5D",
    .final = "18P5P",
    .oscillator_strength = .6680E-4,
  },
  {
    .initial = "13P5P",
    .final = "14D5D",
    .oscillator_strength = .7267E-1,
  },
  {
    .initial = "14P5P",
    .final = "14D5D",
    .oscillator_strength = .1113E+1,
  },
  {
    .initial = "14D5D",
    .final = "15P5P",
    .oscillator_strength = .3128E+0,
  },
  {
    .initial = "14D5D",
    .final = "16P5P",
    .oscillator_strength = .1340E-2,
  },
  {
    .initial = "14D5D",
    .final = "17P5P",
    .oscillator_strength = .3496E-3,
  },
  {
    .initial = "14D5D",
    .final = "18P5P",
    .oscillator_strength = .1628E-3,
  },
  {
    .initial = "13P5P",
    .final = "15D5D",
    .oscillator_strength = .1893E-1,
  },
  {
    .initial = "14P5P",
    .final = "15D5D",
    .oscillator_strength = .1207E+0,
  },
  {
    .initial = "15P5P",
    .final = "15D5D",
    .oscillator_strength = .1300E+1,
  },
  {
    .initial = "15D5D",
    .final = "16P5P",
    .oscillator_strength = .4600E+0 ,
  },
  {
    .initial = "15D5D",
    .final = "17P5P",
    .oscillator_strength = .1444E-2,
  },
  {
    .initial = "15D5D",
    .final = "18P5P",
    .oscillator_strength = .3392E-3,
  },
  {
    .initial = "13P5P",
    .final = "16D5D",
    .oscillator_strength = .7733E-2,
  },
  {
    .initial = "14P5P",
    .final = "16D5D",
    .oscillator_strength = .3660E-1,
  },
  {
    .initial = "15P5P",
    .final = "16D5D",
    .oscillator_strength = .1567E+0,
  },
  {
    .initial = "16P5P",
    .final = "16D5D",
    .oscillator_strength = .1473E+1,
  },
  {
    .initial = "16D5D",
    .final = "17P5P",
    .oscillator_strength = .6040E+0,
  },
  {
    .initial = "16D5D",
    .final = "18P5P",
    .oscillator_strength = .1376E-2,
  },
  {
    .initial = "13P5P",
    .final = "17D5D",
    .oscillator_strength = .3940E-2,
  },
  {
    .initial = "14P5P",
    .final = "17D5D",
    .oscillator_strength = .1627E-1,
  },
  {
    .initial = "15P5P",
    .final = "17D5D",
    .oscillator_strength = .5080E-1,
  },
  {
    .initial = "16P5P",
    .final = "17D5D",
    .oscillator_strength = .1880E+0,
  },
  {
    .initial = "17P5P",
    .final = "17D5D",
    .oscillator_strength = .1653E+1,
  },
  {
    .initial = "17D5D",
    .final = "18P5P",
    .oscillator_strength = .7440E+0,
  },
  {
    .initial = "13P5P",
    .final = "18D5D",
    .oscillator_strength = .2307E-2,
  },
  {
    .initial = "14P5P",
    .final = "18D5D",
    .oscillator_strength = .8800E-2,
  },
  {
    .initial = "15P5P",
    .final = "18D5D",
    .oscillator_strength = .2347E-1,
  },
  {
    .initial = "16P5P",
    .final = "18D5D",
    .oscillator_strength = .6307E-1,
  },
  {
    .initial = "17P5P",
    .final = "18D5D",
    .oscillator_strength = .2173E+0,
  },
  {
    .initial = "18P5P",
    .final = "18D5D",
    .oscillator_strength = .1827E+1,
  },
  {
    .initial = "13D5D",
    .final = "14F5F",
    .oscillator_strength = .9920E+0,
  },
  {
    .initial = "14D5D",
    .final = "14F5F",
    .oscillator_strength = .3240E-1,
  },
  {
    .initial = "14F5F",
    .final = "15D5D",
    .oscillator_strength = .1186E-1,
  },
  {
    .initial = "14F5F",
    .final = "16D5D",
    .oscillator_strength = .2103E-2,
  },
  {
    .initial = "14F5F",
    .final = "17D5D",
    .oscillator_strength = .7543E-3,
  },
  {
    .initial = "14F5F",
    .final = "18D5D",
    .oscillator_strength = .3657E-3,
  },
  {
    .initial = "13D5D",
    .final = "15F5F",
    .oscillator_strength = .1600E+0,
  },
  {
    .initial = "14D5D",
    .final = "15F5F",
    .oscillator_strength = .8360E+0,
  },
  {
    .initial = "15F5F",
    .final = "16D5D",
    .oscillator_strength = .3086E-1,
  },
  {
    .initial = "15F5F",
    .final = "17D5D",
    .oscillator_strength = .5771E-2,
  },
  {
    .initial = "15F5F",
    .final = "18D5D",
    .oscillator_strength = .2120E-2,
  },
  {
    .initial = "13D5D",
    .final = "16F5F",
    .oscillator_strength = .5600E-1,
  },
  {
    .initial = "14D5D",
    .final = "16F5F",
    .oscillator_strength = .1844E+0,
  },
  {
    .initial = "15D5D",
    .final = "16F5F",
    .oscillator_strength = .7720E+0,
  },
  {
    .initial = "16F5F",
    .final = "17D5D",
    .oscillator_strength = .5429E-1,
  },
  {
    .initial = "16F5F",
    .final = "18D5D",
    .oscillator_strength = .1049E-1,
  },
  {
    .initial = "13D5D",
    .final = "17F5F",
    .oscillator_strength = .2696E-1,
  },
  {
    .initial = "14D5D",
    .final = "17F5F",
    .oscillator_strength = .7320E-1,
  },
  {
    .initial = "15D5D",
    .final = "17F5F",
    .oscillator_strength = .1904E+0,
  },
  {
    .initial = "16D5D",
    .final = "17F5F",
    .oscillator_strength = .7440E+0,
  },
  {
    .initial = "17F5F",
    .final = "18D5D",
    .oscillator_strength = .8057E-1,
  },
  {
    .initial = "13D5D",
    .final = "18F5F",
    .oscillator_strength = .1528E-1,
  },
  {
    .initial = "14D5D",
    .final = "18F5F",
    .oscillator_strength = .3756E-1,
  },
  {
    .initial = "15D5D",
    .final = "18F5F",
    .oscillator_strength = .8000E-1,
  },
  {
    .initial = "16D5D",
    .final = "18F5F",
    .oscillator_strength = .1936E+0,
  },
  {
    .initial = "17D5D",
    .final = "18F5F",
    .oscillator_strength = .7400E+0,
  },
  {
    .initial = "12P1D4",
    .final = "12P1S4",
    .oscillator_strength = .1175E-8,
  },
  // {
  //   .initial = "12P3P4",
  //   .final = "13S5S",
  //   .oscillator_strength = .9599E-6,
  // },
  {
    .initial = "12P1D4",
    .final = "13S3S",
    .oscillator_strength = .4440E-6,
  },
  {
    .initial = "12P1S4",
    .final = "13S3S",
    .oscillator_strength = .1120E-7,
  },
  {
    .initial = "12P1D4",
    .final = "13S3DP",
    .oscillator_strength = .2845E-5,
  },
  {
    .initial = "12P1S4",
    .final = "13S3DP",
    .oscillator_strength = .8970E-5,
  },
  {
    .initial = "12P1D4",
    .final = "13S5S",
    .oscillator_strength = .7780E-9,
  },
  {
    .initial = "12P3P4",
    .final = "12P1D4",
    .oscillator_strength = .2478E-10,
  },
  {
    .initial = "12P3P4",
    .final = "12P1S4",
    .oscillator_strength = .1161E-10,
  },
};


}