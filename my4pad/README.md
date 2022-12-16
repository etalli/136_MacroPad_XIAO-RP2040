# my4pad

# a small macro pad with 4 keys

This is a small macropad type keyboard with accessiblity extention with 3.5mm TRRS jack.


Keyboard Maintainer:
  [@k2___________](https://twitter.com/@k2___________)

The default keymap is tested with QMK Firmware (Dec 16, 2022)

## How to build
```
$ qmk compile -kb my4pad -km default
```

## How to flash

You must hold down the BOOT button and keep pressing the RESET button; the BOOT button is on the right when looking at the USB connector from the back. Therefore, you must hold down the right button and press the left button.

```
$ qmk flash -kb my4pad -km default
```

