#ifndef POKEPLATINUM_CONSTANTS_FONT_H
#define POKEPLATINUM_CONSTANTS_FONT_H

typedef u32 FONT_COLOR;

#define FONT_COLOR_MASK         0xFF
#define FONT_COLOR_LETTER_SHIFT 16
#define FONT_COLOR_SHADOW_SHIFT 8
#define FONT_COLOR_BG_SHIFT     0

#define MAKE_FONT_COLOR(letter, shadow, bg) ((FONT_COLOR)(((letter & FONT_COLOR_MASK) << FONT_COLOR_LETTER_SHIFT) \
    | ((shadow & FONT_COLOR_MASK) << FONT_COLOR_SHADOW_SHIFT)                                                     \
    | ((bg & FONT_COLOR_MASK) << FONT_COLOR_BG_SHIFT)))

enum FontType {
    FONT_SYSTEM = 0,
    FONT_NPC_TALK,
    FONT_BUTTONS,
    FONT_UNK,

    FONT_MAX,
};

#endif // POKEPLATINUM_CONSTANTS_FONT_H
