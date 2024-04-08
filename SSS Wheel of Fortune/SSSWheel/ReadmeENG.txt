ENG:
Mod Description:
The mod adds a "Wheel of Luck", in which players can win prizes by spending a specific amount of time in the game. The wheel is reset once a day at a specific hour specified in the config.
Mod Features:
- Logs are output to the WheelLog.log file;
- Recording of the time spent in the game, receiving the prize and the date of the last wheel reset is carried out in files in the Players folder, which is created by itself in the SSSWheel folder where the config is located. If necessary, you can reset the receipt of the prize manually, as well as give the prize to the player by specifying the prize ID in the "PrizeID"line. Changing the file of the time spent in the game will not change anything. The value of the time spent from the file is loaded only in the event of the player's death.
- You can set the following parameters in the config:
	- Enable / Disable the mod;
	- Required game time in seconds;
	- Wheel reset hour;
	- Turn on / off the display of the remaining game time on the home screen;
	- Turn on / off the "Drum" sound from "Field of Wonders"";
	- Prizes:
		- Prize name (text for the prize panel);
		- Item: (You can specify several items in one, in this case, when this prize is dropped, one random item will be selected from all the specified items)
- Item name;
			- Item Quantity (Quantity);
			- Item attachments (Specify the exact same item class, i.e. Name, quantity, attachments, inventory items);
			- Inventory items of this item (Specify the exact same class of the item, i.e. Name, quantity, attachments, inventory items).
		- The chance of dropping an item (Can be specified from 0.01% to 99%. !!!But the sum of the chances of all awards must necessarily be 100%!!!);
		- Display a notification to all players in the chat if someone has won this item;
		- The text of the notification in the chat, if the setting above is enabled (For example, if you write: "hit the jackpot!", then the chat will look like this "[Wheel of Fortune]: [player's nickname] hit the jackpot!").
- The mod is translated into Russian, English and German;
- You can open the wheel window with the Insert button. The button can be configured in the keyboard shortcut in the game settings.
Prizes can be set up in this way, for example, a Chest that contains an AKM, which has a 30-round magazine attached to it, but which contains 15 rounds. Or a bag that has an attachment, a pot that contains half a piece of meat, etc.
ATTENTION!!! There can only be 10 prizes! No more and no less, otherwise the mod will not work correctly.

If you want, you can change the design of the wheel window yourself in SSSWheelGui.pbo.

