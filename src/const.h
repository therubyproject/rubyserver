/**
 * The Ruby Server - a free and open-source Pokémon MMORPG server emulator
 * Copyright (C) 2018  Mark Samman (TFS) <mark.samman@gmail.com>
 *                     Leandro Matheus <kesuhige@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef FS_CONST_H_0A49B5996F074465BF44B90F4F780E8B
#define FS_CONST_H_0A49B5996F074465BF44B90F4F780E8B

static constexpr int32_t NETWORKMESSAGE_MAXSIZE = 24590;

enum MagicEffectClasses : uint16_t {
	CONST_ME_NONE,

	CONST_ME_DRAWBLOOD = 1,
	CONST_ME_LOSEENERGY = 2,
	CONST_ME_POFF = 3,
	CONST_ME_BLOCKHIT = 4,
	CONST_ME_EXPLOSIONAREA = 5,
	CONST_ME_EXPLOSIONHIT = 6,
	CONST_ME_FIREAREA = 7,
	CONST_ME_YELLOW_RINGS = 8,
	CONST_ME_GREEN_RINGS = 9,
	CONST_ME_HITAREA = 10,
	CONST_ME_TELEPORT = 11,
	CONST_ME_ENERGYHIT = 12,
	CONST_ME_MAGIC_BLUE = 13,
	CONST_ME_MAGIC_RED = 14,
	CONST_ME_MAGIC_GREEN = 15,
	CONST_ME_HITBYFIRE = 16,
	CONST_ME_HITBYPOISON = 17,
	CONST_ME_MORTAREA = 18,
	CONST_ME_SOUND_GREEN = 19,
	CONST_ME_SOUND_RED = 20,
	CONST_ME_POISONAREA = 21,
	CONST_ME_SOUND_YELLOW = 22,
	CONST_ME_SOUND_PURPLE = 23,
	CONST_ME_SOUND_BLUE = 24,
	CONST_ME_SOUND_WHITE = 25,
	CONST_ME_BUBBLES = 26,
	CONST_ME_CRAPS = 27,
	CONST_ME_GIFT_WRAPS = 28,
	CONST_ME_FIREWORK_YELLOW = 29,
	CONST_ME_FIREWORK_RED = 30,
	CONST_ME_FIREWORK_BLUE = 31,
	CONST_ME_STUN = 32,
	CONST_ME_SLEEP = 33,
	CONST_ME_WATERCREATURE = 34,
	CONST_ME_GROUNDSHAKER = 35,
	CONST_ME_HEARTS = 36,
	CONST_ME_FIREATTACK = 37,
	CONST_ME_ENERGYAREA = 38,
	CONST_ME_SMALLCLOUDS = 39,
	CONST_ME_HOLYDAMAGE = 40,
	CONST_ME_BIGCLOUDS = 41,
	CONST_ME_ICEAREA = 42,
	CONST_ME_ICETORNADO = 43,
	CONST_ME_ICEATTACK = 44,
	CONST_ME_STONES = 45,
	CONST_ME_SMALLPLANTS = 46,
	CONST_ME_CARNIPHILA = 47,
	CONST_ME_PURPLEENERGY = 48,
	CONST_ME_YELLOWENERGY = 49,
	CONST_ME_HOLYAREA = 50,
	CONST_ME_BIGPLANTS = 51,
	CONST_ME_CAKE = 52,
	CONST_ME_GIANTICE = 53,
	CONST_ME_WATERSPLASH = 54,
	CONST_ME_PLANTATTACK = 55,
	CONST_ME_TUTORIALARROW = 56,
	CONST_ME_TUTORIALSQUARE = 57,
	CONST_ME_MIRRORHORIZONTAL = 58,
	CONST_ME_MIRRORVERTICAL = 59,
	CONST_ME_SKULLHORIZONTAL = 60,
	CONST_ME_SKULLVERTICAL = 61,
	// 62 is empty
	CONST_ME_STEPSHORIZONTAL = 63,
	CONST_ME_BLOODYSTEPS = 64,
	CONST_ME_STEPSVERTICAL = 65,
	CONST_ME_YALAHARIGHOST = 66,
	CONST_ME_BATS = 67,
	CONST_ME_SMOKE = 68,
	CONST_ME_INSECTS = 69,
	CONST_ME_DRAGONHEAD = 70,
	// 71 - 72 are empty
	CONST_ME_THUNDER = 73,
	// 74 is empty
	CONST_ME_CONFETTI_HORIZONTAL = 75,
	CONST_ME_CONFETTI_VERTICAL = 76,
	// emots effects
	CONST_ME_EMOT_THREE_POINTS = 77,
	CONST_ME_EMOT_EXCLAMATION = 78,
	CONST_ME_EMOT_MONEY = 79,
	CONST_ME_EMOT_QUESTION = 80,
	CONST_ME_EMOT_IDEA = 81,
	CONST_ME_EMOT_SEASICK = 82,
	CONST_ME_EMOT_ANGRY = 83,
	CONST_ME_EMOT_SAD = 84,
	CONST_ME_EMOT_HAPPY = 85,
	CONST_ME_EMOT_WATER = 86,
	CONST_ME_EMOT_FOOD = 87,
	CONST_ME_EMOT_YES = 88,
	CONST_ME_EMOT_NO = 89,
	CONST_ME_EMOT_GO = 90,
	CONST_ME_EMOT_POKEBALL = 91,
	CONST_ME_EMOT_LOL = 92,
	CONST_ME_EMOT_LOVE = 93,
	CONST_ME_EMOT_PIKACHU = 94,
	CONST_ME_EMOT_NEUTRAL = 95,
	CONST_ME_EMOT_SOHAPPY = 96,
	CONST_ME_EMOT_XD = 97,
	CONST_ME_EMOT_CONFUSED = 98,
	CONST_ME_EMOT_HOME = 99,
	// 100-157 are empty
	CONST_ME_BLACKSMOKE = 158,
	// 159-166 are empty
	CONST_ME_REDSMOKE = 167,
	CONST_ME_YELLOWSMOKE = 168,
	CONST_ME_GREENSMOKE = 169,
	CONST_ME_PURPLESMOKE = 170,
	CONST_ME_EARLY_THUNDER = 171,
	CONST_ME_RAGIAZ_BONECAPSULE = 172,
	CONST_ME_CRITICAL_DAMAGE = 173,
	// 174 is empty
	CONST_ME_PLUNGING_FISH = 175,
	// catch and goback effects
	CONST_ME_CATCH_SUCCESS_CHERISHBALL = 176,
	CONST_ME_CATCH_FAIL_CHERISHBALL = 177,
	CONST_ME_GOBACK_CHERISHBALL = 178,
	CONST_ME_CATCH_SUCCESS_DIVEBALL = 179,
	CONST_ME_CATCH_FAIL_DIVEBALL = 180,
	CONST_ME_GOBACK_DIVEBALL = 181,
	CONST_ME_CATCH_SUCCESS_LOVEBALL = 182,
	CONST_ME_CATCH_FAIL_LOVEBALL = 183,
	CONST_ME_GOBACK_LOVEBALL = 184,
	CONST_ME_CATCH_SUCCESS_DUSKBALL = 185,
	CONST_ME_CATCH_FAIL_DUSKBALL = 186,
	CONST_ME_GOBACK_DUSKBALL = 187,
	CONST_ME_CATCH_SUCCESS_FASTBALL = 188,
	CONST_ME_CATCH_FAIL_FASTBALL = 189,
	CONST_ME_GOBACK_FASTBALL = 190,
	CONST_ME_CATCH_SUCCESS_HEAVYBALL = 191,
	CONST_ME_CATCH_FAIL_HEAVYBALL = 192,
	CONST_ME_GOBACK_HEAVYBALL = 193,
	CONST_ME_CATCH_SUCCESS_LUREBALL = 194,
	CONST_ME_CATCH_FAIL_LUREBALL = 195,
	CONST_ME_GOBACK_LUREBALL = 196,
	CONST_ME_CATCH_SUCCESS_MOONBALL = 197,
	CONST_ME_CATCH_FAIL_MOONBALL = 198,
	CONST_ME_GOBACK_MOONBALL = 199,
	CONST_ME_CATCH_SUCCESS_NETBALL = 200,
	CONST_ME_CATCH_FAIL_NETBALL = 201,
	CONST_ME_GOBACK_NETBALL = 202,
	CONST_ME_CATCH_SUCCESS_NESTBALL = 203,
	CONST_ME_CATCH_FAIL_NESTBALL = 204,
	CONST_ME_GOBACK_NESTBALL = 205,
	CONST_ME_CATCH_SUCCESS_PREMIERBALL = 206,
	CONST_ME_CATCH_FAIL_PREMIERBALL = 207,
	CONST_ME_GOBACK_PREMIERBALL = 208,
	CONST_ME_CATCH_SUCCESS_QUICKBALL = 209,
	CONST_ME_CATCH_FAIL_QUICKBALL = 210,
	CONST_ME_GOBACK_QUICKBALL = 211,
	CONST_ME_CATCH_SUCCESS_POKEBALL = 212,
	CONST_ME_CATCH_FAIL_POKEBALL = 213,
	CONST_ME_GOBACK_POKEBALL = 214,
	CONST_ME_CATCH_SUCCESS_GREATBALL = 215,
	CONST_ME_CATCH_FAIL_GREATBALL = 216,
	CONST_ME_GOBACK_GREATBALL = 217,
	CONST_ME_CATCH_SUCCESS_ULTRABALL = 218,
	CONST_ME_CATCH_FAIL_ULTRABALL = 219,
	CONST_ME_GOBACK_ULTRABALL = 220,
	CONST_ME_CATCH_SUCCESS_MASTERBALL = 221,
	CONST_ME_GOBACK_MASTERBALL = 222,
	CONST_ME_CATCH_SUCCESS_SAFFARIBALL = 223,
	CONST_ME_CATCH_FAIL_SAFFARIBALL = 224,
	CONST_ME_GOBACK_SAFFARIBALL = 225,
	CONST_ME_GOBACK_GOLDENBALL = 226,
	CONST_ME_GOBACK_FRESHBALL = 227,
	CONST_ME_GOBACK_YUMEBALL = 228,
	CONST_ME_GOBACK_DARKBALL = 229,
	CONST_ME_GOBACK_ROCKETBALL = 230,
	CONST_ME_GOBACK_POLICEBALL = 231,
	CONST_ME_DITTOTRANSFORM = 297,

	CONST_ME_EVOLUTION = 943,
};

enum ShootType_t : uint16_t {
	CONST_ANI_NONE,

	CONST_ANI_POKEBALL = 1,
	CONST_ANI_GREATBALL = 2,
	CONST_ANI_ULTRABALL = 3,
	CONST_ANI_SAFFARIBALL = 4,
	CONST_ANI_MASTERBALL = 5,
	CONST_ANI_POISONARROW = 6,
	CONST_ANI_BURSTARROW = 7,
	CONST_ANI_THROWINGSTAR = 8,
	CONST_ANI_THROWINGKNIFE = 9,
	CONST_ANI_SMALLSTONE = 10,
	CONST_ANI_DEATH = 11,
	CONST_ANI_LARGEROCK = 12,
	CONST_ANI_SNOWBALL = 13,
	CONST_ANI_POWERBOLT = 14,
	CONST_ANI_POISON = 15,
	CONST_ANI_INFERNALBOLT = 16,
	CONST_ANI_HUNTINGSPEAR = 17,
	CONST_ANI_ENCHANTEDSPEAR = 18,
	CONST_ANI_REDSTAR = 19,
	CONST_ANI_GREENSTAR = 20,
	CONST_ANI_ROYALSPEAR = 21,
	CONST_ANI_SNIPERARROW = 22,
	CONST_ANI_ONYXARROW = 23,
	CONST_ANI_PIERCINGBOLT = 24,
	CONST_ANI_WHIRLWINDSWORD = 25,
	CONST_ANI_WHIRLWINDAXE = 26,
	CONST_ANI_WHIRLWINDCLUB = 27,
	CONST_ANI_ETHEREALSPEAR = 28,
	CONST_ANI_ICE = 29,
	CONST_ANI_EARTH = 30,
	CONST_ANI_HOLY = 31,
	CONST_ANI_SUDDENDEATH = 32,
	CONST_ANI_FLASHARROW = 33,
	CONST_ANI_FLAMMINGARROW = 34,
	CONST_ANI_SHIVERARROW = 35,
	CONST_ANI_ENERGYBALL = 36,
	CONST_ANI_SMALLICE = 37,
	CONST_ANI_SMALLHOLY = 38,
	CONST_ANI_SMALLEARTH = 39,
	CONST_ANI_EARTHARROW = 40,
	CONST_ANI_EXPLOSION = 41,
	CONST_ANI_CAKE = 42,

	CONST_ANI_TARSALARROW = 44,
	CONST_ANI_VORTEXBOLT = 45,

	CONST_ANI_PRISMATICBOLT = 48,
	CONST_ANI_CRYSTALLINEARROW = 49,
	CONST_ANI_DRILLBOLT = 50,
	CONST_ANI_ENVENOMEDARROW = 51,

	CONST_ANI_GLOOTHSPEAR = 53,
	CONST_ANI_SIMPLEARROW = 54,

	// limit 65534
};

enum SpeakClasses : uint8_t {
	TALKTYPE_SAY = 1,
	TALKTYPE_WHISPER = 2,
	TALKTYPE_YELL = 3,
	TALKTYPE_PRIVATE_FROM = 4,
	TALKTYPE_PRIVATE_TO = 5,
	TALKTYPE_CHANNEL_Y = 7,
	TALKTYPE_CHANNEL_O = 8,
	TALKTYPE_PRIVATE_NP = 10,
	TALKTYPE_PRIVATE_PN = 12,
	TALKTYPE_BROADCAST = 13,
	TALKTYPE_CHANNEL_R1 = 14, //red - #c text
	TALKTYPE_PRIVATE_RED_FROM = 15, //@name@text
	TALKTYPE_PRIVATE_RED_TO = 16, //@name@text
	TALKTYPE_POKEMON_SAY = 36,
	TALKTYPE_POKEMON_YELL = 37,

	TALKTYPE_CHANNEL_R2 = 0xFF, //#d
};

enum MessageClasses : uint8_t {
	MESSAGE_STATUS_CONSOLE_BLUE = 4, /*FIXME Blue message in the console*/

	MESSAGE_STATUS_CONSOLE_RED = 13, /*Red message in the console*/

	MESSAGE_STATUS_DEFAULT = 17, /*White message at the bottom of the game window and in the console*/
	MESSAGE_STATUS_WARNING = 18, /*Red message in game window and in the console*/
	MESSAGE_EVENT_ADVANCE = 19, /*White message in game window and in the console*/

	MESSAGE_STATUS_SMALL = 21, /*White message at the bottom of the game window"*/
	MESSAGE_INFO_DESCR = 22, /*Green message in game window and in the console*/
	MESSAGE_DAMAGE_DEALT = 23,
	MESSAGE_DAMAGE_RECEIVED = 24,
	MESSAGE_HEALED = 25,
	MESSAGE_EXPERIENCE = 26,
	MESSAGE_DAMAGE_OTHERS = 27,
	MESSAGE_HEALED_OTHERS = 28,
	MESSAGE_EXPERIENCE_OTHERS = 29,
	MESSAGE_EVENT_DEFAULT = 30, /*White message at the bottom of the game window and in the console*/
	MESSAGE_LOOT = 31,

	MESSAGE_GUILD = 33, /*White message in channel (+ channelId)*/
	MESSAGE_PARTY_MANAGEMENT = 34, /*White message in channel (+ channelId)*/
	MESSAGE_PARTY = 35, /*White message in channel (+ channelId)*/
	MESSAGE_EVENT_ORANGE = 36, /*Orange message in the console*/
	MESSAGE_STATUS_CONSOLE_ORANGE = 37,  /*Orange message in the console*/
};

