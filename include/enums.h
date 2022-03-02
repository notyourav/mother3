#ifndef ENUMS_H
#define ENUMS_H

#include "global.h"

enum Item {
    ItemEmpty,
    ItemLightersLumber,
    ItemFreshLumber,
    ItemStick,
    ItemBetterStick,
    ItemEasyGripStick,
    ItemGoodStick,
    ItemVeryGoodStick,
    ItemFunnyStick,
    ItemVigorStick,
    ItemCleverStick,
    ItemMasterStick,
    ItemMysticalStick,
    ItemGloves,
    ItemDurableGloves,
    ItemChicGloves,
    ItemStrongGloves,
    ItemMagicGloves,
    ItemSevolg,
    ItemExpensiveGloves,
    ItemAngelGloves,
    ItemMysticalGloves,
    ItemOrdinaryShoes,
    ItemDurableShoes,
    ItemSharpShoes,
    ItemUltimateShoes,
    ItemMysticalShoes,
    ItemGoodShoes,
    ItemRubberBoots,
    ItemBarefootShoes,
    ItemNonSlipShoes,
    ItemHandyYoYo,
    ItemCanineWeapon,
    ItemDCMCPamphlet,
    ItemFakeBat,
    ItemFakeFryingPan,
    ItemRealBat,
    ItemMiniMiniCharm,
    ItemFlyCharm,
    ItemBantamCharm,
    ItemFeatherCharm,
    ItemPumiceCharm,
    ItemHeavyCharm,
    ItemThudCharm,
    ItemWhiteCollar,
    ItemBrownCollar,
    ItemBlackCollar,
    ItemStripedCollar,
    ItemRedCollar,
    ItemDCMCShirt,
    ItemRubberCape,
    ItemAlohaCoat,
    ItemWarmSweater,
    ItemGoddessBustier,
    ItemAwesomeCloak,
    ItemManlyBandana,
    ItemChickBandana,
    ItemSparrowBandana,
    ItemRailBandana,
    ItemSwallowBandana,
    ItemCrowBandana,
    ItemKiteBandana,
    ItemHorusBandana,
    ItemOrdinaryHat,
    ItemCowHat,
    ItemAlligatorHat,
    ItemBearHat,
    ItemOtterHat,
    ItemScarletRibbon,
    ItemAzureRibbon,
    ItemBoingRibbon,
    ItemFairyRibbon,
    ItemAngelRibbon,
    ItemGoddessRibbon,
    ItemDCMCHat,
    ItemAwesomeCrown,
    ItemAriesBracelet,
    ItemAquariueBracelet,
    ItemPiscesBracelet,
    ItemCapricornBracelet,
    ItemTaurusBracelet,
    ItemGeminiBracelet,
    ItemCancerBracelet,
    ItemLeoBracelet,
    ItemVirgoBracelet,
    ItemLibraBracelet,
    ItemScorpioBracelet,
    ItemSagittariusBracelet,
    ItemDCMCRing,
    ItemAwesomeRing,
    ItemFavoriteFood,
    ItemNut,
    ItemNutBread,
    ItemFreshMilk,
    ItemRottenMilk,
    ItemYogurt,
    ItemEdibleMushroom,
    ItemInnitTea,
    ItemBeefJerky,
    ItemFreshEgg,
    ItemRottenEclair,
    ItemRottenBavarois,
    ItemPeculiarCheese,
    ItemBagOfPorkChips,
    ItemLuxuryBanana,
    ItemBreadRoll,
    ItemFizzySoda,
    ItemBigCitySoda,
    ItemBigCityCola,
    ItemBigCityBurger,
    ItemBagOfBigCityFries,
    ItemDoggyBiscuit,
    ItemDoggyJerky,
    ItemWhiteCroissant,
    ItemCupOfPorkNoodles,
    ItemPorkStew,
    ItemSincerityDumplings,
    ItemStrawberryTofu,
    ItemLuckyRice,
    ItemLottoMeal,
    ItemJumboShrimpSoup,
    ItemGiantAbaloneSteak,
    ItemDoubleJerky,
    ItemGrilledChicken,
    ItemGrilledFish,
    ItemPastaWithAPast,
    ItemFavoritePizza,
    ItemKingBurger,
    ItemBeefsteak,
    ItemRichKidStew,
    ItemRichParfait,
    ItemHotDogSushi,
    ItemMagicGelatin,
    ItemMagicTart,
    ItemMagicPudding,
    ItemMagicCake,
    ItemAntidote,
    ItemAntiParalysis,
    ItemAlarmCicada,
    ItemFreshMint,
    ItemPaperFan,
    ItemRecollectionBell,
    ItemEyeDrops,
    ItemFleaPowder,
    ItemSecretHerb,
    ItemCupOfLifenoodles,
    ItemHotSpringEgg,
    ItemThunderBomb,
    ItemRunningBomb,
    ItemSprintingBomb,
    ItemPencilRocket,
    ItemBomb,
    ItemSuperBomb,
    ItemNewYearsEveBomb,
    ItemHoneyShower,
    ItemAncientBanana,
    ItemDoorknob,
    ItemBugSpray,
    ItemSaltwaterGun,
    ItemOffenseSpray,
    ItemDefenseSpray,
    ItemEnemyBufferizer,
    ItemEnemyWimperizer,
    ItemAttackAttractor,
    ItemMadeYouLook,
    ItemDragonfly,
    ItemSilverDragonfly,
    ItemChick,
    ItemChicken,
    ItemPickledVeggiePlate,
    ItemMeteotite,
    ItemFriendsYoYo,
    ItemDragoFang,
    ItemDung,
    ItemDolphinOssicle,
    ItemSpikyWeapon,
    ItemKnitSweater,
    ItemDCMCBoxers,
    ItemMagicPendant,
    ItemEncouragingWords,
    ItemBakedYam,
    ItemMoleCricketBrother,
    ItemHermitCrabShell,
    ItemSuspiciousTea,
    ItemFlamePendant,
    ItemIcePendant,
    ItemThunderPendant,
    ItemCourageBadge,
    ItemSouvenirDress,
    ItemPencilEraser,
    ItemFranklinBadge,
    ItemKidsShirt,
    ItemGoodKidsShirt,
    ItemKidsHat,
    ItemJarOfYummyPickles,
    ItemRedHat,
    ItemWhiteRibbon,
    ItemBird,
    ItemMemorySnake,
    ItemWatersOfTime,
    ItemStinkbugsMemory,
    ItemPhrygiasNotebook,
    ItemShieldSnatcher,
    ItemTest,
    ItemCF,
    ItemD0,
    ItemD1,
    ItemTriviaCard1,
    ItemTriviaCard2,
    ItemTriviaCard3,
    ItemTriviaCard4,
    ItemWallStaples,
    ItemSirenBeetle,
    ItemSmokeBomb,
    ItemHypnoPendulum,
    ItemScaryMask,
    ItemTickleStick,
    ItemDrawbridgeKey,
    ItemNobleSpittoon,
    ItemPendant,
    ItemEggOfLight,
    ItemScrapOfCloth,
    ItemPigMarkNotebook,
    ItemChildsShoe,
    ItemHandFile,
    ItemRopeSnake,
    ItemRopeSnakeDX,
    ItemTransceiver,
    ItemTicket,
    ItemBattleMemory,
    ItemCarrierPigeon,
    ItemRazorAndLipstick,
    ItemIoniasMemento,
    ItemDoriasMemento,
    ItemPhrygiasMemento,
    ItemLydiasMemento,
    ItemMissysMemento,
    ItemAeoliasMemento,
    ItemTazmilyMap,
    ItemOsoheSketch,
    ItemUndergroundMap,
    ItemRailwayMap,
    ItemAreaMap,
    ItemAtticGuide,
    ItemSaturnValleyMap,
    ItemSeaFloorMap,
    ItemCaveMap,
    ItemCityMap,
    ItemTowerSketch,
    ItemChimeraLabMap,
    ItemCricketHoleMap,
    ItemHighwayMap,
    ItemFactorySketch,
};

