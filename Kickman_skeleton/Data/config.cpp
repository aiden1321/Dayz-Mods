////////////////////////////////////////////////////////////////////
//DeRap: Data\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:55:54 2024 : 'file' last modified on Sat Jan 08 16:55:44 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Convoy_Zombie
	{
		units[] = {"kickman_skeleton"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Zombies"};
	};
};
class CfgVehicles
{
	class ZombieBase;
	class Inventory_Base;
	class kickman_skeleton_base: ZombieBase
	{
		scope = 0;
		model = "\kickman_skeleton\kickman_skeleton.p3d";
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 4500;
				healthLevels[] = {{1.01,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.01,{}}};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "rag";
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
					healthLevels[] = {{1.01,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.01,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.5;
							};
							class Shock
							{
								damage = 1.5;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.1,1,0.5};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
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
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "dzrp_DemonleBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
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
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 90;
			};
			class Blood
			{
				damage = 2000;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackRun
			{
				attackName = "attackRun";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackShort
			{
				attackName = "attackShort";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackShortLow
			{
				attackName = "attackShortLow";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk","run"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class CrawlAttackMove
			{
				attackName = "crawlAttackMove";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] = {"walk"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class CrawlAttackStill
			{
				attackName = "crawlAttackStill";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] = {"idle"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
		};
	};
	class kickman_skeleton: kickman_skeleton_base
	{
		scope = 2;
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 60;
			};
		};
	};
};
