static const u8 sCharacteristic00[] = _("Loves napping on grass."); // HP
static const u8 sCharacteristic01[] = _("Has a scar on its face."); // Attack
static const u8 sCharacteristic02[] = _("Protective of its trainer."); // Defense
static const u8 sCharacteristic03[] = _("Aggressive flirt."); // Sp. Attack
static const u8 sCharacteristic04[] = _("Easily cries when separated."); // Sp. Defense
static const u8 sCharacteristic05[] = _("Always smiling."); // Speed
static const u8 sCharacteristic06[] = _("Loves to sing, not very good."); // HP
static const u8 sCharacteristic07[] = _("Gets cold very easily."); // Attack
static const u8 sCharacteristic08[] = _("Gets hot very easily."); // Defense
static const u8 sCharacteristic09[] = _("Loves to eat red flowers."); // Sp. Attack
static const u8 sCharacteristic10[] = _("Smells like ocean water."); // Sp. Defense
static const u8 sCharacteristic11[] = _("Enjoys arts & crafts."); // Speed
static const u8 sCharacteristic12[] = _("A little cross-eyed."); // HP
static const u8 sCharacteristic13[] = _("Likes to gamble."); // Attack
static const u8 sCharacteristic14[] = _("Has a resting angry face."); // Defense
static const u8 sCharacteristic15[] = _("Never eats meat."); // Sp. Attack
static const u8 sCharacteristic16[] = _("An old soul."); // Sp. Defense
static const u8 sCharacteristic17[] = _("Often sassy and smug."); // Speed
static const u8 sCharacteristic18[] = _("Hates the smell of Repels."); // HP
static const u8 sCharacteristic19[] = _("Likes to dig for treasure."); // Attack
static const u8 sCharacteristic20[] = _("Tries to keep itself clean."); // Defense
static const u8 sCharacteristic21[] = _("Has an imaginary friend."); // Sp. Attack
static const u8 sCharacteristic22[] = _("Has a terrible memory."); // Sp. Defense
static const u8 sCharacteristic23[] = _("Loves tiny things."); // Speed
static const u8 sCharacteristic24[] = _("Hates jazz music."); // HP
static const u8 sCharacteristic25[] = _("Can do over 100 push-ups."); // Attack
static const u8 sCharacteristic26[] = _("Loves being in the PC."); // Defense
static const u8 sCharacteristic27[] = _("Likes to collect gems."); // Sp. Attack
static const u8 sCharacteristic28[] = _("A total tsundere."); // Sp. Defense
static const u8 sCharacteristic29[] = _("Has a drinking problem."); // Speed

static const u8 sFlavorSpicy[] = _("Likes {COLOR 5}{SHADOW 6}spicy{COLOR 7}{SHADOW 8} food.");
static const u8 sFlavorDry[] = _("Likes {COLOR 5}{SHADOW 6}dry{COLOR 7}{SHADOW 8} food.");
static const u8 sFlavorSweet[] = _("Likes {COLOR 5}{SHADOW 6}sweet{COLOR 7}{SHADOW 8} food.");
static const u8 sFlavorBitter[] = _("Likes {COLOR 5}{SHADOW 6}bitter{COLOR 7}{SHADOW 8} food.");
static const u8 sFlavorSour[] = _("Likes {COLOR 5}{SHADOW 6}sour{COLOR 7}{SHADOW 8} food.");
static const u8 sFlavorNeutral[] = _("Happily eats anything.");

const u8 *const gCharacteristicPointers[30] = 
{
    sCharacteristic00,
	sCharacteristic01,
    sCharacteristic02,
	sCharacteristic03,
    sCharacteristic04,
	sCharacteristic05,
    sCharacteristic06,
	sCharacteristic07,
    sCharacteristic08,
	sCharacteristic09,
    sCharacteristic10,
	sCharacteristic11,
    sCharacteristic12,
	sCharacteristic13,
    sCharacteristic14,
	sCharacteristic15,
    sCharacteristic16,
	sCharacteristic17,
    sCharacteristic18,
	sCharacteristic19,
    sCharacteristic20,
	sCharacteristic21,
    sCharacteristic22,
	sCharacteristic23,
    sCharacteristic24,
	sCharacteristic25,
    sCharacteristic26,
	sCharacteristic27,
    sCharacteristic28,
	sCharacteristic29,
};

const u8 *const gNatureFlavorPointers[25] =
{
	[NATURE_HARDY]   = sFlavorNeutral,
	[NATURE_LONELY]  = sFlavorSpicy,
	[NATURE_BRAVE]   = sFlavorSpicy,
	[NATURE_ADAMANT] = sFlavorSpicy,
	[NATURE_NAUGHTY] = sFlavorSpicy,
	[NATURE_BOLD]    = sFlavorSour,
	[NATURE_DOCILE]  = sFlavorNeutral,
	[NATURE_RELAXED] = sFlavorSour,
	[NATURE_IMPISH]  = sFlavorSour,
	[NATURE_LAX]     = sFlavorSour,
	[NATURE_TIMID]   = sFlavorSweet,
	[NATURE_HASTY]   = sFlavorSweet,
	[NATURE_SERIOUS] = sFlavorNeutral,
	[NATURE_JOLLY]   = sFlavorSweet,
	[NATURE_NAIVE]   = sFlavorSweet,
	[NATURE_MODEST]  = sFlavorDry,
	[NATURE_MILD]    = sFlavorDry,
	[NATURE_QUIET]   = sFlavorDry,
	[NATURE_BASHFUL] = sFlavorNeutral,
	[NATURE_RASH]    = sFlavorDry,
	[NATURE_CALM]    = sFlavorBitter,
	[NATURE_GENTLE]  = sFlavorBitter,
	[NATURE_SASSY]   = sFlavorBitter,
	[NATURE_CAREFUL] = sFlavorBitter,
	[NATURE_QUIRKY]  = sFlavorNeutral,
};