<div align="center">
<!-- Badges -->

<p>
  <a href="https://github.com/Mboehmlaender/kb-void9.1/graphs/contributors">
    <img src="https://img.shields.io/github/contributors/Mboehmlaender/kb-void9.1" alt="contributors" />
  </a>
  <a href="">
    <img src="https://img.shields.io/github/last-commit/Mboehmlaender/kb-void9.1" alt="last update" />
  </a>
  <a href="https://github.com/Mboehmlaender/kb-void9.1/network/members">
    <img src="https://img.shields.io/github/forks/Mboehmlaender/kb-void9.1" alt="forks" />
  </a>
  <a href="https://github.com/Mboehmlaender/kb-void9.1/stargazers">
    <img src="https://img.shields.io/github/stars/Mboehmlaender/kb-void9.1" alt="stars" />
  </a>
  <a href="https://github.com/Mboehmlaender/kb-void9.1/issues/">
    <img src="https://img.shields.io/github/issues/Mboehmlaender/kb-void9.1" alt="open issues" />
  </a>
  <a href="https://github.com/Mboehmlaender/kb-void9.1/blob/master/LICENSE">
    <img alt="Static Badge" src="https://img.shields.io/badge/license-CC--BY--NC--SA--4.0-blue">
  </a>
</p>
   
<h4>
    <a href="https://github.com/Mboehmlaender/kb-void9.1">Documentation</a>
  <span> · </span>
    <a href="https://github.com/Mboehmlaender/kb-void9.1/issues/">Report Bug</a>
  <span> · </span>
    <a href="https://github.com/Mboehmlaender/kb-void9.1/issues/">Request Feature</a>
  </h4>
</div>
<br />

  <!-- <img src="assets/logo.png" alt="logo" width="200" height="auto" /> -->
  <h1>VOID9.1 Macropad</h1>
  <p align="center">
    <img src="assets/Void91.png">
  </p>

