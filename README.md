# UnlimitedAmmo test

## Description
When the rounds in the magazine drop to 5 or below, the number of rounds is reset to the max capacity of the magazine.

The mod works with weapons using internal and external magazines.

Permission is granted to do whatever you want with the mod.


## Tested and works with the following versions of DayZ
- DayZ Stable: 1.10.153598 (2020-12-01)
- DayZ Experimental: 1.10.153606 (2020-12-07)


## Change Notes
**v2.0, 2019-12-25**
- Now works with internal magazines as well, such as Mosin, SK 59/66 and BK-133 etc.

**v1.0, 2019-12-14**
- Works with external magazines only, such as M4, AKM and pistols.


## Known Issues
If you fire a chambered bullet from the SK 59/66 and the magazine is empty, the magazine will be filled to its max capacity after the shot has been fired, but you will have to chamber the next bullet twice before it can be fired again. This only happens if the magazine is empty though, which it won't be again after this maneuver.


## Server Installation
1. Copy @UnlimitedAmmo to your servers root directory
(probably C:\Program Files (x86)\Steam\steamapps\common\DayZServer\).

2. Copy the mods keyfile, "MartinsMods.bikey", to the servers "keys" directory.

3. Edit the bat file used to start the server and add the mod to the -mod parameter, like:

"-mod=@UnlimitedAmmo;@OtherMod1;@OtherMod2" etc.