enum FluidColors_t : uint8_t {
	FLUID_EMPTY,
	FLUID_BLUE,
	FLUID_RED,
	FLUID_BROWN,
	FLUID_GREEN,
	FLUID_YELLOW,
	FLUID_WHITE,
	FLUID_PURPLE,
};

enum FluidTypes_t : uint8_t {
	FLUID_NONE = FLUID_EMPTY,
	FLUID_WATER = FLUID_BLUE,
	FLUID_BLOOD = FLUID_RED,
	FLUID_BEER = FLUID_BROWN,
	FLUID_SLIME = FLUID_GREEN,
	FLUID_LEMONADE = FLUID_YELLOW,
	FLUID_MILK = FLUID_WHITE,

	FLUID_LIFE = FLUID_RED + 8,
	FLUID_OIL = FLUID_BROWN + 8,
	FLUID_URINE = FLUID_YELLOW + 8,
	FLUID_COCONUTMILK = FLUID_WHITE + 8,
	FLUID_WINE = FLUID_PURPLE + 8,

	FLUID_MUD = FLUID_BROWN + 16,
	FLUID_FRUITJUICE = FLUID_YELLOW + 16,

	FLUID_LAVA = FLUID_RED + 24,
	FLUID_RUM = FLUID_BROWN + 24,
	FLUID_SWAMP = FLUID_GREEN + 24,

