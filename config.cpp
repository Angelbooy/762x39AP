class CfgPatches
{
	class Aiden_76239AP
	{
		units[] =
		{
			"AmmoBox_762x39AP_20rnd"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Supports",
			"DZ_Sounds_Weapons",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Sounds_Weapons",
			"DZ_Sounds_Effects",
			"FRP_Ammunition_300BO"
		};
		magazines[] =
		{
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd",
			"Mag_AKM_Palm30Rnd_Black",
			"Mag_AKM_Palm30Rnd_Green",
			"Mag_AKM_Drum75Rnd",
			"Mag_AKM_Drum75Rnd_Green",
			"Mag_AKM_Drum75Rnd_Black",
			"Mag_AKM_Drum_TEST"
		};
		ammo[] =
		{
			"Bullet_762x39AP"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_762x39AP
	{
		name = "Bullet_762x39AP";
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class Bullet_762x39AP : Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_762";
		round = "FxRound_762x39";
		spawnPileType = "Ammo_Aiden76239AP";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 2000;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.0010810811;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		initSpeed = 1900;
		weight = 0.0002;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] =
			{
				{0.5,1}
			};
			class Health
			{
				damage = 291;
				armorDamage = 0.89999998;
			};
			class Blood
			{
				damage = 125;
			};
			class Shock
			{
				damage = 145;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_FRP338L : Ammunition_Base
	{
		scope = 2;
		displayName = "762x39 AP/HV";
		descriptionShort = "Stack of 7.62x39AP/HV. Extremely fast that packs a punch";
		model = "\dz\weapons\ammunition\762x39_LooseRounds.p3d";
		itemSize[] = { 1,2 };
		iconCartridge = 1;
		weight = 16.200001;
		count = 20;
		ammo = "Bullet_762x39AP";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\weapons\ammunition\data\45cal_loose.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\weapons\ammunition\data\45cal_loose.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\weapons\ammunition\data\45cal_loose_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\weapons\ammunition\data\45cal_loose_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\weapons\ammunition\data\45cal_loose_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_FRP338L_20rnd : Box_Base
	{
		scope = 2;
		displayName = "762x39 AP Box";
		descriptionShort = "Box containing 20 Rounds of 762x39 AP / HV";
		model = "\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		itemSize[] = { 1,2 };
		rotationFlags = 17;
		weight = 324;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\weapons\ammunition\data\45cal_box.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\weapons\ammunition\data\45cal_box.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_Aiden76239AP
			{
				value = 20;
				variable = "quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
};
