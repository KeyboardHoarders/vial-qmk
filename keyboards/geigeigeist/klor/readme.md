# Klor

![keyboard_image](https://i.imgur.com/1cx62B2.jpeg)

* Keyboard Maintainer: [waffle87](https://github.com/waffle87)
* Hardware Supported: Klor PCBs w/ Pro-Micro compatible microcontrollers
* Hardware Availability: [github:geigeigeist/klor](https://github.com/geigeigeist/klor)

**Note**: Audio and Pointing Device features are disabled by default to conserve firmware space on AVR

Make example for this keyboard (after setting up your build environment):

    make geigeigeist/klor:default

Flashing example for this keyboard:

    make geigeigeist/klor:default:flash

## Vial

A [Vial](https://get.vial.today)-compatible keymap is available:

    make geigeigeist/klor:vial
    make geigeigeist/klor:vial:flash

The elite_c (atmega32u4) has very little flash left over once VIA/Vial are
added on top of this board's OLED, RGB matrix, and haptic features, so the
`vial` keymap trims a few extras to fit within the 28KB usable flash limit:

* Haptic feedback and mouse keys are disabled (the `default` keymap still has both).
* VialRGB, tap dance, combos, key overrides, layer lock, repeat key, caps
  word, and QMK Settings are disabled; standard RGB matrix control (via the
  `RGB_*` keycodes on the Adjust layer) still works.
* All of the extra RGB matrix animations listed in `keyboard.json`
  (alphas/mods, band sat/val, breathing, gradients) are trimmed for the
  `vial` keymap; the built-in solid color/cycle effects are unaffected.

The Vial UID, unlock combo (Tab + quote on the home row), and these
space-saving overrides live in `keymaps/vial/config.h` and
`keymaps/vial/rules.mk`.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix
* **Physical reset button**: Briefly press the button on the PCB