	FLUID_TEA = FLUID_BROWN + 32,

	FLUID_MEAD = FLUID_BROWN + 40,
};

const uint8_t reverseFluidMap[] = {
	FLUID_EMPTY,
	FLUID_WATER,
	FLUID_BEER,
	FLUID_EMPTY,
	FLUID_BLOOD,
	FLUID_SLIME,
	FLUID_EMPTY,
	FLUID_LEMONADE,
	FLUID_MILK,
};

const uint8_t clientToServerFluidMap[] = {
	FLUID_EMPTY,
	FLUID_WATER,
	FLUID_BEER,
	FLUID_MUD,
	FLUID_BLOOD,
	FLUID_SLIME,
	FLUID_RUM,
	FLUID_LEMONADE,
	FLUID_MILK,
	FLUID_WINE,
	FLUID_LIFE,
	FLUID_URINE,
	FLUID_OIL,
	FLUID_FRUITJUICE,
	FLUID_COCONUTMILK,
	FLUID_TEA,
	FLUID_MEAD,
};

enum ClientFluidTypes_t : uint8_t {
	CLIENTFLUID_EMPTY = 0,
	CLIENTFLUID_BLUE = 1,
	CLIENTFLUID_PURPLE = 2,
	CLIENTFLUID_BROWN_1 = 3,
	CLIENTFLUID_BROWN_2 = 4,
	CLIENTFLUID_RED = 5,
	CLIENTFLUID_GREEN = 6,
	CLIENTFLUID_BROWN = 7,
	CLIENTFLUID_YELLOW = 8,
	CLIENTFLUID_WHITE = 9,
};

