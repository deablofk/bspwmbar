#ifndef BSPWMBAR_CONFIG_H_
#define BSPWMBAR_CONFIG_H_

#define THERMAL_PATH "/sys/class/thermal/thermal_zone0/temp"

#define FONT_MAXSZ  3
#define NAME_MAXSZ  32
#define TITLE_MAXSZ 50
#define WS_MAXSZ    5
#define BAR_HEIGHT  24
#define BGCOLOR    0
#define ALTFGCOLOR 1
#define FGCOLOR    2
#define LOGOCOLOR  3

#define CPUFONT 2
#define MEMFONT 2

static const char *colors[] = {
	"#222222", /* black */
	"#7f7f7f", /* gray */
	"#e5e5e5", /* white */
	"#1793d1", /* logo color */

	"#449f3d", /* success color */
	"#2f8419", /* normal color */
	"#f5a70a", /* warning color */
	"#ed5456", /* critical color */
};

static const char *font_names[] = {
	"sans-serif:size=10",
	"emoji:size=10",
	"monospace:size=8",
};

#endif
