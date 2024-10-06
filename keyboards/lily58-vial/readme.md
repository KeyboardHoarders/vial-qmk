## Vial firmware and layout for Lily58 pro split mechanical keyboard

The file "vial-layout-houck-board.vil" is the saved layout from the vial app.

### To build vial firmware for Lily58

```sh 
# exec from ~/qmk-vial
make keyboards/lily58/rev1:vial
```

### To flash from cli

This never worked, but qmk toolbox worked to get firmware 
onto chip. The following file is the firware file:
~/vial-qmk/lily58_rev1_vial.hex

```sh 
# exec from ~/qmk-vial
make keyboards/lily58/rev1:vial:flash
```


### For other boards

qmk flash -c -kb lily58/rev1 -km default -e CONVERT_TO=promicro_rp2040


