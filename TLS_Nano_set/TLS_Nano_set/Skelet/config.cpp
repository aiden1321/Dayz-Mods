////////////////////////////////////////////////////////////////////
//DeRap: Skelet\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:50:31 2024 : 'file' last modified on Sat Apr 30 22:12:06 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TLS_Nano_set
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class GorkaEJacket_ColorBase;
	class TLS_Nano_Skelet_ColorBase: GorkaEJacket_ColorBase
	{
		displayName = "Силовой каркас нанокостюма";
		descriptionShort = "Силовой каркас нанокостюма.";
		model = "\TLS_Nano_set\Skelet\TLS_Nano_skelet_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"shoulder","Belt_Back","Belt_Left","VestHolster","VestPouch"};
		itemInfo[] = {"Clothing","Back"};
		heatReduction = 0;
		coldReduction = 0;
		varTempVenomustureInit = 0;
		varTempVenomustureMin = 0;
		varTempVenomustureMax = 1;
		weight = -200000;
		itemSize[] = {4,4};
		itemsCargoSize[] = {10,15};
		quickBarBonus = 2;
		absorbency = 0;
		heatIsolation = 0.1;
		repairableWithKits[] = {7};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"TLS"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5930;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\GorkaUpper.rvmat","DZ\characters\tops\Data\GorkaUpper_g.rvmat"}},{0.7,{"DZ\characters\tops\Data\GorkaUpper.rvmat","DZ\characters\tops\Data\GorkaUpper_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\GorkaUpper_damage.rvmat","DZ\characters\tops\Data\GorkaUpper_g_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\GorkaUpper_damage.rvmat","DZ\characters\tops\Data\GorkaUpper_g_damage.rvmat"}},{0,{"DZ\characters\tops\Data\GorkaUpper_destruct.rvmat","DZ\characters\tops\Data\GorkaUpper_g_destruct.rvmat"}}};
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
			male = "\TLS_Nano_set\Skelet\TLS_Nano_skelet_m.p3d";
			female = "\TLS_Nano_set\Skelet\TLS_Nano_skelet_f.p3d";
		};
		class Protection
		{
			chemical = 0.25;
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
	class TLS_Nano_Skelet: TLS_Nano_Skelet_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\ArkaimPack_clothes\Gorka_TLS\Gorka_top\data\TLS_Gorka_co.paa"};
	};
};
