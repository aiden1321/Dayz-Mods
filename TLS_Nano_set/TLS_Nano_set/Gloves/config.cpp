////////////////////////////////////////////////////////////////////
//DeRap: Gloves\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:50:31 2024 : 'file' last modified on Sat Apr 30 22:12:06 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TLS_Nano_set
	{
		units[] = {"MaleHands","FemaleHands"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class OMNOGloves_ColorBase;
	class TLS_Nano_Gloves_ColorBase: OMNOGloves_ColorBase
	{
		scope = 0;
		displayName = "Перчатки нанокостюма";
		descriptionShort = "Перчатки нанокостюма";
		model = "\TLS_Nano_set\Gloves\TLS_Nano_Gloves_g.p3d";
		inventorySlot[] = {"Gloves"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Gloves"};
		rotationFlags = 34;
		weight = 450;
		itemSize[] = {2,2};
		varWetMax = 0.79;
		heatIsolation = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Gloves\TLS_Nano_Gloves_m.p3d";
			female = "\TLS_Nano_set\Gloves\TLS_Nano_Gloves_f.p3d";
		};
		hiddenSelections[] = {"TLS"};
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
					hitpoints = 1580;
					healthLevels[] = {{1,{"DZ\Characters\gloves\data\OMNOGloves.rvmat"}},{0.7,{"DZ\Characters\gloves\data\OMNOGloves.rvmat"}},{0.5,{"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"}},{0.3,{"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"}},{0,{"DZ\Characters\gloves\data\OMNOGloves_destruct.rvmat"}}};
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
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class TLS_Nano_Gloves: TLS_Nano_Gloves_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_co.paa"};
	};
	class TLS_Nano_Gloves_camo: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo.paa"};
	};
	class TLS_Nano_Gloves_camo2: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo2.paa"};
	};
	class TLS_Nano_Gloves_camo3: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo3.paa"};
	};
	class TLS_Nano_Gloves_camo4: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo4.paa"};
	};
	class TLS_Nano_Gloves_camo5: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo5.paa"};
	};
	class TLS_Nano_Gloves_camo6: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo6.paa"};
	};
	class TLS_Nano_Gloves_camo7: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo7.paa"};
	};
	class TLS_Nano_Gloves_camo8: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo8.paa"};
	};
	class TLS_Nano_Gloves_camo9: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo9.paa"};
	};
	class TLS_Nano_Gloves_camo10: TLS_Nano_Gloves
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo10.paa"};
	};
};