const uint8_t fluidMap[] = {
	CLIENTFLUID_EMPTY,
	CLIENTFLUID_BLUE,
	CLIENTFLUID_RED,
	CLIENTFLUID_BROWN_1,
	CLIENTFLUID_GREEN,
	CLIENTFLUID_YELLOW,
	CLIENTFLUID_WHITE,
	CLIENTFLUID_PURPLE,
};

enum SquareColor_t : uint8_t {
	SQ_COLOR_BLACK = 0,
};

enum TextColor_t : uint8_t {
	TEXTCOLOR_BLUE = 5,
	TEXTCOLOR_LIGHTGREEN = 30,
	TEXTCOLOR_GREEN = 30,
	TEXTCOLOR_LIGHTBLUE = 35,
	TEXTCOLOR_DARKPURPLE = 74,
	TEXTCOLOR_BLUEVIOLET = 77,
	TEXTCOLOR_DARKGREEN = 85,
	TEXTCOLOR_LAVENDERGREY = 86,
	TEXTCOLOR_MAYABLUE = 95,
	TEXTCOLOR_POOLGREEN = 102,
	TEXTCOLOR_DARKRED = 108,
	TEXTCOLOR_BUTTERFLYBUSH = 112,
	TEXTCOLOR_QUINCY = 121,
	TEXTCOLOR_BRASS = 127,
	TEXTCOLOR_LIGHTGREY = 129,
	TEXTCOLOR_SKYBLUE = 143,
	TEXTCOLOR_BRINKPINK = 146,
	TEXTCOLOR_PURPLE = 154,
	TEXTCOLOR_ELECTRICPURPLE = 155,
	TEXTCOLOR_LIGHTPINK = 161,
	TEXTCOLOR_RED = 180,
	TEXTCOLOR_PASTELRED = 194,
	TEXTCOLOR_PINK = 197,
	TEXTCOLOR_ORANGE = 198,
	TEXTCOLOR_YELLOW = 210,
	TEXTCOLOR_LIGHTYELLOW = 212,
	TEXTCOLOR_WHITE_EXP = 215,
	TEXTCOLOR_NONE = 255,
};

