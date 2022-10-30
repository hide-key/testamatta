# MacroPad #000 XIAO RP2040 build guide

※日本語版は[コチラ](https://github.com/hide-key/testamatta/blob/main/macropad/macropad_000_xiao_rp2040_jp.md)

![](assets/macropad_000_xiao_rp2040_jp/IMG_0001.png)



[TOC]

A keypad that imitates Christmas ornaments.



## ■Design

Although free materials are used for the designs, some materials are not available for commercial use. please note.



- **Logo :** https://freesvgdesigns.com/a-very-merry-christmas-free-svg-files-1489/ (No commercial use)
- **Star :** https://www.freesvgdownload.com/christmas-tree-svg-png-free-christmas-cut-files/ (No commercial use)
- **Snow flakes :** https://www.freesvgdownload.com/snowflakes-svg-png-free-christmas-cut-files/ (No commercial use)
- **Santa's Sleigh :** https://www.craftingspree.com/free-cricut-christmas-svgs-1 (Commercial use allowed)



*Since it was made for the purpose of a rapid prototype, the above materials were used and diverted.

*The star shape of the outer shape is original.



## ■Parts needed

Prepare the following parts.

|           Name            |                  Model                  | Quantity |
| :-----------------------: | :-------------------------------------: | :------: |
|            MCU            |               XIAO RP2040               |  1 pcs   |
|        Key switch         |             Kailh X Switch              |  4 pcs   |
|           Diode           |                 1N4148                  |  5 pcs   |
| Horizontal rotary encoder |                EVQWGD001                |  1 pcs   |
|         Capacitor         | TMK212F104ZQ-T (SMD, 0.1μF, 25V, 2012M) |  1 pcs   |
|            LED            |                WS2812B-B                |  1 pcs   |
|      Cushion rubber       |           7.9x2.2mm Circular            |  ５ pcs  |

*Kailh Low Profile and Cherry MX can also be used for the key switch. Not compatible with sockets. For devices other than X Switch, please prepare keycaps separately. ( I bought a set of key switches and key caps. )

*Diode can also use SMD.

*Capacitors and LEDs can only be used with SMD.

*There is no problem with the size of the cushion rubber you like.



## ■Circuit board data

Below is the gerber file. Place your order with PCB Fabrication Services.

- **Gerber file :** https://github.com/hide-key/testamatta/blob/main/macropad/pcb/macropad_000f.zip

![](assets/macropad_000_xiao_rp2040_jp/IMG_2942.png)



## ■Assembling

The capacitor and LED are SMD specifications, so please work carefully.

Other parts are through-holes, so you can proceed with normal soldering procedures.



**Points to note：**

- XIAO RP2040 is designed to be directly attached to the PCB. (No pin headers or cons throughs are used)

- There are places where it is difficult to determine the direction of the diode. Make sure the strip of diodes faces the outside of the star. Make sure that the band on the left side of the diode on the top of the horizontal rotary encoder.

- The hardest part for me personally was that I didn't know how to incorporate a horizontal rotary encoder. Approach it cautiously and boldly. (I actually broke one...)

  

## ■Firmware

Below are UF2 file, JSON file, and source files.

- **UF2 file :** https://github.com/hide-key/testamatta/blob/main/macropad/uf2/testamatta_macropad_000_xiao_rp2040_default.uf2

- **JSON file :** https://github.com/hide-key/testamatta/blob/main/macropad/json/macropad_000_xiao_rp2040.json

- **Source files :** https://github.com/hide-key/testamatta/tree/main/macropad/000/xiao_rp2040



If you want to use UF2 file, boot XIAO RP2040 in bootloader mode and upload the downloaded UF2 file.

*Connect the XIAO RP2040 and the work PC with a USB cable, and press the RESET button while pressing the BOOT button. It will be recognized as a drive, so drag and drop the UF2 file. Once uploaded, it will be unmounted and reconnected automatically.

After that, use [**REMAP**](https://remap-keys.app/) to make your favorite keymap.

The image below is the default keymap (layers 0 & 1). As you can see, it's no longer a keypad, it's just a decorative state with only the illumination function mapped. :p

![](assets/macropad_000_xiao_rp2040_jp/remap_000.png)

## ■Completing

After installing the firmware, it is normal if the LED (WS2812B-B) lights up or blinks when reconnected. It is also possible to edit with REMAP.
This completes the process.

![](assets/macropad_000_xiao_rp2040_jp/IMG_2974_2.png)





## ■At the end

I am also posting on the following SNS.



- **Twitter :** In preparation
- **Reddit :** In preparation
- **instructables :** In preparation



Thank you very much for reading to the end.

Have a nice keyboard life.