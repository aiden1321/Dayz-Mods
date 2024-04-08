////////////////////////////////////////////////////////////////////
//DeRap: Boots\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:50:31 2024 : 'file' last modified on Sat Apr 30 22:12:06 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TLS_Nano_set
	{
		units[] = {"athleticShoes","HikingBoots","MaleFeet","FemaleFeet"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class HikingBoots_ColorBase;
	class TLS_Nano_Boots_ColorBase: HikingBoots_ColorBase
	{
		scope = 0;
		displayName = "Ботинки нанокостюма";
		descriptionShort = "Ботинки нанокостюма.";
		model = "\TLS_Nano_set\Boots\TLS_Nano_Boots_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {4,4};
		weight = 400;
		durability = 0.5;
		varWetMax = 0.49;
		heatIsolation = 0.9;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		soundAttType = "Boots";
		hiddenSelections[] = {"TLS"};
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Boots\TLS_Nano_Boots_m.p3d";
			female = "\TLS_Nano_set\Boots\TLS_Nano_Boots_f.p3d";
		};
		class Protection
		{
			biological = 0;
			chemical = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1840;
					healthLevels[] = {{1,{"DZ\characters\shoes\Data\hikingBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\hikingBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\hikingBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\hikingBoots_damage.rvmat"}},{0,{"DZ\characters\shoes\Data\hikingBoots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class TLS_Nano_Boots: TLS_Nano_Boots_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_co.paa"};
	};
	class TLS_Nano_Boots_camo: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo.paa"};
	};
	class TLS_Nano_Boots_camo2: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo2.paa"};
	};
	class TLS_Nano_Boots_camo3: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo3.paa"};
	};
	class TLS_Nano_Boots_camo4: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo4.paa"};
	};
	class TLS_Nano_Boots_camo5: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo5.paa"};
	};
	class TLS_Nano_Boots_camo6: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo6.paa"};
	};
	class TLS_Nano_Boots_camo7: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo7.paa"};
	};
	class TLS_Nano_Boots_camo8: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo8.paa"};
	};
	class TLS_Nano_Boots_camo9: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo9.paa"};
	};
	class TLS_Nano_Boots_camo10: TLS_Nano_Boots
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo10.paa"};
	};
};
