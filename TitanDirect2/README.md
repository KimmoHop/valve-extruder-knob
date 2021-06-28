Titan (clone) + Lite6 + dual 4010 for Anycubic i3 Mega (S)

## Parts
* Titan extruder (or clone) with stepper motor
* E3D 6Lite or V6 hotend
* Pancake stepper motor (13Ncm or 16Ncm), medium stepper (34mm long) also fits due to orientation
* Stepper motor extension cord
* 4 M2 or M3 plastic screws (mine are from RC car)
* Short length of Bowden tube
* 2 12V 4010 radial fans (usually marketed for CR-10)

## Printed parts
* Base - most likely based on titan_v4.stl from https://www.thingiverse.com/thing:4633697 by Kyneq. PLA is good
* Motor plate. PLA is good
* Two nozzles, one mirrored. Use resin or high temperature filament, though PLA works for PLA
* Belt mount - based on https://www.thingiverse.com/thing:4031807 by Svoboda13 and part that looks like https://www.thingiverse.com/thing:2763226 but is named belt_blocker.stl - can't find source :/

## Assembly
* Attach belt mount to back of carriage plane using suitable screws or bolts. Attach belt to mount.
* Attach base to carriage with 6 of the bigger screws that go to bearing holders
* Assemble Titan and V6 with motor plate. Straight face against extruder, tabs down (in the direction of hotend)
    * Tip: If using PTFE lined heatbrake, remove heat block, push PTFE tube from the bottom as far as it goes, cut along heat break or slightly longer -> will be tight against nozzle.
    * Tip: Original heater can be used. **Use E3D heat block, sock and thermistor**
* Attach motor/extruder/hotend assembly to base
* Push radial fans to base, input on outside, blowing down
    * Use 2mm bolts, filament or something else if they are not snug
* Push nozzles to bottom of fans. If they are too small (and resin), don't force but print slightly bigger
    * Use 2mm bolts or something else if they are not snug
* Wire everything
    * Stepper with extension cord
    * radial fans to part cooling fan connector
    * V6 fan (with resistor to keep it tolerable) to extruder fan connector
    * Thermistor to thermistor connector
    * Belt mount had associated PCB_box.stl to hold connector PCB, though it may be a bit high for heater wires
* Optional - add some weight (e.g. stepper motor) to right Z gantry if extruder was taken from there. This keeps backlash in order
* Bonus! Holders for 5mm leds! I use white leds with ~1k resistors from extruder fan (12V)

## Testing
* **Check bed level** - there's more weight on the front
* Update and test E-steps and flow in slicer if another extruder was used previously
    * Due to short tube, maybe test anyway ;)
    * Tops of prints tell very clearly if overextruding
    * Tune to **your** liking ;)
* PID tune hotend
* Print retraction test, e.g. https://teachingtechyt.github.io/calibration.html#retraction
    * retraction starting from 0 with 0.5mm steps
    * retraction and prime speed around 30mm/s
    * 1.2mm was good for me
* If firmware has linear advance, tune it
* Reduce acceleration to 500-800 mm/s/s in slicer (bed will still be heavier than X)
* Reduce build height to 165-170 mm in slicer