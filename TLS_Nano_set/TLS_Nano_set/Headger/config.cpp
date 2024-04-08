////////////////////////////////////////////////////////////////////
//DeRap: Headger\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:50:31 2024 : 'file' last modified on Sat Apr 30 22:12:06 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TLS_Nano_set
	{
		units[] = {"BaseballCap_Blue","BaseballCap_Beige","BaseballCap_Black","BaseballCap_Olive","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Camo","BaseballCap_CMMG_Black","BaseballCap_CMMG_Pink","MotoHelmet_Black","MotoHelmet_Blue","MotoHelmet_Green","MotoHelmet_Red","MotoHelmet_White","Headtorch_Grey","CowboyHat_Brown","CowboyHat_black","CowboyHat_darkBrown","CowboyHat_green","BoonieHat_black","BoonieHat_Blue","BoonieHat_DPM","BoonieHat_dubok","BoonieHat_flecktran","BoonieHat_NavyBlue","BoonieHat_olive","BoonieHat_orange","BoonieHat_red","BoonieHat_Tan","FlatCap_Black","FlatCap_Grey","FlatCap_Brown","FlatCap_Blue","FlatCap_Red","FlatCap_Check_Black","FlatCap_Check_Brown","FlatCap_Check_Grey","GhillieHoodWoodland"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class TLS_Nano_Helm: Mich2001Helmet
	{
		scope = 2;
		displayName = "Шлем нанокостюма";
		descriptionShort = "Шлем нанокостюма";
		model = "\TLS_Nano_set\Headger\TLS_Nano_Helm_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG"};
		weight = 1000;
		itemSize[] = {3,3};
		varWetMax = 0.249;
		heatIsolation = 0.3;
		noMask = 0;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_co.paa"};
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
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Headger\TLS_Nano_Helm_m.p3d";
			female = "\TLS_Nano_set\Headger\TLS_Nano_Helm_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class TLS_Nano_Helm_camo: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo.paa"};
	};
	class TLS_Nano_Helm_camo2: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo2.paa"};
	};
	class TLS_Nano_Helm_camo3: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo3.paa"};
	};
	class TLS_Nano_Helm_camo4: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo4.paa"};
	};
	class TLS_Nano_Helm_camo5: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo5.paa"};
	};
	class TLS_Nano_Helm_camo6: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo6.paa"};
	};
	class TLS_Nano_Helm_camo7: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo7.paa"};
	};
	class TLS_Nano_Helm_camo8: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo8.paa"};
	};
	class TLS_Nano_Helm_camo9: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo9.paa"};
	};
	class TLS_Nano_Helm_camo10: TLS_Nano_Helm
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo10.paa"};
	};
	class TLS_Nano_Helm_PVP: Mich2001Helmet
	{
		scope = 2;
		displayName = "Шлем нанокостюма";
		descriptionShort = "Шлем нанокостюма";
		model = "\TLS_Nano_set\Headger\TLS_Nano_Helm_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG"};
		weight = 1000;
		itemSize[] = {3,3};
		varWetMax = 0.249;
		heatIsolation = 0.3;
		noMask = 0;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_co.paa"};
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
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Headger\TLS_Nano_Helm_m.p3d";
			female = "\TLS_Nano_set\Headger\TLS_Nano_Helm_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class TLS_Nano_Helm_PVP_camo: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo.paa"};
	};
	class TLS_Nano_Helm_PVP_camo2: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo2.paa"};
	};
	class TLS_Nano_Helm_PVP_camo3: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo3.paa"};
	};
	class TLS_Nano_Helm_PVP_camo4: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo4.paa"};
	};
	class TLS_Nano_Helm_PVP_camo5: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo5.paa"};
	};
	class TLS_Nano_Helm_PVP_camo6: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo6.paa"};
	};
	class TLS_Nano_Helm_PVP_camo7: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo7.paa"};
	};
	class TLS_Nano_Helm_PVP_camo8: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo8.paa"};
	};
	class TLS_Nano_Helm_PVP_camo9: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo9.paa"};
	};
	class TLS_Nano_Helm_PVP_camo10: TLS_Nano_Helm_PVP
	{
		scope = 2;
		hiddenSelections[] = {"TLS"};
		hiddenSelectionsTextures[] = {"TLS_Nano_set\Headger\data\TLS_Nano_Helm_camo10.paa"};
	};
};
