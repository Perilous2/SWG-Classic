--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor. 

rifle_sg82 = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/weapon/ranged/rifle/rifle_sg82.iff",
	craftingValues = {
		{"mindamage",64,97,0},
		{"maxdamage",101,157,0},
		{"attackspeed",8.1,5.7,1},
		{"woundchance",8,16,1},
		{"roundsused",30,65,0},
		{"hitpoints",750,750,0},
		{"zerorange",0,0,0},
		{"zerorangemod",-50,-50,0},
		{"midrange",35,35,0},
		{"midrangemod",10,10,0},
		{"maxrange",64,64,0},
		{"maxrangemod",-50,-50,0},
		{"attackhealthcost",33,17,0},
		{"attackactioncost",29,15,0},
		{"attackmindcost",56,29,0},
	},
	customizationStringNames = {},
	customizationValues = {},

	-- randomDotChance: The chance of this weapon object dropping with a random dot on it. Higher number means less chance. Set to 0 to always have a random dot.
	randomDotChance = 750,
	junkDealerTypeNeeded = JUNKARMS,
	junkMinValue = 25,
	junkMaxValue = 45

}

addLootItemTemplate("rifle_sg82", rifle_sg82)