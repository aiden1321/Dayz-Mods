////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:55:54 2024 : 'file' last modified on Sat Jan 08 16:55:44 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class kickman_skeleton
	{
		units[] = {"kck_skeleton_skull","kickman_skeleton"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgMods
{
	class DSF_Mutants
	{
		dir = "kickman_skeleton";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "kck_skeleton";
		credits = "Teddymane";
		author = "Teddymane";
		authorID = "0";
		version = 1;
		extra = 0;
		type = "mod";
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"kickman_skeleton/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"kickman_skeleton/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"kickman_skeleton/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class kck_skeleton_skull: Inventory_Base
	{
		scope = 2;
		displayName = "Черепушка";
		descriptionShort = "Черепушка скелета, холодная и пустая..";
		model = "Kickman_skeleton\kickman_skeleton_skull\kickman_skeleton_skull.p3d";
		isMeleeWeapon = 0;
		armAction = "TwoHanded";
		weight = 300;
		absorbency = 1;
		rotationFlags = 4;
		varQuantityInit = 1;
		varQuantityMin = 1;
		varQuantityMax = 1;
		itemSize[] = {2,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
			};
		};
	};
	class kickman_skeleton_base;
	class kickman_skeleton: kickman_skeleton_base
	{
		scope = 2;
		model = "kickman_skeleton\kickman_skeleton.p3d";
		hiddenSelections[] = {"body_m"};
		hiddenSelectionsTextures[] = {"kickman_skeleton\Data\Skeleton_co.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,15};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "kck_skeleton_skull";
				count = 1;
				quantityMinMaxCoef[] = {1,1};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4500;
				};
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "kickman_skeletonCalm_soundset";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "kickman_skeletonCalm_soundset";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "kickman_skeletonCalm_soundset";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "kickman_skeletonCalm_soundset";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "kck_skeletonBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "kickman_skeletonAttack_soundset";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "kickman_skeletonAttack_soundset";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "kickman_skeletonAttack_soundset";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "kickman_skeletonAttack_soundset";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "kickman_skeletonAttack_soundset";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "kickman_skeletonOnhit_soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "kickman_skeletonOnhit_soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "kickman_skeletonAttack_soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "kickman_skeletonCalm_soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "kickman_skeletonCalm_soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "kickman_skeletonAgr_soundset";
					id = 20;
				};
			};
		};
	};
};
