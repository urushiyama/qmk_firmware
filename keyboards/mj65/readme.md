# MJ65

![MJ65](https://urushiyama.github.io/projects/mj65/img/mj65.png)

The Keyboard of Mac JIS-layout lovers, by Mac JIS-layout lovers, for Mac JIS-layout lovers.

Keyboard Maintainer: [urushiyama](https://github.com/urushiyama)  
Hardware Supported: MJ65 PCB, [Adafruit ItsyBitsy 32u4 - 3V 8MHz](https://learn.adafruit.com/introducting-itsy-bitsy-32u4)  
Hardware Availability: [MJ65 PCB data](https://github.com/urushiyama/MJ65-PCB) & [Plate data](https://github.com/urushiyama/MJ65-Plate), [Adafruit online shop](https://www.adafruit.com/product/3675)

Make example for this keyboard (after setting up your build environment):

```sh
make mj65:default:avrdude # 65-keys JIS layout
make mj65:split_space:avrdude # 66-keys JIS 'split space' layout
make mj65:us_like:avrdude # 62-keys US-like layout
make mj65:1app:avrdude # 66-keys JIS with App-key layout
make mj65:1app_split:avrdude # 67-keys JIS 'split space' layout
make mj65:1app_us:avrdude # 63-keys US-like with App-key layout
```

Layout & Keymaps Guide: [EN](keymaps/layout.en.md) / [JP](keymaps/layout.jp.md)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