enum NameColor_t {
	NAMECOLOR_GREEN = 0,
	NAMECOLOR_RED = 1 << 1,
	NAMECOLOR_ORANGE = 1 << 2,
	NAMECOLOR_YELLOW = 1 << 3,
	NAMECOLOR_BLUE = 1 << 4,
	NAMECOLOR_PURPLE = 1 << 5,
	NAMECOLOR_WHITE = 1 << 6,
	NAMECOLOR_BLACK = 1 << 7,
};

enum Icons_t {
	ICON_POISON = 1 << 0,
	ICON_BURN = 1 << 1,
	ICON_ENERGY =  1 << 2,
	ICON_CONFUSION = 1 << 3,
	ICON_PARALYZE = 1 << 5,
	ICON_HASTE = 1 << 6,
	ICON_SWORDS = 1 << 7,
	ICON_DROWNING = 1 << 8,
	ICON_FREEZING = 1 << 9,
	ICON_DAZZLED = 1 << 10,
	ICON_CURSED = 1 << 11,
	ICON_PARTY_BUFF = 1 << 12,
	ICON_REDSWORDS = 1 << 13,
	ICON_PIGEON = 1 << 14,
	ICON_BLEEDING = 1 << 15,
};

enum WieldInfo_t {
	WIELDINFO_LEVEL = 1 << 0,
	WIELDINFO_CLANREQ = 1 << 1,
	WIELDINFO_PROFREQ = 1 << 2,
	WIELDINFO_PREMIUM = 1 << 3,
};