<!-- Table of Contents -->
- [About the Project](#about-the-project)
- [Features](#features)
- [Getting Started](#getting-started)
  * [List of materials](#list-of-materials)
  * [Necessary tools](#necessary-tools) 
  * [Optional tools](#optional-tools)
- [Build Guide](#build-guide)
- [Software](#software)
- [License](#license)
- [Acknowledgements](#acknowledgements)

<!-- About the Project -->
## About the Project

The VOID9.1 is a 3d printed, handwired, 3x3 macropad running VIAL (or QMK) Firmware on a Pro Micro controller.

It is a remix of Victor Lucachi's awesome VOID9 macropad with some changes.

At first i changed the default firmware from QMK to VIAL as there is a GUI for the configuration. Furthermore i added LED underglow because, let's face it, RGB is 
a must for a keyboard (no matter what size). 

The original case is completely closed, so an RGB lightning would not be visible, so i sliced the original bottom part into two parts. 
  <p align="center">
    <img width="200" src="assets/Bottom.png">
    <img width="200"src="assets/Middle.png">
    <img width="200" src="assets/Top_with_keycaps.png">

  </p>
The new bottom can be printed as usual but the smaller middle part will be translucent. I recommend [jlc3dp.com](https://jlc3dp.com/) for 3D printing (if you don't own a 3D printer). For the bottom and the top, i chose "Black Resin" and for the middle part "8001 resin" (translucent resin). 

Wiring the RGB strips might be a little bit difficult, as the case is quite tiny but it's doable. Maybe i will optimize the interior this in a future build.

<!-- Features -->
### Features

- QMK or VIAL firmware
- Encoder support
- RGB

<!-- Getting Started -->
## Getting Started

<!-- List of Materials -->
### List of Materials

- 9 x Diodes
- 9 x Cherry MX style mechanical switches
- 9 x Keycaps of choice
- 1 x Pro Micro
- WS218B LED strip (60 LEDs/m; 16,6mm between cuts) [(Aliexpress)](https://de.aliexpress.com/item/4000744445376.html?spm=a2g0o.productlist.main.5.1ef44a2fN1DIEn&algo_pvid=19ccae0e-8e38-4d39-b544-057817457e07&aem_p4p_detail=202402260500427915889042804340000272039&algo_exp_id=19ccae0e-8e38-4d39-b544-057817457e07-2&pdp_npi=4%40dis%21EUR%2111.25%216.41%21%21%2185.60%2148.79%21%402103847817089524425485363ed292%2112000034564427537%21sea%21DE%214748200527%21&curPageLogUid=CA89j6PWmQSM&utparam-url=scene%3Asearch%7Cquery_from%3A&search_p4p_id=202402260500427915889042804340000272039_3)
- 4 x 8mm bumpons
- 6 x M2x3x3.5 OD heat inserts
- 4 x M2x10 Allen head screws
- 2 x M2x6 Countersunk screws

<!-- Necessary tools -->
### Necessary tools

- Solder wire (i used 22-24 AWG Wire)
- Soldering Iron (Mine: [YiHua 937D](https://www.amazon.de/dp/B07X2JC4S1?psc=1&ref=ppx_yo2ov_dt_b_product_details))
- Hot glue or 2 components glue
   
<!-- Optional tools -->
### Optional tools

- Multimeter

<!-- Build Guide -->
### Build Guide

The original build guide can be found [here](https://victorlucachi.ro/journal/void9-wiring-guide/).

Please note, that the wiring is slightly different:

    ROW0    ROW1    ROW2
    F6      F5      F4
    
    COL0    COL1    COL2
    D1      D0      D4
    
    Optional:

    Encoder Pad A           Encoder Pad B
    B1                      F7
    B2                      B3

    RGB
    D7

For the RGB, i used 3 strips with 2 LEDs each and wired them together. I connected the DIN to PIN D7 of the Pro Micro.

  <p align="center">
    <img width="200" src="assets/Wiring.png">
    <img width="200"src="assets/Top_assembled.png">
  </p>

As i printed the case with resin, the countersunk screws can not be melted into the case wirh ther soldering iron. Use some hot glue or 2 components glue in the holes of the case top and let it dry before putting the screws in. Do not overtighten the screws.

Attention: Before glueing the LEDs to the bottom of the case, make sure that the translucent part of the case is attached to the top part. Maybe use some scotch tape to fix it to the top. Once the LEDs are in the case, you can't put it in anymore. A solution to this would be to not solder the the Pro Micro directly but to put a 3-pin connector in between.

Also the LED-strips must be bent over the Pro Micro holder as there is no space to glue it to the bottom. This could be changed in a future release by redoing the controller-mounts.

<!-- Software -->
### Software

- [QMK Toolbox](https://github.com/qmk/qmk_toolbox)
- [QMK](https://qmk.fm/) (optional)
- [VIAL](https://get.vial.today/) (optional)

You can use either [QMK](https://qmk.fm/) or [VIAL](https://get.vial.today/) as the firmware for your board. I precompiled a hex-file for VIAL, so you can start right away by flashing it onto your board using [QMK Toolbox](https://github.com/qmk/qmk_toolbox).

If you want to setup your own QMK or VIAL environment, you can follow [this guide](https://docs.qmk.fm/#/newbs_getting_started) for QMK and [this guide](https://get.vial.today/docs/porting-to-vial.html) for VIAL. Just copy the "void91" folder to the "keyboards" folder in QMK/VIAL installation and build it by using either 

```
make void91:vial 
```
or
```
make void91:default
```

<!-- License -->
## License

Released under Creative Commons BY-NC-SA 4.0 DEED

This license enables reusers to distribute, remix, adapt, and build upon the material in any medium or format for noncommercial purposes only, and only so long as attribution is given to the creator. If you remix, adapt, or build upon the material, you must license the modified material under identical terms. CC BY-NC-SA includes the following elements:

- credit must be given to the creator.
- Only noncommercial uses of the work are permitted.
- Adaptations must be shared under the same terms.

[<img src="https://mirrors.creativecommons.org/presskit/buttons/88x31/png/by-nc-sa.png" width="117" height="41">](https://creativecommons.org/licenses/by-nc-sa/4.0/)
<!-- Acknowledgments -->
## Acknowledgements

Use this section to mention useful resources and libraries that you have used in your projects.

- [Victor Lucachi](https://victorlucachi.ro/)
- [VOID9](https://github.com/victorlucachi/void9)
- [Shields.io](https://shields.io/)
- [Awesome README](https://github.com/Louis3797/awesome-readme-template)