Explanation of the config:
{
    "isActive": 1, - On / off wheel
    "TimeAmount": 14400, - The time in seconds that you need to spend in the game to be able to spin the wheel
    "ResetHour": 4, - Wheel Reset Hour
    "showWheelTimerOnHud": 1, - Show the remaining time to get the wheel in the game
    "fieldOfMiraclesSound": 1, - Turning on the drum sound from " Field of Wonders"
    "Prizes": [ - Prizes
        {
            "PrizeName": "Random food can", - Name of the prize
            "Items": [ - The prize. If you specify several prizes, then when you win, one of them will be randomly selected.
                {
                    "ItemType": "PeachesCan", - Type of prize
                    "ItemQuantity": -1, - Quantity ("-1" is the maximum quantity)
                    "ItemAttachments": [], - Item attachments (example below, you can leave it blank)
                    "CargoItems": [] - Items that will be inside the inventory of this item (example below, you can leave it empty)
                },
                {
                    "ItemType": "SardinesCan",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "SpaghettiCan",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "TacticalBaconCan",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "TunaCan",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                }
            ],
            "PrizeChance": 50.0, - Prize chance (PLEASE NOTE THAT THE SUM OF ALL PRIZE CHANCES MUST BE EQUAL TO 100!!!)
            "showNotificationToAllPlayers": 0, - Show an ad in the chat to all players if someone has won this prize
            "NotificationText": "" - The text of the ad in the chat, for example, if you write: "hit the jackpot!", then in the chat it will look like this "[Wheel of Fortune]: [player's nickname] hit the jackpot!"
			"givePrizeOnlyInHands": 0 - the "Hand out only" option. It is necessary to avoid the following - for example: if a bag is spawned in the player's inventory, and there must be more content in this bag, it will not spawn due to the restriction of the inventory hierarchy. (1 - spawn the prize only in hands, 0 - in hands or in inventory).
        },
        {
            "PrizeName": "Random Medicine First Aid Kit",
            "Items": [
                {
                    "ItemType": "FirstAidKit",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [ - Example of inventory items
                        {
                            "ItemType": "BandageDressing",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "BloodTestKit",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "TetracyclineAntibiotics",
                            "ItemQuantity": 5,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "PurificationTablets",
                            "ItemQuantity": 5,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                },
                {
                    "ItemType": "FirstAidKit",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "BloodBagEmpty",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "SalineBag",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "CharcoalTablets",
                            "ItemQuantity": 5,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Epinephrine",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                },
                {
                    "ItemType": "FirstAidKit",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "BloodBagEmpty",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "BloodTestKit",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Morphine",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "PainkillerTablets",
                            "ItemQuantity": 5,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                }
            ],
            "PrizeChance": 5.0,
            "showNotificationToAllPlayers": 0,
            "NotificationText": ""
        },
        {
            "PrizeName": "Sea chest with military equipment",
            "Items": [
                {
                    "ItemType": "SeaChest",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "AKM",
                            "ItemQuantity": -1,
                            "ItemAttachments": [ - Example of attachments
                                {
                                    "ItemType": "Mag_AKM_30Rnd",
                                    "ItemQuantity": -1,
                                    "ItemAttachments": [],
                                    "CargoItems": []
                                },
                                {
                                    "ItemType": "AK_PlasticBttstck",
                                    "ItemQuantity": -1,
                                    "ItemAttachments": [],
                                    "CargoItems": []
                                }
                            ],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "FlashGrenade",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "RGD5Grenade",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Ammo_762x39",
                            "ItemQuantity": 10,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Ammo_762x39Tracer",
                            "ItemQuantity": 10,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                },
                {
                    "ItemType": "SeaChest",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "M4A1",
                            "ItemQuantity": -1,
                            "ItemAttachments": [
                                {
                                    "ItemType": "M4_CQBBttstck",
                                    "ItemQuantity": -1,
                                    "ItemAttachments": [],
                                    "CargoItems": []
                                },
                                {
                                    "ItemType": "M4_Suppressor",
                                    "ItemQuantity": -1,
                                    "ItemAttachments": [],
                                    "CargoItems": []
                                },
                                {
                                    "ItemType": "Mag_CMAG_30Rnd",
                                    "ItemQuantity": -1,
                                    "ItemAttachments": [],
                                    "CargoItems": []
                                }
                            ],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "M67Grenade",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "M18SmokeGrenade_Green",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Ammo_556x45",
                            "ItemQuantity": 10,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Ammo_556x45Tracer",
                            "ItemQuantity": 10,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                }
            ],
            "PrizeChance": 0.10000000149011612,
            "showNotificationToAllPlayers": 1,
            "NotificationText": "receives a valuable prize!"
        },
        {
            "PrizeName": "Random Military Bag",
            "Items": [
                {
                    "ItemType": "AliceBag_Black",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AliceBag_Camo",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AliceBag_Green",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AssaultBag_Black",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AssaultBag_Green",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AssaultBag_Ttsko",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "CoyoteBag_Brown",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "CoyoteBag_Green",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                }
            ],
            "PrizeChance": 5.0,
            "showNotificationToAllPlayers": 0,
            "NotificationText": ""
        },
        {
            "PrizeName": "Random Medium Tent",
            "Items": [
                {
                    "ItemType": "MediumTent",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "MediumTent_Green",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "MediumTent_Orange",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                }
            ],
            "PrizeChance": 0.4000000059604645,
            "showNotificationToAllPlayers": 1,
            "NotificationText": "receives a valuable prize!"
        },
        {
            "PrizeName": "Car Tent",
            "Items": [
                {
                    "ItemType": "CarTent",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                }
            ],
            "PrizeChance": 0.20000000298023225,
            "showNotificationToAllPlayers": 1,
            "NotificationText": "receives a valuable prize!"
        },
        {
            "PrizeName": "Large tent",
            "Items": [
                {
                    "ItemType": "LargeTent",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                }
            ],
            "PrizeChance": 0.20000000298023225,
            "showNotificationToAllPlayers": 1,
            "NotificationText": "receives a valuable prize!"
        },
        {
            "PrizeName": "Random ammo box",
            "Items": [
                {
                    "ItemType": "AmmoBox_00buck_10rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_12gaRubberSlug_10Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_12gaSlug_10Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_22_50Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_308WinTracer_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_308Win_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_357_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_380_35rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_45ACP_25rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_545x39Tracer_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_545x39_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_556x45Tracer_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_556x45_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_762x39Tracer_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_762x39_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_762x54Tracer_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_762x54_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_9x19_25rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_9x39AP_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "AmmoBox_9x39_20Rnd",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                }
            ],
            "PrizeChance": 10.0,
            "showNotificationToAllPlayers": 0,
            "NotificationText": ""
        },
        {
            "PrizeName": "Random barrel of building materials",
            "Items": [
                {
                    "ItemType": "Barrel_Blue",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "WoodenPlank",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "NailBox",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Hammer",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Pliers",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Shovel",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Rope",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "MetalWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "BarbedWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                },
                {
                    "ItemType": "Barrel_Green",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "WoodenPlank",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "NailBox",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Hammer",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Pliers",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Shovel",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Rope",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "MetalWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "BarbedWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                },
                {
                    "ItemType": "Barrel_Red",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "WoodenPlank",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "NailBox",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Hammer",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Pliers",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Shovel",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Rope",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "MetalWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "BarbedWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                },
                {
                    "ItemType": "Barrel_Yellow",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [
                        {
                            "ItemType": "WoodenPlank",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "NailBox",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Hammer",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Pliers",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Shovel",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "Rope",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "MetalWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        },
                        {
                            "ItemType": "BarbedWire",
                            "ItemQuantity": -1,
                            "ItemAttachments": [],
                            "CargoItems": []
                        }
                    ]
                }
            ],
            "PrizeChance": 0.10000000149011612,
            "showNotificationToAllPlayers": 1,
            "NotificationText": "receives a valuable prize!"
        },
        {
            "PrizeName": "Random soda can",
            "Items": [
                {
                    "ItemType": "SodaCan_Cola",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "SodaCan_Kvass",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "SodaCan_Pipsi",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                },
                {
                    "ItemType": "SodaCan_Spite",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": []
                }
            ],
            "PrizeChance": 29.0,
            "showNotificationToAllPlayers": 0,
            "NotificationText": ""
        }
    ]
}