enum Genders_t : uint8_t {
	GENDER_NONE = 0,
	GENDER_UNDEFINED = 1,
	GENDER_MALE = 2,
	GENDER_FEMALE = 3,
};

enum Natures_t : uint8_t {
	NATURE_NONE = 0,
	NATURE_HARDY = 1,
	NATURE_LONELY = 2,
	NATURE_BRAVE = 3,
	NATURE_ADAMANT = 4,
	NATURE_NAUGHTY = 5,
	NATURE_BOLD = 6,
	NATURE_DOCILE = 7,
	NATURE_RELAXED = 8,
	NATURE_IMPISH = 9,
	NATURE_LAX = 10,
	NATURE_MODEST = 11,
	NATURE_MILD = 12,
	NATURE_QUIET = 13,
	NATURE_BASHFUL = 14,
	NATURE_RASH = 15,
	NATURE_CALM = 16,
	NATURE_GENTLE = 17,
	NATURE_SASSY = 18,
	NATURE_CAREFUL = 19,
	NATURE_QUIRKY = 20,
	NATURE_TIMID = 21,
	NATURE_HASTY = 22,
	NATURE_SERIOUS = 23,
	NATURE_JOLLY = 24,
	NATURE_NAIVE = 25,
};

enum PartyShields_t : uint8_t {
	SHIELD_NONE = 0,
	SHIELD_WHITEYELLOW = 1,
	SHIELD_WHITEBLUE = 2,
	SHIELD_BLUE = 3,
	SHIELD_YELLOW = 4,
	SHIELD_BLUE_SHAREDEXP = 5,
	SHIELD_YELLOW_SHAREDEXP = 6,
	SHIELD_BLUE_NOSHAREDEXP_BLINK = 7,
	SHIELD_YELLOW_NOSHAREDEXP_BLINK = 8,
	SHIELD_BLUE_NOSHAREDEXP = 9,
	SHIELD_YELLOW_NOSHAREDEXP = 10,
	SHIELD_GRAY = 11,
};

