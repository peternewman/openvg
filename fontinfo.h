#ifndef OPENVG_FONTINFO_H
#define OPENVG_FONTINFO_H

#include <simgear/canvas/ShivaVG/openvg.h>

#if defined(__cplusplus)
extern "C" {
#endif
	typedef struct {
		const short *CharacterMap;
		const int *GlyphAdvances;
		int Count;
		int descender_height;
		int font_height;
		VGPath Glyphs[500];
	} Fontinfo;

	extern Fontinfo SansTypeface, SerifTypeface, MonoTypeface;

#if defined(__cplusplus)
}
#endif				// OPENVG_FONTINFO_H
#endif
