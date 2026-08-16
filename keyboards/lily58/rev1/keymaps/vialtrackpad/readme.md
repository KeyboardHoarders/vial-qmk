This is my current working keymap for all my Lily58 MX/Choc and Allium58 trackpad builds.

1. Make sure to download the QMK CLI tool and this will be the command to convert it for the RP2040 MCU that is used in all my wired builds. Check command below.
2. qmk flash -kb lily58/rev1 -km vialtrackpad -e CONVERT_TO=rp2040_ce
3. To flash you will need to plug one half of the keyboard in at a time by itself.  > press physical reset button twice(located on inner sides) > drag and drop firmware file into RPI directory.