enum Sound {
    SFX_NULL = 0x0,
    SFX_1 = 0x1,
    SONG_ADOLESCENCE = 0x2,
    SONG_STAND_UP_STRONG = 0x3,
    SONG_NONE_4 = 0x4,
    SONG_BIG_SHOTS_THEME = 0x5,
    SONG_RAGTIME_OSOHE = 0x6,
    SONG_LEDERS_GYMNOPEDIE = 0x7,
    SONG_RUN_MYDOG_RUN = 0x8,
    SONG_BON_VOYAGE_AMIGO = 0x9,
    SONG_TO_SUNSHINE_FOREST = 0xA,
    SONG_FFFIRE = 0xB,
    SONG_MORNING_ALREADY = 0xC,
    SONG_LIKE_LOOKING_FOR_DROPPED_PICKLES = 0xD,
    SONG_16_MELODIES = 0xE,
    SONG_PHANTASMAGORIC = 0xF,
    SONG_SHE_WAS_LIKE_A_SUNFLOWER = 0x10,
    SONG_I_AM_PORKY = 0x11,
    SONG_HIS_HIGHNESS_THEME = 0x12,
    SONG_A_CERTAIN_SOMEONES_MEMORIES = 0x13,
    SONG_AND_THEN_THERE_WERE_NONE = 0x14,
    SONG_NONE_15 = 0x15,
    SONG_NONE_16 = 0x16,
    SONG_NONE_17 = 0x17,
    SONG_BLESSING = 0x18,
    SONG_HEY_BROTHER = 0x19,
    SONG_TANETANE_ISLAND = 0x1A,
    SONG_O2_IN_LOVE = 0x1B,
    SONG_MOLE_CRICKET_ELDER = 0x1C,
    SONG_SUNFLOWERS_AND_ILLUSIONS = 0x1D,
    SONG_VS_ULTIMATE_CHIMERA = 0x1E,
    SONG_ULTIMATE_CHIMERA_REVIVED = 0x1F,
    SONG_MOTHER_3_LOVE_THEME = 0x20,
    SONG_SOUND_OF_SIREN = 0x21,
    SONG_GENTLE_RAIN = 0x22,
    SONG_MAGYPSYS_HOME = 0x23,
    SONG_FOREST_PRAYER_SANCTUARY = 0x24,
    SONG_FUN_BAZAAR = 0x25,
    SONG_WHATS_THAT = 0x26,
    SONG_HIPPOS = 0x27,
    SONG_FUN_NAMING = 0x28,
    SONG_SOUND_OF_SIREN2 = 0x29,
    SONG_THE_WATERS_GREAT = 0x2A,
    SONG_MUCH_BETTER = 0x2B,
    SONG_RIGHT_LEFT_LIGHT_REFT = 0x2C,
    SONG_CONFUSION = 0x2D,
    SONG_A_LITTLE_ELEGY = 0x2E,
    SONG_MAGYPSY_PARTY = 0x2F,
    SONG_A_LETTER_TO_YOU = 0x30,
    SONG_MURASAKI_FOREST = 0x31,
    SONG_MOTHER = 0x32,
    SONG_MEMORY_OF_LIFE = 0x33,
    SONG_VOLCANO_INFERNO = 0x34,
    SONG_A_TINY_ENORMOUS_MIRACLE = 0x35,
    SONG_MAGYPSIES_GONE = 0x36,
    SONG_RED_GREEN_YELLOW_YELLOW = 0x37,
    SONG_BLIP_BLIP_HIGH_SCORE = 0x38,
    SONG_NONE_39 = 0x39,
    SONG_LETS_BEGIN = 0x3A,
    SONG_BEACH_COMBING = 0x3B,
    SONG_WE_HUMMING = 0x3C,
    SONG_OPEN_SESAME_OIL = 0x3D,
    SONG_MOMS_HOMETOWN = 0x3E,
    SONG_CHUPICHUPYOI = 0x3F,
    SONG_PASSING_DOWN_SECRETS = 0x40,
    SONG_A_MASTER_A_FATHER_A_THIEF = 0x41,
    SONG_CAUTIOUSLY = 0x42,
    SONG_OSOHE_CASTLE = 0x43,
    SONG_POLTERGEIST = 0x44,
    SONG_THE_ROOM_TOO_MYSTERIOUS = 0x45,
    SONG_OPEN_SESAME_TOFU = 0x46,
    SONG_LOG_O_TYPE = 0x47,
    SONG_FOREST_OF_FLAMES = 0x48,
    SONG_NONE_49 = 0x49,
    SONG_HOMELY_YADO_INN = 0x4A,
    SONG_HARD_RAIN = 0x4B,
    SONG_IN_THE_ROOM = 0x4C,
    SONG_SOMEWHERE_SOMEDAY = 0x4D,
    SONG_SORROWFUL_TAZMILY = 0x4E,
    SONG_GOING_ALONE = 0x4F,
    SONG_GOOD_MORNING = 0x50,
    SONG_THE_GREEN_TRAINS_FUN_REMIX = 0x51,
    SONG_UNSETTLING_PRESERVE = 0x52,
    SONG_AS_YOU_WISH = 0x53,
    SONG_SAVE = 0x54,
    SONG_SNOWMAN = 0x55,
    AMB_TOP_OF_THUNDER_TOWER = 0x56,
    AMB_WINDY = 0x57,
    AMB_MACHINERY = 0x58,
    AMB_THUNDER_TOWER2 = 0x59,
    AMB_CLIFF_WINDY = 0x5A,
    AMB_BIRDS = 0x5B,
    AMB_STRONG_WIND = 0x5C,
    AMB_CAVE = 0x5D,
    AMB_MACHINERY2 = 0x5E,
    AMB_FACTORY = 0x5F,
    AMB_FACTORY_UNDERGROUND = 0x60,
    AMB_NIGHT_FOREST = 0x61,
    AMB_VEHICLE = 0x62,
    AMB_RAIN1 = 0x63,
    AMB_CHEERING = 0x64,
    AMB_FACTORY2 = 0x65,
    AMB_PORKY = 0x66,
    AMB_NONE_67 = 0x67,
    AMB_FANFARE = 0x68,
    AMB_CAVE_STREAM = 0x69,
    AMB_CHIMERA_RESEARCH = 0x6A,
    SONG_GET_ITEM = 0x6B,
    SONG_GET_ITEM2 = 0x6C,
    SONG_PIGMASK_MOTIF = 0x6D,
    SONG_WHAT_MOTIF = 0x6E,
    SONG_RAIN = 0x6F,
    SONG_CHAPTER_1 = 0x70,
    SONG_CHAPTER_2 = 0x71,
    SONG_WERE_GOING_TOGETHER = 0x72,
    SONG_MR_WHATS_HIS_NOSE = 0x73,
    SONG_MR_SATURN_THEME_Z = 0x74,
    SONG_PINK_SHELL = 0x75,
    SONG_AUTOMATED = 0x76,
    SONG_LETS_GO_TOGETHER = 0x77,
    SONG_TOGETHER = 0x78,
    SONG_RAILWAY_IN_OUR_VILLAGE = 0x79,
    SONG_HAPPY_TOWN = 0x7A,
    SONG_LONELY_ROOM = 0x7B,
    SONG_CLUB_TITIBOO_THEME = 0x7C,
    SONG_LUCKYS_ROOM = 0x7D,
    SONG_WHATS_BEYOND_THE_TUNNEL_REVERB = 0x7E,
    SONG_WHATS_BEYOND_THE_TUNNEL = 0x7F,
    SONG_GIRLS_ROOM = 0x80,
    SONG_REFRESHING_TOILETS = 0x81,
    SONG_HIS_HIGHNESS_PLAYROOM = 0x82,
    SONG_MUCH_BETTER2 = 0x83,
    AMB_BEACH = 0x84,
    AMB_LEDER_BELL = 0x85,
    AMB_FIRE = 0x86,
    AMB_RAIN2 = 0x87,
    SONG_DANGER = 0x88,
    SONG_THE_ATTICS_A_DUNGEON = 0x89,
    SONG_NONE_8A = 0x8A,
    SONG_NONE_8B = 0x8B,
    SONG_ISNT_THIS_SUCH_A_UTOPIA = 0x8C,
    SONG_WAR_OF_THE_WORDS = 0x8D,
    SONG_GORGEOUS = 0x8E,
    SONG_INNER_TURN_RADIUS = 0x8F,
    SONG_TRUE_WELCOME2 = 0x90,
    SONG_NEW_PORK_BASSA = 0x91,
    SONG_UNDER_CONSTRUCTION = 0x92,
    SONG_BEAUTY_AND_TASTY = 0x93,
    SONG_WIND = 0x94,
    SONG_DURT_CAFE = 0x95,
    SONG_A_HAREM = 0x96,
    SONG_AFRO_BAM = 0x97,
    SONG_FILTHY_APARTMENTS = 0x98,
    SONG_NO_EATING_CRACKERS = 0x99,
    SONG_FINAL_CAVE = 0x9A,
    SONG_SOMETHING_STRANGE_8BIT = 0x9B,
    SONG_TRY_KIND_OF_HARD = 0x9C,
    SONG_GOOD_MORNING_UNDERWATER = 0x9D,
    SONG_RIDE_THE_ROPEWAY = 0x9E,
    SONG_HIS_HIGHNESS_2S = 0x9F,
    SONG_HIS_HIGHNESS_2H = 0xA0,
    SONG_TIME_PASSAGE = 0xA1,
    SONG_NAME_THESE_CHILDREN = 0xA2,
    SONG_MEMORY_OF_MOTHER = 0xA3,
    SONG_THE_WATERS_GREAT2 = 0xA4,
    SONG_BARREN_FACTORY = 0xA5,
    SONG_DANGEROUS_HIGHWAY = 0xA6,
    SONG_BEYOND_THE_SUNSHINE_FOREST = 0xA7,
    SONG_MIND_OF_A_THIEF = 0xA8,
    SONG_ROCK_AND_ROLL = 0xA9,
    SONG_MONKEYS_LOVE = 0xAA,
    SONG_CHAPTER_3 = 0xAB,
    SONG_PORK_BEAN = 0xAC,
    SONG_MONKEYS_DELIVERY_SERVICE = 0xAD,
    SONG_EVEN_IN_MY_DREAMS = 0xAE,
    SONG_PEDDLERS_GRAND_SPEECH = 0xAF,
    SONG_DANCE = 0xB0,
    SONG_LAUGH_BE_HAPPY = 0xB1,
    SONG_HOTEL_YADO = 0xB2,
    SONG_MY_WONDERFUL_ROOM = 0xB3,
    SONG_FUN_SHOPPING = 0xB4,
    SONG_IS_ANYONE_THERE = 0xB5,
    AMB_STREAM = 0xB6,
    AMB_LOW_OXYGEN = 0xB7,
    AMB_WATERFALL = 0xB8,
    AMB_CINEMA_8BIT = 0xB9,
    SFX_MAGIC1 = 0xBA,
    SFX_CHIMNEY_POP = 0xBB,
    SFX_PIGMASK_SALUTE = 0xBC,
    SFX_CREAK = 0xBD,
    SFX_BEEP = 0xBE,
    SFX_COLLAR_SHOCK = 0xBF,
    SFX_KICK = 0xC0,
    SFX_MOVE = 0xC1,
    SFX_BUTTON_POP = 0xC2,
    SFX_MONEY = 0xC3,
    SFX_CUTSCENE_UNK = 0xC4,
    SFX_NONE_C5 = 0xC5,
    SFX_CLAYMAN = 0xC6,
    SFX_SCARY_LOOP = 0xC7,
    SFX_ULTIMATE_CHIMERA_FAR = 0xC8,
    SFX_ITEM_GET_GOOD = 0xC9,
    SFX_GIYGAS_BREATH = 0xCA,
    SFX_GOT_A = 0xCB,
    SFX_NONE_CC = 0xCC,
    SFX_NONE_CD = 0xCD,
    SFX_NONE_CE = 0xCE,
    SFX_CRUMBLING_ROCK = 0xCF,
    SFX_MENU_CURSOR_UD = 0xD0,
    SFX_MENU_CURSOR_LR = 0xD1,
    SFX_MENU_SELECT = 0xD2,
    SFX_MENU_CANCEL = 0xD3,
    SFX_MENU_UNKNOWN1 = 0xD4,
    SFX_MENU_UNKNOWN2 = 0xD5,
    SFX_MENU_ERROR = 0xD6,
    SFX_MENU_UNKNOWN4 = 0xD7,
    SFX_MENU_SLIDE_IN = 0xD8,
    SFX_MENU_SLIDE_OUT = 0xD9,
    SFX_MENU_SWITCH_PAGE = 0xDA,
    SFX_MENU_BEEP = 0xDB,
    SFX_STAT_MENU_ENTER = 0xDC,
    SFX_STAT_MENU_LEAVE = 0xDD,
    SFX_STAT_MENU_ERROR = 0xDE,
    SFX_MENU_ENTER = 0xDF,
    SFX_MENU_LEAVE = 0xE0,
    SFX_BEEP2 = 0xE1,
    SFX_BEEP3 = 0xE2,
    SFX_BEEP4 = 0xE3,
    SFX_SAVE_ENTER = 0xE4,
    SFX_SAVE_LEAVE = 0xE5,
    SFX_POP = 0xE6,
    SFX_TRANSACTION = 0xE7,
    SFX_PLAYER_BURNT = 0xE8,
    SFX_CHEER2 = 0xE9,
    SFX_CROWD_MURMUR = 0xEA,
    SFX_MACHINE = 0xEB,
    SFX_BUMP = 0xEC,
    SFX_BEEP5 = 0xED,
    SFX_BEEP6 = 0xEE,
    AMB_SHOWER = 0xEF,
    SFX_SLASH = 0xF0,
    AMB_MACHINE2 = 0xF1,
    SFX_OPEN_PRESENT = 0xF2,
    AMB_CLIMBING_THUNDER_TOWER = 0xF3,
    SFX_ALARM = 0xF4,
    SFX_GOT_ITEM = 0xF5,
    SFX_VO_OK = 0xF6,
    AMB_MACHINERY3 = 0xF7,
    AMB_VENTS = 0xF8,
    SFX_NONE_F9 = 0xF9,
    SFX_NONE_FA = 0xFA,
    SFX_NONE_FB = 0xFB,
    SONG_WITH_MY_FATHER_INLAW = 0xFC,
    SONG_ALECS_LOG_HOUSE = 0xFD,
    AMB_BONEY_SEWERS = 0xFE,
    SFX_NONE_FF = 0xFF,
    SFX_NONE_100 = 0x100,
    SFX_NONE_101 = 0x101,
    SFX_NONE_102 = 0x102,
    INST_LUCAS_1_1 = 0x103,
    INST_LUCAS_1_2 = 0x104,
    INST_LUCAS_1_3 = 0x105,
    INST_LUCAS_2_1 = 0x106,
    INST_LUCAS_2_2 = 0x107,
    INST_LUCAS_2_3 = 0x108,
    INST_LUCAS_3_1 = 0x109,
    INST_LUCAS_3_2 = 0x10A,
    INST_LUCAS_3_3 = 0x10B,
    INST_LUCAS_4_1 = 0x10C,
    INST_LUCAS_4_2 = 0x10D,
    INST_LUCAS_4_3 = 0x10E,
    INST_LUCAS_5_1 = 0x10F,
    INST_LUCAS_5_2 = 0x110,
    INST_LUCAS_5_3 = 0x111,
    INST_LUCAS_6_1 = 0x112,
    INST_LUCAS_6_2 = 0x113,
    INST_LUCAS_6_3 = 0x114,
    SFX_LUCAS_MISS = 0x115,
    INST_CLAUS_1_1 = 0x116,
    INST_CLAUS_1_2 = 0x117,
    INST_CLAUS_1_3 = 0x118,
    INST_CLAUS_2_1 = 0x119,
    INST_CLAUS_2_2 = 0x11A,
    INST_CLAUS_2_3 = 0x11B,
    INST_CLAUS_3_1 = 0x11C,
    INST_CLAUS_3_2 = 0x11D,
    INST_CLAUS_3_3 = 0x11E,
    INST_CLAUS_4_1 = 0x11F,
    INST_CLAUS_4_2 = 0x120,
    INST_CLAUS_4_3 = 0x121,
    INST_CLAUS_5_1 = 0x122,
    INST_CLAUS_5_2 = 0x123,
    INST_CLAUS_5_3 = 0x124,
    INST_CLAUS_6_1 = 0x125,
    INST_CLAUS_6_2 = 0x126,
    INST_CLAUS_6_3 = 0x127,
    SFX_CLAUS_MISS = 0x128,
    INST_FLINT_1_1 = 0x129,
    INST_FLINT_1_2 = 0x12A,
    INST_FLINT_1_3 = 0x12B,
    INST_FLINT_2_1 = 0x12C,
    INST_FLINT_2_2 = 0x12D,
    INST_FLINT_2_3 = 0x12E,
    INST_FLINT_3_1 = 0x12F,
    INST_FLINT_3_2 = 0x130,
    INST_FLINT_3_3 = 0x131,
    INST_FLINT_4_1 = 0x132,
    INST_FLINT_4_2 = 0x133,
    INST_FLINT_4_3 = 0x134,
    INST_FLINT_5_1 = 0x135,
    INST_FLINT_5_2 = 0x136,
    INST_FLINT_5_3 = 0x137,
    INST_FLINT_6_1 = 0x138,
    INST_FLINT_6_2 = 0x139,
    INST_FLINT_6_3 = 0x13A,
    SFX_FLINT_MISS = 0x13B,
    INST_BONEY_1_1 = 0x13C,
    INST_BONEY_1_2 = 0x13D,
    INST_BONEY_1_3 = 0x13E,
    INST_BONEY_2_1 = 0x13F,
    INST_BONEY_2_2 = 0x140,
    INST_BONEY_2_3 = 0x141,
    INST_BONEY_3_1 = 0x142,
    INST_BONEY_3_2 = 0x143,
    INST_BONEY_3_3 = 0x144,
    INST_BONEY_4_1 = 0x145,
    INST_BONEY_4_2 = 0x146,
    INST_BONEY_4_3 = 0x147,
    INST_BONEY_5_1 = 0x148,
    INST_BONEY_5_2 = 0x149,
    INST_BONEY_5_3 = 0x14A,
    INST_BONEY_6_1 = 0x14B,
    INST_BONEY_6_2 = 0x14C,
    INST_BONEY_6_3 = 0x14D,
    SFX_BONEY_MISS = 0x14E,
    INST_SALSA_1_1 = 0x14F,
    INST_SALSA_1_2 = 0x150,
    INST_SALSA_1_3 = 0x151,
    INST_SALSA_2_1 = 0x152,
    INST_SALSA_2_2 = 0x153,
    INST_SALSA_2_3 = 0x154,
    INST_SALSA_3_1 = 0x155,
    INST_SALSA_3_2 = 0x156,
    INST_SALSA_3_3 = 0x157,
    INST_SALSA_4_1 = 0x158,
    INST_SALSA_4_2 = 0x159,
    INST_SALSA_4_3 = 0x15A,
    INST_SALSA_5_1 = 0x15B,
    INST_SALSA_5_2 = 0x15C,
    INST_SALSA_5_3 = 0x15D,
    INST_SALSA_6_1 = 0x15E,
    INST_SALSA_6_2 = 0x15F,
    INST_SALSA_6_3 = 0x160,
    SFX_SALSA_MISS = 0x161,
    INST_KUMATORA_1_1 = 0x162,
    INST_KUMATORA_1_2 = 0x163,
    INST_KUMATORA_1_3 = 0x164,
    INST_KUMATORA_2_1 = 0x165,
    INST_KUMATORA_2_2 = 0x166,
    INST_KUMATORA_2_3 = 0x167,
    INST_KUMATORA_3_1 = 0x168,
    INST_KUMATORA_3_2 = 0x169,
    INST_KUMATORA_3_3 = 0x16A,
    INST_KUMATORA_4_1 = 0x16B,
    INST_KUMATORA_4_2 = 0x16C,
    INST_KUMATORA_4_3 = 0x16D,
    INST_KUMATORA_5_1 = 0x16E,
    INST_KUMATORA_5_2 = 0x16F,
    INST_KUMATORA_5_3 = 0x170,
    INST_KUMATORA_6_1 = 0x171,
    INST_KUMATORA_6_2 = 0x172,
    INST_KUMATORA_6_3 = 0x173,
    SFX_KUMATORA_MISS = 0x174,
    INST_DUSTER_1_1 = 0x175,
    INST_DUSTER_1_2 = 0x176,
    INST_DUSTER_1_3 = 0x177,
    INST_DUSTER_2_1 = 0x178,
    INST_DUSTER_2_2 = 0x179,
    INST_DUSTER_2_3 = 0x17A,
    INST_DUSTER_3_1 = 0x17B,
    INST_DUSTER_3_2 = 0x17C,
    INST_DUSTER_3_3 = 0x17D,
    INST_DUSTER_4_1 = 0x17E,
    INST_DUSTER_4_2 = 0x17F,
    INST_DUSTER_4_3 = 0x180,
    INST_DUSTER_5_1 = 0x181,
    INST_DUSTER_5_2 = 0x182,
    INST_DUSTER_5_3 = 0x183,
    INST_DUSTER_6_1 = 0x184,
    INST_DUSTER_6_2 = 0x185,
    INST_DUSTER_6_3 = 0x186,
    SFX_DUSTER_MISS = 0x187,
    SONG_VICTORY = 0x188,
    SFX_NONE_189 = 0x189,
    SONG_HAULING_IS_HARD = 0x18A,
    SONG_OH_NO = 0x18B,
    SONG_TRUE_WELCOME = 0x18C,
    SONG_EB64_BATTLE = 0x18D,
    SONG_MARCHING_ATTACK = 0x18E,
    SONG_16BEAT_ATTACK = 0x18F,
    SONG_BREADS_READY = 0x190,
    SONG_SOMETHING_STRANGE = 0x191,
    SONG_TAZMILY_UNUSED = 0x192,
    SONG_ABSOLUTELY_SAFE_CAPSULE = 0x193,
    SONG_MASTER_PORKYS_THEME = 0x194,
    SONG_PORKYS_PORKIES = 0x195,
    SONG_NATURAL_KILLER_CYBORG = 0x196,
    SONG_ASTONISHING_MARCH = 0x197,
    SONG_INTENSE_GUYS = 0x198,
    SONG_WASTEFUL_ANTHEM = 0x199,
    SONG_SMASHING_SONG_OF_PRAISE = 0x19A,
    SONG_CHAPTER_8 = 0x19B,
    SONG_THEME_OF_DCMC = 0x19C,
    SONG_PORKY_THEME_UNUSED = 0x19D,
    SONG_WHO = 0x19E,
    SONG_A_FLYING_WHAT = 0x19F,
    SONG_NONE_1A0 = 0x1A0,
    SONG_CLOSE_YOUR_EYES_SUGAR = 0x1A1,
    SONG_CHAPTER_7 = 0x1A2,
    SONG_CHAPTER_6 = 0x1A3,
    SONG_PULLING_OF_THE_NEEDLES = 0x1A4,
    SONG_BUTCH_AND_THE_VILLAGERS = 0x1A5,
    SONG_LONG_SHADOW = 0x1A6,
    SONG_DRAGO = 0x1A7,
    SONG_THANKS_DRAGO = 0x1A8,
    SONG_MROB = 0x1A9,
    SONG_ARIA_OF_UNEASE = 0x1AA,
    SONG_QUITE_THE_RIVER = 0x1AB,
    SONG_PORK_BEAN_OUTTA_GAS = 0x1AC,
    SONG_REMINDED = 0x1AD,
    SONG_LOVE_THEME_REPRISE = 0x1AE,
    SONG_CHAPTER_4 = 0x1AF,
    SONG_A_LETTER_FROM_YOU = 0x1B0,
    SONG_CHAPTER_5 = 0x1B1,
    SONG_FASSAD_AND_INTERPRETER = 0x1B2,
    SONG_RAZOR_AND_LIPSTICK = 0x1B3,
    SONG_TRY_KIND_OF_HARD2 = 0x1B4,
    SONG_AND_STOP = 0x1B5,
    SONG_NPC_LOVES_YOU = 0x1B6,
    SFX_ROCKIN_GHOST = 0x1B7,
    SFX_ROCKIN_GHOST_SMASH = 0x1B8,
    SFX_ROCKIN_GHOST_MISS = 0x1B9,
    SFX_EMUNK2 = 0x1BA,
    SFX_EMUNK2_SMASH = 0x1BB,
    SFX_EMUNK2_MISS = 0x1BC,
    SFX_EMUNK3 = 0x1BD,
    SFX_EMUNK3_SMASH = 0x1BE,
    SFX_EMUNK3_MISS = 0x1BF,
    SFX_MISCHIEVOUS_MOLE = 0x1C0,
    SFX_MISCHIEVOUS_MOLE_SMASH = 0x1C1,
    SFX_MISCHIEVOUS_MOLE_MISS = 0x1C2,
    SFX_EMUNK5 = 0x1C3,
    SFX_EMUNK5_SMASH = 0x1C4,
    SFX_EMUNK5_MISS = 0x1C5,
    SFX_MINERALI = 0x1C6,
    SFX_MINERALI_SMASH = 0x1C7,
    SFX_MINERALI_MISS = 0x1C8,
    SFX_EMUNK7 = 0x1C9,
    SFX_EMUNK7_SMASH = 0x1CA,
    SFX_EMUNK7_MISS = 0x1CB,
    SFX_EMUNK8 = 0x1CC,
    SFX_EMUNK8_SMASH = 0x1CD,
    SFX_EMUNK8_MISS = 0x1CE,
    SFX_ZOMBIE = 0x1CF,
    SFX_ZOMBIE_SMASH = 0x1D0,
    SFX_ZOMBIE_MISS = 0x1D1,
    SFX_EMUNK10 = 0x1D2,
    SFX_EMUNK10_SMASH = 0x1D3,
    SFX_EMUNK10_MISS = 0x1D4,
    SFX_EMUNK11 = 0x1D5,
    SFX_EMUNK11_SMASH = 0x1D6,
    SFX_EMUNK11_MISS = 0x1D7,
    SFX_EMUNK12 = 0x1D8,
    SFX_EMUNK12_SMASH = 0x1D9,
    SFX_EMUNK12_MISS = 0x1DA,
    SFX_ROCK_LOBSTER = 0x1DB,
    SFX_ROCK_LOBSTER_SMASH = 0x1DC,
    SFX_ROCK_LOBSTER_MISS = 0x1DD,
    SFX_EMUNK14 = 0x1DE,
    SFX_EMUNK14_SMASH = 0x1DF,
    SFX_EMUNK14_MISS = 0x1E0,
    SFX_EMUNK15 = 0x1E1,
    SFX_EMUNK15_SMASH = 0x1E2,
    SFX_EMUNK15_MISS = 0x1E3,
    SFX_EMUNK16 = 0x1E4,
    SFX_EMUNK16_SMASH = 0x1E5,
    SFX_EMUNK16_MISS = 0x1E6,
    SFX_MRBATTY = 0x1E7,
    SFX_MRBATTY_SMASH = 0x1E8,
    SFX_MRBATTY_MISS = 0x1E9,
    SFX_EMUNK18 = 0x1EA,
    SFX_EMUNK18_SMASH = 0x1EB,
    SFX_EMUNK18_MISS = 0x1EC,
    SFX_GREENPIGMASKS = 0x1ED,
    SFX_GREENPIGMASKS_SMASH = 0x1EE,
    SFX_GREENPIGMASKS_MISS = 0x1EF,
    SFX_EMUNK20 = 0x1F0,
    SFX_EMUNK20_SMASH = 0x1F1,
    SFX_EMUNK20_MISS = 0x1F2,
    SFX_EMUNK21 = 0x1F3,
    SFX_EMUNK21_SMASH = 0x1F4,
    SFX_EMUNK21_MISS = 0x1F5,
    SFX_EMUNK22 = 0x1F6,
    SFX_EMUNK22_SMASH = 0x1F7,
    SFX_EMUNK22_MISS = 0x1F8,
    SFX_EMUNK23 = 0x1F9,
    SFX_EMUNK23_SMASH = 0x1FA,
    SFX_EMUNK23_MISS = 0x1FB,
    SFX_EMUNK24 = 0x1FC,
    SFX_EMUNK24_SMASH = 0x1FD,
    SFX_EMUNK24_MISS = 0x1FE,
    SFX_FIREFLY = 0x1FF,
    SFX_FIREFLY_SMASH = 0x200,
    SFX_FIREFLY_MISS = 0x201,
    SFX_WEEPINGGUITAR = 0x202,
    SFX_WEEPINGGUITAR_SMASH = 0x203,
    SFX_WEEPINGGUITAR_MISS = 0x204,
    SFX_ARACHNID = 0x205,
    SFX_ARACHNID_SMASH = 0x206,
    SFX_ARACHNID_MISS = 0x207,
    SFX_MRPASSION = 0x208,
    SFX_MRPASSION_SMASH = 0x209,
    SFX_MRPASSION_MISS = 0x20A,
    SFX_ATTACKROACH = 0x20B,
    SFX_ATTACKROACH_SMASH = 0x20C,
    SFX_ATTACKROACH_MISS = 0x20D,
    SFX_EMUNK27 = 0x20E,
    SFX_EMUNK27_SMASH = 0x20F,
    SFX_EMUNK27_MISS = 0x210,
    SFX_RUN_WOOD = 0x211,
    SFX_RUN_MUD = 0x212,
    SFX_RUN_GROUND = 0x213,
    SFX_RUN_SAND = 0x214,
    SFX_RUN_WATER = 0x215,
    SFX_RUN_METAL = 0x216,
    SFX_RUN_GRASS = 0x217,
    SFX_RUN_SNOW = 0x218,
    SFX_RUN_CONCRETE = 0x219,
    SFX_RUN_CARPET = 0x21A,
    SFX_RUN_CREAKY = 0x21B,
    SFX_SPOTTED = 0x21C,
    SFX_WHISTLE = 0x21D,
    SFX_TECH = 0x21E,
    SFX_MYSTICAL = 0x21F,
    SFX_MECH_UP = 0x220,
    SFX_STAT_UP = 0x221,
    SFX_STAT_DOWN = 0x222,
    SFX_MECH_DOWN = 0x223,
    SFX_BADGE_REFLECT = 0x224,
    SFX_SLAP = 0x225,
    SFX_PUNCH1 = 0x226,
    SFX_PUNCH2 = 0x227,
    SFX_PUNCH3 = 0x228,
    SFX_SPARK = 0x229,
    SFX_DRAGO_FANG1 = 0x22A,
    SFX_DRAGO_FANG2 = 0x22B,
    SFX_DRAGO_FANG3 = 0x22C,
    SFX_THROW = 0x22D,
    SFX_BEE1 = 0x22E,
    SFX_BEE2 = 0x22F,
    SFX_BEE3 = 0x230,
    SFX_GUNSHOT = 0x231,
    SFX_DRILL = 0x232,
    SFX_DRILL_UP = 0x233,
    SFX_SPRINGY = 0x234,
    SFX_RING = 0x235,
    SFX_FIREWORK1 = 0x236,
    SFX_FIREWORK2 = 0x237,
    SFX_EXPLOSION1 = 0x238,
    SFX_ZAP1 = 0x239,
    SFX_ZAP2 = 0x23A,
    SFX_FLAP = 0x23B,
    SFX_EXPLOSION2 = 0x23C,
    SFX_EXPLOSION3 = 0x23D,
    SFX_BELL = 0x23E,
    SFX_ICE_MAGIC = 0x23F,
    SFX_ICE_BREAK = 0x240,
    SFX_ICE_REFLECT = 0x241,
    SFX_HORSE = 0x242,
    SFX_ELECTRICITY = 0x243,
    SFX_ELECTRICITY2 = 0x244,
    SFX_EXPLOSION4 = 0x245,
    SFX_BOOK_PAGE = 0x246,
    SFX_MAGIC2 = 0x247,
    SFX_MAGIC3 = 0x248,
    SFX_RIVER = 0x249,
    SFX_DROPLET = 0x24A,
    SFX_MAGIC4 = 0x24B,
    SFX_PKLOVE = 0x24C,
    SFX_CHOIR1 = 0x24D,
    SFX_CHOIR2 = 0x24E,
    SFX_ROAR_DIE = 0x24F,
    SFX_EVIL_LAUGH = 0x250,
    SFX_HOWL = 0x251,
    SFX_MONKEY = 0x252,
    SFX_NONE_253 = 0x253,
    SFX_NONE_254 = 0x254,
    SFX_CONFIRM = 0x255,
    SFX_CONFIRM_BIG = 0x256,
    SFX_MAGIC5 = 0x257,
    SFX_HOP2 = 0x258,
    SFX_HOP3 = 0x259,
    SFX_SQUEAK = 0x25A,
    SFX_CHAIN_EXPLODE = 0x25B,
    SFX_CHAIN_CHARGE = 0x25C,
    SFX_CHAIN_SNAP = 0x25D,
    SFX_DRAGO_FANG4 = 0x25E,
    SFX_TICKLE = 0x25F,
    SFX_SMOKE_BOMB = 0x260,
    SFX_CRACKLE = 0x261,
    SFX_LOW_BUZZ = 0x262,
    SFX_CRY = 0x263,
    SFX_LAND = 0x264,
    SFX_GUN = 0x265,
    SFX_GUN_POP = 0x266,
    SFX_WOOD_BLOCK = 0x267,
    SFX_BURP = 0x268,
    SFX_PLAYER_ATTACK = 0x269,
    SFX_PLAYER_PSI = 0x26A,
    SFX_ENEMY_ATTACK = 0x26B,
    SFX_ENEMY_PSI = 0x26C,
    SFX_26D = 0x26D,
    SFX_GHOST_LAUGH = 0x26E,
    SFX_ELECTROCUTE = 0x26F,
    SFX_ELECTROCUTE2 = 0x270,
    SFX_WOOD_BREAK = 0x271,
    SFX_GRASS_RUSTLE = 0x272,
    SFX_WOOD_BREAK2 = 0x273,
    SFX_PIGMASK_ALERT = 0x274,
    SFX_HOP = 0x275,
    SFX_CRASH = 0x276,
    SFX_CHIMERA_DIE = 0x277,
    SFX_LIFT = 0x278,
    SFX_RUMBLE = 0x279,
    SFX_SPARKLE = 0x27A,
    SFX_THUMP = 0x27B,
    SFX_TRAP =  0x27C,
    SFX_NONE_27D = 0x27D,
    SFX_USE_MAGIC = 0x27E,
    SFX_DOOR_CLOSE = 0x27F,
    SFX_FALL = 0x280,
    SFX_FALL_SHORT = 0x281,
    SFX_SPLASH = 0x282,
    SFX_CRASH2 = 0x283,
    SFX_JETPACK = 0x284,
    SFX_LAND2 = 0x285,
    SFX_NEEDLE = 0x286,
    SFX_UFO_ANTHEM = 0x287,
    SFX_FASSAD_RINGTONE = 0x288,
    SFX_PHONE_ANSWER = 0x289,
    SFX_SURPRISE = 0x28A,
    SFX_ELEVATOR = 0x28B,
    SFX_ELEVATOR_PIGMASKS = 0x28C,
    SFX_BIG_EXPOSION = 0x28D,
    SFX_THUD = 0x28E,
    SFX_THUD2 = 0x28F,
    SFX_THUD3 = 0x290,
    SFX_THUD4 = 0x291,
    SFX_THUD5 = 0x292,
    SFX_ATTRACT = 0x293,
    SFX_DOOR_OPEN = 0x294,
    SFX_DOOR_OPEN2 = 0x295,
    SFX_GROWL = 0x296,
    SFX_BABY_DRAGO = 0x297,
    SFX_BRANCHES = 0x298,
    SFX_BIG_EXPLOSION2 = 0x299,
    SFX_BOOP = 0x29A,
    SFX_BIG_EXPLOSION3 = 0x29B,
    // CHAPTER 1?
    SFX_SNORE = 0x29C,
    SFX_KNOCK = 0x29D,
    SFX_KNOCK2 = 0x29E,
    SFX_DOORKNOB = 0x29F,
    SFX_DOORKNOB_LOOSE = 0x2A0,
    SFX_DOORKNOB_BOUNCE = 0x2A1,
    SFX_BONEY = 0x2A2,
    SFX_BONEY2 = 0x2A3,
    SFX_THUD6 = 0x2A4,
    SFX_NONE_2A5 = 0x2A5,
    SFX_NONE_2A6 = 0x2A6,
    SFX_CLOCK = 0x2A7,
    SFX_THUD7 = 0x2A8,
    SFX_THUD8 = 0x2A9,
    SFX_NONE_2AA = 0x2AA,
    SFX_CLAP = 0x2AB,
    SFX_PUNCH4 = 0x2AC,
    SFX_BEAT = 0x2AD,
    SFX_SWIPE = 0x2AE,
    SFX_BEAT2 = 0x2AF,
    SFX_THUD9 = 0x2B0,
    SFX_MECH_DRAGO = 0x2B1,
    SFX_LAND_GROUND = 0x2B2,
    SFX_CLAP2 = 0x2B3,
    SFX_PIGMASKS_TALK = 0x2B4,
    SFX_PIGMASK_SALUTE2 = 0x2B5,
    SFX_THUD10 = 0x2B6,
    SFX_CHIMERA = 0x2B7,
    SFX_MECH_CHARGE = 0x2B8,
    SFX_LIFT2 = 0x2B9,
    SFX_EXPLOSION5 = 0x2BA,
    SFX_GAS = 0x2BB,
    SFX_LATCH = 0x2BC,
    SFX_BEEP_ALERT = 0x2BD,
    SFX_WOOD_VIBRATE = 0x2BE,
    SFX_SLIP = 0x2BF,
    SFX_CRUMBLE = 0x2C0,
    SFX_VO_GRUNT = 0x2C1,
    SFX_SLAP2 = 0x2C2,
    SFX_JAIL_DOOR_CLOSE = 0x2C3,
    SFX_JAIL_DOOR_LOCK = 0x2C4,
    SFX_EAT_APPLE = 0x2C5,
    SFX_FILE_PICKUP = 0x2C6,
    SFX_FILE = 0x2C7,
    SFX_ROCKETS = 0x2C8,
    SFX_LATCH2 = 0x2C9,
    SFX_RADAR = 0x2CA,
    SFX_POD_LAND = 0x2CB,
    SFX_CLANG = 0x2CC,
    SFX_DRAGO_ROAR = 0x2CD,
    SFX_DRAGO_ROAR2 = 0x2CE,
    SFX_DRAGO_SAD = 0x2CF,
    SFX_BEEPS = 0x2D0,
    SFX_DROP2 = 0x2D1,
    SFX_BUMPS = 0x2D2,
    SFX_PONG = 0x2D3,
    SFX_NONE_2D4 = 0x2D4,
    SFX_NONE_2D5 = 0x2D5,
    SFX_NONE_2D6 = 0x2D6,
    SFX_HOP4 = 0x2D7,
    SFX_PULLEY = 0x2D8,
    SFX_HELICOPTER = 0x2D9,
    SFX_PUNCHLINE = 0x2DA,
    SFX_BUZZ = 0x2DB,
    SFX_MECH_NOISE = 0x2DC,
    SFX_ZAP3 = 0x2DD,
    SFX_ZAP4 = 0x2DE,
    SFX_NONE_2DF = 0x2DF,
    SFX_SWIPE2 = 0x2E0,
    SFX_LATCH3 = 0x2E1,
    SFX_MECH_ROAR = 0x2E2,
    SFX_NONE_2E3 = 0x2E3,
    SFX_PULLEY2 = 0x2E4,
    SFX_THUD11 = 0x2E5,
    SFX_LASER = 0x2E6,
    SFX_STAPLE = 0x2E7,
    SFX_NONE_2E8 = 0x2E8,
    SFX_CHARGE_UP = 0x2E9,
    SFX_EXPLODE = 0x2EA,
    SFX_EXPLODE2 = 0x2EB,
    SFX_EXPLODE3 = 0x2EC,
    SFX_WHISTLE2 = 0x2ED,
    SFX_SNIFF = 0x2EE,
    SFX_NONE_2EF = 0x2EF,
    SFX_BARK = 0x2F0,
    SFX_BARK2 = 0x2F1,
    SFX_BARK3 = 0x2F2,
    SFX_SQUEAK2 = 0x2F3,
    SFX_FROG = 0x2F4,
    SFX_CLAP3 = 0x2F5,
    SFX_BELL2 = 0x2F6,
    SFX_DOUBLE_BARK = 0x2F7,
    SFX_GROWL2 = 0x2F8,
    SFX_SHEEP = 0x2F9,
    SFX_MOO = 0x2FA,
    SFX_PIG = 0x2FB,
    SFX_CHICKEN = 0x2FC,
    SFX_PIGEON = 0x2FD,
    SFX_PIGEON_FLY = 0x2FE,
    SFX_MONKEY2 = 0x2FF,
    SFX_SQUEAK3 = 0x300,
    SFX_DUCK = 0x301,
    SFX_SIREN = 0x302,
    SFX_MECH_SCREAMS = 0x303,
    SFX_EXPLOSION6 = 0x304,
    SFX_SWIPE_THUD = 0x305,
    SFX_MECH_SCREAMS2 = 0x306,
    SFX_SLOW_KNOCK = 0x307,
    SFX_DISTANT_BOOM = 0x308,
    SFX_BARK_REVERB = 0x309,
    SFX_MONKEY_LAUGH = 0x30A,
    SFX_MONKEY_FLIP = 0x30B,
    SFX_DUSTER_STAPLE_PREP = 0x30C,
    SFX_MACHINE_READY = 0x30D,
    SFX_PIGMASK_SALUTE3 = 0x30E,
    SFX_PIGMASK_SALUTE4 = 0x30F,
};

#endif // ENUMS_H