enum GuildEmblems_t : uint8_t {
	GUILDEMBLEM_NONE = 0,
	GUILDEMBLEM_ALLY = 1,
	GUILDEMBLEM_ENEMY = 2,
	GUILDEMBLEM_NEUTRAL = 3,
	GUILDEMBLEM_MEMBER = 4,
	GUILDEMBLEM_OTHER = 5,
};

enum item_t : uint16_t {
	ITEM_BROWSEFIELD = 460, // for internal use

	ITEM_FIREFIELD_PVP_FULL = 1487,
	ITEM_FIREFIELD_PVP_MEDIUM = 1488,
	ITEM_FIREFIELD_PVP_SMALL = 1489,
	ITEM_FIREFIELD_PERSISTENT_FULL = 1492,
	ITEM_FIREFIELD_PERSISTENT_MEDIUM = 1493,
	ITEM_FIREFIELD_PERSISTENT_SMALL = 1494,
	ITEM_FIREFIELD_NOPVP = 1500,

	ITEM_POISONFIELD_PVP = 1490,
	ITEM_POISONFIELD_PERSISTENT = 1496,
	ITEM_POISONFIELD_NOPVP = 1503,

	ITEM_ENERGYFIELD_PVP = 1491,
	ITEM_ENERGYFIELD_PERSISTENT = 1495,
	ITEM_ENERGYFIELD_NOPVP = 1504,

	ITEM_MAGICWALL = 1497,
	ITEM_MAGICWALL_PERSISTENT = 1498,
	ITEM_MAGICWALL_SAFE = 11098,

	ITEM_WILDGROWTH = 1499,
	ITEM_WILDGROWTH_PERSISTENT = 2721,
	ITEM_WILDGROWTH_SAFE = 11099,

	ITEM_BAG = 1987,

	ITEM_COIN = 2148,
	ITEM_DOLLAR_NOTE = 2152,
	ITEM_HUNDRED_DOLLAR_NOTE = 2160,
	ITEM_TEN_THOUSAND_DOLLAR_NOTE = 3956,
	ITEM_MILLION_DOLLAR_NOTE = 2161,

	ITEM_DEPOT = 2594,
	ITEM_LOCKER1 = 2589,
	ITEM_INBOX = 14404,
	ITEM_MARKET = 14405,

	ITEM_MALE_CORPSE = 3058,
	ITEM_FEMALE_CORPSE = 3065,

	ITEM_DITTO_CORPSE = 2813,

	ITEM_FULLSPLASH = 2016,
	ITEM_SMALLSPLASH = 2019,

	ITEM_PARCEL = 2595,
	ITEM_LETTER = 2597,
	ITEM_LETTER_STAMPED = 2598,
	ITEM_LABEL = 2599,

	ITEM_AMULETOFLOSS = 2173,

	ITEM_DOCUMENT_RO = 1968, //read-only
};

