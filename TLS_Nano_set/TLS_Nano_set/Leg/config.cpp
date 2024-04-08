////////////////////////////////////////////////////////////////////
//DeRap: Leg\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:50:31 2024 : 'file' last modified on Sat Apr 30 22:12:06 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TLS_Nano_set
	{
		units[] = {"bdu_pants_Woodland","Jeans_Black","Jeans_BlueDark","Jeans_Blue","Jeans_Brown","Jeans_Green","Jeans_Grey","MaleLegs","FemaleLegs"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class GorkaPants_ColorBase;
	class TLS_Nano_LEG_ColorBase: GorkaPants_ColorBase
	{
		displayName = "Нижняя часть нанокостюма";
		descriptionShort = "Нижняя часть нанокостюма.";
		model = "\TLS_Nano_set\Leg\TLS_Nano_LEG_g.p3d";
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,4};
		itemsCargoSize[] = {6,6};
		weight = 400;
		ragQuantity = 3;
		varWetMax = 0.249;
		heatIsolation = 0.4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		quickBarBonus = 2;
		hiddenSelections[] = {"TLS"};
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Leg\TLS_Nano_LEG_m.p3d";
			female = "\TLS_Nano_set\Leg\TLS_Nano_LEG_f.p3d";
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
					hitpoints = 3775;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.7,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.5,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0,{"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"}}};
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
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class TLS_Nano_LEG: TLS_Nano_LEG_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_co.paa"};
	};
	class TLS_Nano_LEG_camo: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo.paa"};
	};
	class TLS_Nano_LEG_camo2: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo2.paa"};
	};
	class TLS_Nano_LEG_camo3: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo3.paa"};
	};
	class TLS_Nano_LEG_camo4: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo4.paa"};
	};
	class TLS_Nano_LEG_camo5: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo5.paa"};
	};
	class TLS_Nano_LEG_camo6: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo6.paa"};
	};
	class TLS_Nano_LEG_camo7: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo7.paa"};
	};
	class TLS_Nano_LEG_camo8: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo8.paa"};
	};
	class TLS_Nano_LEG_camo9: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo9.paa"};
	};
	class TLS_Nano_LEG_camo10: TLS_Nano_LEG
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo10.paa"};
	};
	class TLS_Nano_LEG_PVP: TLS_Nano_LEG_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 775;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.7,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.5,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0,{"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"}}};
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
	};
	class TLS_Nano_LEG_PVP_camo: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo.paa"};
	};
	class TLS_Nano_LEG_PVP_camo2: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo2.paa"};
	};
	class TLS_Nano_LEG_PVP_camo3: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo3.paa"};
	};
	class TLS_Nano_LEG_PVP_camo4: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo4.paa"};
	};
	class TLS_Nano_LEG_PVP_camo5: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo5.paa"};
	};
	class TLS_Nano_LEG_PVP_camo6: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo6.paa"};
	};
	class TLS_Nano_LEG_PVP_camo7: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo7.paa"};
	};
	class TLS_Nano_LEG_PVP_camo8: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo8.paa"};
	};
	class TLS_Nano_LEG_PVP_camo9: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo9.paa"};
	};
	class TLS_Nano_LEG_PVP_camo10: TLS_Nano_LEG_PVP
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Top\data\TLS_nano_set_camo10.paa"};
	};
};
