A system that allows you to enter tasks into the game.
At the moment, there are 6 types of tasks, these are:

	1: Killing someone - You can set a specific weapon to complete the target.
	2: Delivery of items (At the end of the task, the target items are deleted)
	3: Search for items (At the end of the task, the target items are NOT deleted, for example-Task: earn 100,000 rubles)
	4: Crafting items
	5: Fishing for something (Fishing)
	6: Pluck the plant (Gardening, the plant should not be rotten)
	7: Exploration
	8: Action

The task setup system is quite flexible, you can configure:

	Task chains (you can't take a task if the previous ones are not completed)
	Setting a time limit for completing or perpetual tasks.
	Setting the interval for repeated task completion (If there is no interval, the quest can be completed only once)
	Setting goals
	Setting task rewards

A new parameter has been added to each target/reward element "conditions : [health level, percentage amount]"
Meaning for the element "target": only for item search/delivery quests, the first value sets the minimum health level of the item
the second parameter sets the minimum amount (as a percentage) for accounting purposes
    Health Levels:
	0 - pristine
	1 - worn
	2 - damage
	3 - badly damage
	4 - ruined

	"Targets" : [
			{
				"type" : "WaterBottle",
				"questType": 2,
				"count": 1,
				"extra": "",
				"description": "Bring water",
				"conditions": [0, 20]
			}
		]
- a bottle of water will be counted if the health level is not lower than pristine and the amount of water in the bottle is not less than 20%
example_№2:
	"Targets" : [
			{
				"type" : "WaterBottle",
				"questType": 2,
				"count": 1,
				"extra": "",
				"description": "Bring water",
				"conditions": [-1, -1]
			}
		]
		
 - a bottle of water will count for any level of health and and for any amount.
example_№3:

	"Targets" : [
			{
				"type" : "Nail",
				"questType": 2,
				"count": 150,
				"extra": "",
				"description": "Bring nails",
				"conditions": [1, 50]
			}
		]

    - Nails will be counted if the health level is not lower than Worn and !IMPORTANT! the number of nails in a stack is not less than 50% of the maximum number (70 nails in a stack,
    if a player has 2 stacks of 34 nails each, both stacks will not count as they do not pass by percentage).
    
	Meaning for the "reward" element: for the reward, only the first value from the condition will be taken into account, that is, the health level of the item (the amount is written in extra)


    - The "HideUnavailableQuests" parameter is added to the config with the NPC (values 0/1), if the parameter is enabled (1) the "Unavailable tasks" category will be hidden.
    - The "CanCancelQuest" parameter is added to the config with the NPC (values 0/1), if the parameter is enabled (1), then the tasks in the process can be canceled.
    - A new type of quest "Exploration" ("questType": 7), the essence of the quest is to visit one or more points on the map.
        example:
		
		{
            "type" : "2155 0 2279",
            "questType": 7,
            "count": 1,
            "extra": "1",
            "description": "Go to the chest near the river",
            "conditions": [5, -1]
        }

    the "type" parameter is responsible for the coordinate, "count" - SHOULD ALWAYS BE 1, the first element in the conditions parameter means the distance in meters that
    the player needs to get closer to the point (in this case, it is 5 meters)
    the second element in the conditions parameter means whether the height of the target coordinate will be calculated based on the height of the earth above sea level,
    or the height will not change (if -1 then the height will be calculated based on the ground, in this example the actual coordinate will be " 2155 5.9 2279")
    the extra parameter affects whether the player can see the target on the map ("extra" : "1" = can, any other value = no)
    - Added a new parameter "ImportanceNPC" (NPC importance) value 0/1/2
        Value 0:
            NPCs are not needed at all, any task is accepted / completed without their participation, and you do not need to specify the task ID either.
        Value 1:
            if the start of the task is registered in some NPC, then this task can only be taken from this NPC, if the start of the task does not belong to anyone,
            then this task can be accepted at any time/anywhere, with completion similar.
        Value 2:
            quests are accepted and completed ONLY with the participation of the NPC

    - New type of quest "Action" ("questType": 8), the essence of the quest is to perform some actions from the list Action.txt
	

ActionActivateTrap 					= set a trap
ActionBreakLongWoodenStick 			= break a long stick into small ones
ActionBuildOven 					= Build a furnace
ActionBuildPart 					= Build part of fence/construction site
ActionBuildStoneCircle 				= Lay out a circle of stones
ActionBuryAshes 					= Bury
ActionBuryBody 						= Bury the body
ActionCookOnStick 					= Cook on a stick
ActionCoverHeadSelf 				= Put the bag on yourself
ActionCoverHeadTarget 				= Put on the goal bag
ActionCreateGreenhouseGardenPlot 	= Dig up a garden plot
ActionDeployObject 					= Set Object
ActionDestroyCombinationLock 		= Destroy the lock
ActionDestroyPart 					= Destroy part of the fence/construction site
ActionDialCombinationLock 			= Dial the number on the lock in your hands
ActionDialCombinationLockOnTarget 	= Dial the number on the lock on the object
ActionDigGardenPlot 				= Dig up a garden plot
ActionDigInStash 					= Bury the item
ActionDigOutStash 					= Dig up the item
ActionDigWorms 						= Dig up Worms
ActionDisarmMine 					= Defuse the mine
ActionDisinfectPlant 				= Disinfect the plant
ActionDismantleGardenPlot 			= Remove the garden plot
ActionDismantleOven 				= Disassemble the oven
ActionDismantlePart 				= Disassemble part of the fence/construction site
ActionDismantleStoneCircle 			= Disassemble a circle of stones
ActionDrinkPondContinuous 			= A sip from the pond
ActionDrinkWellContinuous 			= Sip from the column
ActionFertilizeSlot 				= Fertilize the bed
ActionFoldBaseBuildingObject 		= Collapse the construction kit
ActionGagSelf 						= Insert a gag yourself
ActionGagTarget 					= Insert goal gag
ActionIgniteFireplaceByAir 			= Fan the bonfire
ActionLightItemOnFire 				= Set fire to an item with a bonfire
ActionLockDoors 					= Close the door with a master key
ActionLowerFlag 					= Lower the flag
ActionMineBush 						= Cut the bush
ActionMineRock 						= Crush the rock
ActionMineTree 						= Chop the tree
ActionMountBarbedWire 				= Attach the barbed wire to the fence
ActionPlaceOnGround 				= Place an object (instantly)
ActionRaiseFlag 					= Raise the flag
ActionRepairCarChassis 				= Fix the chassis
ActionRepairCarEngine 				= Fix the engine
ActionRepairCarPart 				= Fix a part of the machine with epoxy
ActionRepairPart 					= Repair part of fence/construction site
ActionRepairShelter 				= Fix a makeshift tent
ActionRepairTent 					= Fix the awning
ActionRepairTentPart 				= Repair part of the awning
ActionRestrainSelf 					= Tie your hands
ActionRestrainTarget 				= Link goals to yourself
ActionSawPlanks 					= To file the boards from the pallet
ActionShave 						= Shave yourself
ActionShaveTarget 					= Shave the target
ActionSkinning 						= Butcher the carcass
ActionTransferLiquid 				= Drain/pour liquid
ActionTuneFrequency 				= Change the frequency (radio receiver)
ActionTuneRadioStation 				= Change radio station
ActionUncoverHeadSelf 				= Remove the bag from yourself
ActionUncoverHeadTarget 			= Remove the bag from the target
ActionUngagSelf 					= Remove the gag yourself
ActionUngagTarget 					= Remove the goal gag
ActionUnlockDoors 					= Unlock the door (with a lock pick)
ActionUnMountBarbedWire 			= Remove the barbed wire
ActionUnpackBox 					= Unpack the box (cartridges, etc.)
ActionUnrestrainSelf 				= Free your hands to yourself
ActionUnrestrainTarget				= Release the target's hands
ActionUpgradeTorchFromGasPump 		= Saturate the torch with fuel
ActionWaterPlant 					= Water the flowers
ActionWringClothes 					= Squeeze something
ActionBandageSelf 					= Bandage yourself
ActionBandageTarget 				= Bandage the target
ActionBurnSewSelf 					= Treat the wound yourself
ActionBurnSewTarget 				= Treat the wound target
ActionCPR 							= Indirect Heart Massage
ActionDefibrilateSelf 				= Defrebrel yourself
ActionDefibrilateTarget 			= Defrebrel the target
ActionGiveBloodSelf 				= Make a blood transfusion for yourself
ActionGiveBloodTarget 				= Make a blood transfusion of the target
ActionGiveSalineSelf 				= To give an infusion to yourself (saline)
ActionGiveSalineTarget 				= Perform an infusion of the target (saline)
ActionMeasureTemperatureSelf 		= Change the temperature yourself
ActionMeasureTemperatureTarget 		= Measure target temperature
ActionSewSelf 						= Sew up the wound yourself
ActionSewTarget 					= Sew up the target's wound
ActionSplintSelf 					= Apply a tire to yourself
ActionSplintTarget 					= Apply target bus
ActionTestBloodSelf 				= Do a blood test for yourself
ActionTestBloodTarget 				= Do a blood test of your goal
ActionStartEngine 					= Start the engine
ActionBuildShelter 					= Build a leather shelter
ActionPackTent 						= Collapse the tent

NOT ALL ACTIONS CAN WORK !!!

Examople
"Targets" : [
            {
                "type" : "ActionBandageSelf",
                "questType": 8,
                "count": 1,
                "extra": "",
                "description": "Dress your wounds",
                "conditions": [-1, -1]
            },
            {
                "type" : "ActionDigWorms",
                "questType": 8,
                "count": 1,
                "extra": "",
                "description": "Dig Worms",
                "conditions": [-1, -1]
            },
            {
                "type" : "ActionActivateTrap",
                "questType": 8,
                "count": 1,
                "extra": "",
                "description": "Activate Trap",
                "conditions": [-1, -1]
            },
            {
                "type" : "ActionLockDoors",
                "questType": 8,
                "count": 1,
                "extra": "",
                "description": "Lock Doors",
                "conditions": [-1, -1]
            },
            {
                "type" : "ActionSkinning",
                "questType": 8,
                "count": 1,
                "extra": "Animal_GallusGallusDomesticus",
                "description": "Skinning cock",
                "conditions": [-1, -1]
            },
            {
                "type" : "ActionSkinning",
                "questType": 8,
                "count": 1,
                "extra": "",
                "description": "Cut up any carcass",
                "conditions": [-1, -1]
            }
        ]
		
 extra - classname of the object that is being interacted with (optional)