enum PlayerFlags : uint64_t {
	PlayerFlag_CannotUseCombat = 1 << 0,
	PlayerFlag_CannotAttackPlayer = 1 << 1,
	PlayerFlag_CannotAttackPokemon = 1 << 2,
	PlayerFlag_CannotBeAttacked = 1 << 3,
	PlayerFlag_CanConvinceAll = 1 << 4,
	PlayerFlag_CanSummonAll = 1 << 5,
	PlayerFlag_CanIllusionAll = 1 << 6,
	PlayerFlag_CanSenseInvisibility = 1 << 7,
	PlayerFlag_IgnoredByPokemons = 1 << 8,
	PlayerFlag_NotGainInFight = 1 << 9,
	//PlayerFlag_HasInfiniteMana = 1 << 10, 
	PlayerFlag_HasNoExhaustion = 1 << 12,
	PlayerFlag_CannotUseMoves = 1 << 13,
	PlayerFlag_CannotPickupItem = 1 << 14,
	PlayerFlag_CanAlwaysLogin = 1 << 15,
	PlayerFlag_CanBroadcast = 1 << 16,
	PlayerFlag_CanEditHouses = 1 << 17,
	PlayerFlag_CannotBeBanned = 1 << 18,
	PlayerFlag_CannotBePushed = 1 << 19,
	PlayerFlag_HasInfiniteCapacity = 1 << 20,
	PlayerFlag_CanPushAllCreatures = 1 << 21,
	PlayerFlag_CanTalkRedPrivate = 1 << 22,
	PlayerFlag_CanTalkRedChannel = 1 << 23,
	PlayerFlag_TalkOrangeHelpChannel = 1 << 24,
	PlayerFlag_NotGainExperience = 1 << 25,
	//PlayerFlag_NotGainMana = 1 << 26,
	PlayerFlag_NotGainHealth = 1 << 27,
	PlayerFlag_NotGainSkill = 1 << 28,
	PlayerFlag_SetMaxSpeed = 1 << 29,
	PlayerFlag_SpecialVIP = 1 << 30,
	PlayerFlag_NotGenerateLoot = static_cast<uint64_t>(1) << 31,
	PlayerFlag_CanTalkRedChannelAnonymous = static_cast<uint64_t>(1) << 32,
	PlayerFlag_IgnoreProtectionZone = static_cast<uint64_t>(1) << 33,
	PlayerFlag_IgnoreMoveCheck = static_cast<uint64_t>(1) << 34,
	PlayerFlag_CannotBeMuted = static_cast<uint64_t>(1) << 36,
	PlayerFlag_IsAlwaysPremium = static_cast<uint64_t>(1) << 37,
};

enum ReloadTypes_t : uint8_t  {
	RELOAD_TYPE_ALL,
	RELOAD_TYPE_ACTIONS,
	RELOAD_TYPE_CHAT,
	RELOAD_TYPE_CONFIG,
	RELOAD_TYPE_CREATURESCRIPTS,
	RELOAD_TYPE_EVENTS,
	RELOAD_TYPE_GLOBAL,
	RELOAD_TYPE_GLOBALEVENTS,
	RELOAD_TYPE_ITEMS,
	RELOAD_TYPE_POKEMONS,
	RELOAD_TYPE_MOUNTS,
	RELOAD_TYPE_MOVEMENTS,
	RELOAD_TYPE_NPCS,
	RELOAD_TYPE_QUESTS,
	RELOAD_TYPE_RAIDS,
	RELOAD_TYPE_MOVES,
	RELOAD_TYPE_TALKACTIONS,
	RELOAD_TYPE_POKEBALLS,
};

static constexpr int32_t CHANNEL_GUILD = 0x00;
static constexpr int32_t CHANNEL_PARTY = 0x01;
static constexpr int32_t CHANNEL_PRIVATE = 0xFFFF;

//Reserved player storage key ranges;
//[10000000 - 20000000];
static constexpr int32_t PSTRG_RESERVED_RANGE_START = 10000000;
static constexpr int32_t PSTRG_RESERVED_RANGE_SIZE = 10000000;
//[1000 - 1500];
static constexpr int32_t PSTRG_OUTFITS_RANGE_START = (PSTRG_RESERVED_RANGE_START + 1000);
static constexpr int32_t PSTRG_OUTFITS_RANGE_SIZE = 500;
//[2001 - 2011];
static constexpr int32_t PSTRG_MOUNTS_RANGE_START = (PSTRG_RESERVED_RANGE_START + 2001);
static constexpr int32_t PSTRG_MOUNTS_RANGE_SIZE = 10;
static constexpr int32_t PSTRG_MOUNTS_CURRENTMOUNT = (PSTRG_MOUNTS_RANGE_START + 10);


#define IS_IN_KEYRANGE(key, range) (key >= PSTRG_##range##_START && ((key - PSTRG_##range##_START) <= PSTRG_##range##_SIZE))

#endif
