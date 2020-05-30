## Parts needed
### Stock extruder
* Stepper motor
* Bushing and bolt from idler lever
* Two bolts from the other part
* Pneumatic fitting
* Spring
### BMG clone
* Drive gear (from 5mm axle)
* Idler gear with bearings and axle
## Printing
Use 3-4 walls and >1mm of bottom and top. heat and cooling for good layer adhesion.
Enough rigid infill to make parts strong.
Support idler cavity and bumps for spring.
Maybe it's worth to add modifier (100% infill) covering pneumatic fitting hole?
## Postprocessing
Ream filament path with 2.0-2.5mm drill bit.
Open up filament path in tips (closest to gears) with reamer or drill bit nose to make small conical "guide".
Drill hole for pneumatic fitting so it's tight but doesn't separate layers.
Ream idler lever bushing hole if needed. Bushing must go through.
## Installation
Push idler gear with bearings to idler arm, push axle so it's flush at both ends. Gear down.
Install drive gear to stepper motor axle, don't tighten grub screw yet. Gear towards motor.
Start with idler lever. Put bushing into lever. Using bolt, screw motor, mount and lever together. Don't tighten yet.
Put fixed part on mount, loosely screw the bolt that is further away from spring. Install spring, press levers slightly and loosely screw the last bolt.
When everything looks to be OK, tighten all bolts. Fixed part should be flush with motor and mount.
Using some filament, check the path with the gears. Adjust drive gear height and tighten it. Idler gear should have some play in height so it'll follow.
Install pneumatic fitting. Try if small length of tubing fits in input side, it may need reaming with 4mm drill ;)
## Calibration
Calibrate extruder steps, it should be close to 140 steps/mm. See e.g. https://github.com/davidramiro/Marlin-AI3M/wiki/Calibration#extruder-steps
If needed, adjust extruder feedrate and retraction acceleration (M203 and M204, see https://github.com/davidramiro/Marlin-AI3M#after-obtaining-the-hex-file). Values should be closer to stock extruder (M203 E60, M204 R10000.00 ???) than Titan (M203 E30, M204 R1500.00)

**NB!** I have 2208 drivers on X, Y, Z and Z (E1). Extruder is running with stock driver because people have had trouble with 2208. I have no idea what voltage E0 should have :/

## Reasoning
### Stock extruder
* easy to release filament
* filament path is fairly generous
* gear is meh
* even using hob-goblin gear would require printing new fixed part
* can be fitted with knob to run filament manually, otherwise not possible at all
### Titan clone (Trigorilla)
* works
* slips easilly
* curved filament sometimes has hard times to go to tube or sticks to something in bowden fitting
* bowden fitting maybe has smallest opening in filament path, so pulling filament often stucks there (-> remove tube, cut tip of filament, remove filament, attach tube)
* manually running filament is difficult
### BMG clone
* was too tight, one layer of electrical tape between boby halves made gears run easilly
* filament path is too tight, even if lever is "released", it's hard to move
* filament does not want to find the hole it should go from gears. Due to structure it's hard to fix
* lever is bad. Nothing to pull it against, short spring means it's tight
* nice gears, good grab of filament
