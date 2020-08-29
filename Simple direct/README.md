Simple direct extruder for AnyCubic i3 Mage (S)

## Parts
* cable holder by layershifter https://www.thingiverse.com/thing:3703089
* Titan extruder (or clone) with stepper motor
    * Medium stepper (34mm long) works though pancake (13Ncm or 16Ncm) is lighter
* Stepper motor extension cord
* 2 M3 screws (5-8 mm thread length should be enough)
* Short length of Bowden tube
* Printed adapter

## Preparation
* Test stepper motor if it has not been in use!
    * I received motor with extruder and it doesn't rotate even without load
    * Taking everything apart is pain... ;)
* Print bottom 2 mm of the adapter to check alignment of slots and crew holes as well as accessibility from below.
    * Front 2 holes are enough
* Print adapter and thread holes from bottom with screw or M3 threading tool

## Assembly
* Attach cable holder
* Attach two "hidden" srews to hold extruder base, adapter and stepper motor. Ensure extruder gear free rotation before tightening them fully
* Attach gear to stepper motor
* Remove pneumatic fitting from aluminum adapter
* Slot aluminum adapter to base
* Slot filament guide next to aluminum adapter
* Insert gear, idler, spring and tightening scre
* Attach top with remaining screws

## Assembly - Bowden tube
* Bowden tube length is from nozzle to filemant guide
    * I'm using hotend spacer, so I don't know correct length :/ maybe around 110mm ?
    * Start with reasonably long, use clip on hotend fitting and shorten slowly until tube is not carrying extruder

## Assembly - the rest
* Attach adapter to hotend top, back under cable holder, front with screws from below
* Attach stepper extension from cable connector to stepper
* Optional - add some weight (e.g. stepper motor) to right Z gantry if extruder was taken from there. This keeps backlash in order
* Optional - add short piece of Bowden tube to idler to smooth input curve

## Testing
* **Check bed level** - there's more weight on the front
* Update and test E-steps and flow in slicer if another extruder was used previously
    * Due to short tube, maybe test anywhere
    * Tops of prints tell very clearly if overextruding
    * Tune to **your** liking ;)
* Print retraction test, e.g. https://teachingtechyt.github.io/calibration.html#retraction
    * retraction starting from 0 with 0.5mm steps
    * retraction and prime speed around 30mm/s
    * 1.5mm was good for me
* If firmware has linear advance, tune it
* Reduce acceleration to 500-800mm/s/s in slicer
* Reduce build height to 160mm in slicer