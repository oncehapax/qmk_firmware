# Duck Raven

Non official firmware for custom Korean keyboard with 60% key layout made by Duck.  
Group buy was run on [Prime KB](https://www.primekb.com/products/duck-raven-sidewinder).

Keyboard Maintainer: [MechMerlin](https://github.com/mechmerlin)  
Hardware Supported: Duck Raven PCB, Atmega32u4  
Hardware Availability: Wait until GB of the next revision

Make example for this keyboard (after setting up your build environment):

    make duck/raven:default

**Reset Key:** To put the Raven into reset, hold caps lock key (`K2A`) while plugging in. 

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Hardware Notes

The Duck Raven PCB consists of:

### Microchips
1 74HC237D 3-to-8 line decoders
1 Atmega32u4 microcontroller
2 WS2811 LED controller
