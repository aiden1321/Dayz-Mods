RU:
Описание мода:
Мод добавляет "Колесо удачи", в котором игроки могут выигрывать призы, проведя в игре конкретное количество времени. Колесо сбрасывается раз в сутки в конкретный час, указанный в конфиге.
Возможности мода:
- Вывод логов производится в файл WheelLog.log;
- Запись проведенного времени в игре, получение приза и дата последнего сброса колеса осуществляется в файлы в папке Player, которые создаются сами в папке SSSWheel, где находится конфиг. При необходимости можно сбросить получение приза вручную, а также выдать приз игроку, указав ID приза в строку "PrizeID". Изменение в файле проведенного времени в игре ничего не поменяет. Значение проведенного времени из файла загружаются только в случае смерти игрока.
- В конфиге можно задавать следующие параметры:
	- Включить/выключить мод;
	- Требуемое время игры в секундах;
	- Час сброса колеса;
	- Включение/выключение показывания оставшегося времени игры на главном экране;
	- Включение/выключение звука "Барабана" из "Поле чудес";
	- Призы:
		- Название приза (текст для панели призов);
		- Предмет: (Можно указать несколько предметов в одном, в таком случае при выпадании данного приза будет выбран один случайный предмет из всех указанных)
			- Название предмета;
			- Количество предмета (Квантити);
			- Аттачменты предмета (Указывается точно такой же класс предмета, т.е. Название, количество, аттачменты, предметы инвентаря);
			- Предметы инвентаря данного предмета (Указывается точно такой же класс предмета, т.е. Название, количество, аттачменты, предметы инвентаря).
		- Шанс выпадания предмета (Может указываться от 0,01% до 99%. !!!Но сумма шансов всех наград должна обязательно составлять 100%!!!);
		- Выводить уведомление всем игрокам в чат, если данный предмет кто-то выйграл;
		- Текст уведомления в чат, если включена настройка выше (Например, если написать: "сорвал куш!", то в чате будет выглядеть так "[Колесо удачи]: [ник игрока] сорвал куш!").
- Мод переведен на русский, английский и немецкий языки;
- Открыть окно колеса можно кнопкой Insert. Кнопку можно настроить в привзяке клавиш в настройках игры.
Призы можно настроить таким образом, например Сундук, внутри которого лежит АКМ, к которому присоединен магазин на 30 патрон, но в котором находится 15 патронов. Или сумка, у которой имеется аттачмент кастрюля, в который лежит половина куска мяса и т.д.
ВНИМАНИЕ!!! Призов может быть только 10! Не больше и не меньше, иначе мод будет работать некорректно.

Оформление окна колеса при желании можно поменять самим в SSSWheelGui.pbo.

Объяснение конфига:
{
    "isActive": 1, - Вкл/выкл колесо
    "TimeAmount": 14400, - Время в секундах, которое нужно провести в игре для получения возможности крутить колесо
    "ResetHour": 4, - Час сброса колеса
    "showWheelTimerOnHud": 1, - Показывать оставшееся время до получения колеса в игре
    "fieldOfMiraclesSound": 1, - Включение звука барабана из "Поле чудес"
    "Prizes": [ - Призы
        {
            "PrizeName": "Random food can", - Название приза
            "Items": [ - Приз. Если указать несколько призов, то при его выигрыше случайным образом выберится один из них.
                {
                    "ItemType": "PeachesCan", - Тип приза
                    "ItemQuantity": -1, - Количество ("-1" - максимальное количество)
                    "ItemAttachments": [], - Аттачменты предмета (пример ниже, можно оставить пустым)
                    "CargoItems": [] - Предметы, которые будут внутри инвентаря данного предмета (пример ниже, можно оставить пустым)
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
            "PrizeChance": 50.0, - шанс приза (ВНИМАНИЕ, СУММА ВСЕХ ШАНСОВ ПРИЗОВ ОБЯЗАТЕЛЬНО ДОЛЖНА БЫТЬ РАВНА 100!!!)
            "showNotificationToAllPlayers": 0, (Показывать объявление в чат всем игрокам, если кто-то выйграл этот приз)
            "NotificationText": "" (Текст объявления в чат, например, если написать: "сорвал куш!", то в чате будет выглядеть так "[Колесо удачи]: [ник игрока] сорвал куш!")
			"givePrizeOnlyInHands": 0 - параметр "Выдавать только в руки". Необходим для избежания следующего - например: если сумка спавнится в инвентарь игрока, и, в этой сумке должно быть еще содержимое, оно не заспавнится из-за ограничения иерархии инвентаря. (1 - спавнить приз только в руки, 0 - в руки или в инвентарь).
        },
        {
            "PrizeName": "Random Medicine First Aid Kit",
            "Items": [
                {
                    "ItemType": "FirstAidKit",
                    "ItemQuantity": -1,
                    "ItemAttachments": [],
                    "CargoItems": [ - Пример предметов инвентаря
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
                            "ItemAttachments": [ - Пример аттачментов
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