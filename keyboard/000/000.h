#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110,       \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210  \
) \
{ \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  KC_NO }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  KC_NO }  \
}