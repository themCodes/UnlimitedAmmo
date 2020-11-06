modded class Weapon_Base
{
	override void EEFired (int muzzleType, int mode, string ammoType)  // scripts\4_world\entities\firearms\weapon_base.c line 191
	{
		super.EEFired (muzzleType, mode, ammoType);
		CheckIfMagIsLow(this);
	}

	static void CheckIfMagIsLow(Weapon_Base weapon)	// scripts\4_world\static\miscgameplayfunctions.c line 323
	{
		int currentMuzzle = weapon.GetCurrentMuzzle();
		Magazine magazine = weapon.GetMagazine(currentMuzzle);

		// Weapons with external magazines, such as M4, AKM and pistols etc.
		if (magazine)
		{
			if (magazine.GetAmmoCount() <= 5)
			{
				if (GetGame().IsServer())
				{		
					magazine.ServerSetAmmoMax();
				}
				else
				{		
					magazine.LocalSetAmmoMax();
				}
			}
		}
		else
		{
			float ammoDamage;
			string ammoType;
			weapon.GetCartridgeInfo(currentMuzzle, ammoDamage, ammoType);
			
			int internalMagazineMaxCapacity = weapon.GetInternalMagazineMaxCartridgeCount(currentMuzzle);
			int internalMagazineCurrentRounds = weapon.GetInternalMagazineCartridgeCount(currentMuzzle);

			// Weapons with internal magazines, such as Mosin, SK 59/66, BK-133 etc.
			if (internalMagazineMaxCapacity > 0 && internalMagazineCurrentRounds < internalMagazineMaxCapacity)
			{
				for (int i = internalMagazineCurrentRounds; i < internalMagazineMaxCapacity; i++)
				{
					weapon.PushCartridgeToInternalMagazine(currentMuzzle, ammoDamage, ammoType);
				}
			}
		}
	}
}