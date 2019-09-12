#include <kernel.h>

#ifdef CONFIG_FONT_4x8

/*

  From a font BDF file with the 0-31 graphic symbols included
  dropped. The BDF font is

  Copyright (c) 1999, Thomas A. Fine

  License to copy, modify, and distribute for both commercial and
  non-commercial use is herby granted, provided this notice
  is preserved.

  Email to my last name at head.cfa.harvard.edu
  http://hea-www.harvard.edu/~fine/

  Produced with bdfedit, a tcl/tk font editing program
  written by Thomas A. Fine
*/

const unsigned char font4x8[] = {
	/* Character ' ' */
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	/* Character '!' */
	0x00,0x44,0x44,0x44,0x44,0x00,0x44,0x00,
	/* Character '"' */
	0x00,0xAA,0xAA,0x00,0x00,0x00,0x00,0x00,
	/* Character '#' */
	0x00,0xAA,0xEE,0xAA,0xAA,0xEE,0xAA,0x00,
	/* Character '$' */
	0x44,0x44,0xAA,0x44,0x22,0xAA,0x44,0x44,
	/* Character '%' */
	0x00,0xAA,0x22,0x44,0x44,0x88,0xAA,0x00,
	/* Character '&' */
	0x44,0xAA,0x44,0xAA,0xAA,0xCC,0x66,0x00,
	/* Character ''' */
	0x00,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	/* Character '(' */
	0x00,0x22,0x44,0x44,0x44,0x44,0x22,0x00,
	/* Character ')' */
	0x00,0x88,0x44,0x44,0x44,0x44,0x88,0x00,
	/* Character '*' */
	0x00,0xAA,0x44,0xEE,0x44,0xAA,0x00,0x00,
	/* Character '+' */
	0x00,0x44,0x44,0xEE,0x44,0x44,0x00,0x00,
	/* Character ',' */
	0x00,0x00,0x00,0x00,0x00,0x44,0x44,0x88,
	/* Character '-' */
	0x00,0x00,0x00,0xEE,0x00,0x00,0x00,0x00,
	/* Character '.' */
	0x00,0x00,0x00,0x00,0x00,0x44,0x44,0x00,
	/* Character '/' */
	0x00,0x22,0x22,0x44,0x44,0x88,0x88,0x00,
	/* Character '0' */
	0x00,0x44,0xAA,0xEE,0xAA,0xAA,0x44,0x00,
	/* Character '1' */
	0x00,0x44,0xCC,0x44,0x44,0x44,0xEE,0x00,
	/* Character '2' */
	0x00,0x44,0xAA,0x22,0x44,0x88,0xEE,0x00,
	/* Character '3' */
	0x00,0xEE,0x22,0x44,0x22,0xAA,0x44,0x00,
	/* Character '4' */
	0x00,0x22,0x66,0xAA,0xEE,0x22,0x22,0x00,
	/* Character '5' */
	0x00,0xEE,0x88,0xCC,0x22,0xAA,0x44,0x00,
	/* Character '6' */
	0x00,0x66,0x88,0xCC,0xAA,0xAA,0x44,0x00,
	/* Character '7' */
	0x00,0xEE,0x22,0x22,0x44,0x44,0x44,0x00,
	/* Character '8' */
	0x00,0x44,0xAA,0x44,0xAA,0xAA,0x44,0x00,
	/* Character '9' */
	0x00,0x44,0xAA,0xAA,0x66,0x22,0xCC,0x00,
	/* Character ':' */
	0x00,0x00,0x44,0x00,0x00,0x44,0x00,0x00,
	/* Character ';' */
	0x00,0x00,0x44,0x00,0x00,0x44,0x88,0x00,
	/* Character '<' */
	0x00,0x00,0x22,0x44,0x88,0x44,0x22,0x00,
	/* Character '=' */
	0x00,0x00,0xEE,0x00,0xEE,0x00,0x00,0x00,
	/* Character '>' */
	0x00,0x00,0x88,0x44,0x22,0x44,0x88,0x00,
	/* Character '?' */
	0x00,0x44,0xAA,0x22,0x44,0x00,0x44,0x00,
	/* Character '@' */
	0x00,0x44,0xAA,0xAA,0x88,0x88,0x66,0x00,
	/* Character 'A' */
	0x00,0x44,0xAA,0xAA,0xEE,0xAA,0xAA,0x00,
	/* Character 'B' */
	0x00,0xCC,0xAA,0xCC,0xAA,0xAA,0xCC,0x00,
	/* Character 'C' */
	0x00,0x44,0xAA,0x88,0x88,0xAA,0x44,0x00,
	/* Character 'D' */
	0x00,0xCC,0xAA,0xAA,0xAA,0xAA,0xCC,0x00,
	/* Character 'E' */
	0x00,0xEE,0x88,0xEE,0x88,0x88,0xEE,0x00,
	/* Character 'F' */
	0x00,0xEE,0x88,0xEE,0x88,0x88,0x88,0x00,
	/* Character 'G' */
	0x00,0x44,0xAA,0x88,0xAA,0xAA,0x44,0x00,
	/* Character 'H' */
	0x00,0xAA,0xAA,0xEE,0xAA,0xAA,0xAA,0x00,
	/* Character 'I' */
	0x00,0xEE,0x44,0x44,0x44,0x44,0xEE,0x00,
	/* Character 'J' */
	0x00,0x22,0x22,0x22,0x22,0xAA,0x44,0x00,
	/* Character 'K' */
	0x00,0xAA,0xAA,0xCC,0xAA,0xAA,0xAA,0x00,
	/* Character 'L' */
	0x00,0x88,0x88,0x88,0x88,0x88,0xEE,0x00,
	/* Character 'M' */
	0x00,0xAA,0xEE,0xAA,0xAA,0xAA,0xAA,0x00,
	/* Character 'N' */
	0x00,0x22,0xAA,0xEE,0xEE,0xAA,0x88,0x00,
	/* Character 'O' */
	0x00,0x44,0xAA,0xAA,0xAA,0xAA,0x44,0x00,
	/* Character 'P' */
	0x00,0xCC,0xAA,0xAA,0xCC,0x88,0x88,0x00,
	/* Character 'Q' */
	0x00,0x44,0xAA,0xAA,0xAA,0xCC,0x66,0x00,
	/* Character 'R' */
	0x00,0xCC,0xAA,0xAA,0xCC,0xAA,0xAA,0x00,
	/* Character 'S' */
	0x00,0x44,0xAA,0x44,0x22,0xAA,0x44,0x00,
	/* Character 'T' */
	0x00,0xEE,0x44,0x44,0x44,0x44,0x44,0x00,
	/* Character 'U' */
	0x00,0xAA,0xAA,0xAA,0xAA,0xAA,0xEE,0x00,
	/* Character 'V' */
	0x00,0xAA,0xAA,0xAA,0xAA,0xAA,0x44,0x00,
	/* Character 'W' */
	0x00,0xAA,0xAA,0xAA,0xAA,0xEE,0xAA,0x00,
	/* Character 'X' */
	0x00,0xAA,0xAA,0x44,0xAA,0xAA,0xAA,0x00,
	/* Character 'Y' */
	0x00,0xAA,0xAA,0x44,0x44,0x44,0x44,0x00,
	/* Character 'Z' */
	0x00,0xEE,0x22,0x44,0x44,0x88,0xEE,0x00,
	/* Character '[' */
	0x00,0x66,0x44,0x44,0x44,0x44,0x66,0x00,
	/* Character '\' */
	0x00,0x88,0x88,0x44,0x44,0x22,0x22,0x00,
	/* Character ']' */
	0x00,0xCC,0x44,0x44,0x44,0x44,0xCC,0x00,
	/* Character '^' */
	0x00,0x44,0xAA,0x00,0x00,0x00,0x00,0x00,
	/* Character '_' */
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	/* Character '`' */
	0x00,0x88,0x44,0x00,0x00,0x00,0x00,0x00,
	/* Character 'a' */
	0x00,0x00,0xCC,0x22,0x66,0xAA,0x66,0x00,
	/* Character 'b' */
	0x00,0x88,0x88,0xCC,0xAA,0xAA,0xCC,0x00,
	/* Character 'c' */
	0x00,0x00,0x66,0x88,0x88,0x88,0x66,0x00,
	/* Character 'd' */
	0x00,0x22,0x22,0x66,0xAA,0xAA,0x66,0x00,
	/* Character 'e' */
	0x00,0x00,0x44,0xAA,0xEE,0x88,0x66,0x00,
	/* Character 'f' */
	0x00,0x22,0x44,0xEE,0x44,0x44,0x44,0x00,
	/* Character 'g' */
	0x00,0x00,0x66,0xAA,0xAA,0x66,0x22,0xCC,
	/* Character 'h' */
	0x00,0x88,0x88,0xCC,0xAA,0xAA,0xAA,0x00,
	/* Character 'i' */
	0x00,0x44,0x00,0xCC,0x44,0x44,0xEE,0x00,
	/* Character 'j' */
	0x00,0x22,0x00,0x66,0x22,0x22,0x22,0xCC,
	/* Character 'k' */
	0x00,0x88,0x88,0xAA,0xCC,0xAA,0xAA,0x00,
	/* Character 'l' */
	0x00,0x44,0x44,0x44,0x44,0x44,0x44,0x00,
	/* Character 'm' */
	0x00,0x00,0xAA,0xEE,0xAA,0xAA,0xAA,0x00,
	/* Character 'n' */
	0x00,0x00,0xCC,0xAA,0xAA,0xAA,0xAA,0x00,
	/* Character 'o' */
	0x00,0x00,0x44,0xAA,0xAA,0xAA,0x44,0x00,
	/* Character 'p' */
	0x00,0x00,0xCC,0xAA,0xAA,0xCC,0x88,0x88,
	/* Character 'q' */
	0x00,0x00,0x66,0xAA,0xAA,0x66,0x22,0x22,
	/* Character 'r' */
	0x00,0x00,0x66,0x88,0x88,0x88,0x88,0x00,
	/* Character 's' */
	0x00,0x00,0x66,0x88,0x44,0x22,0xCC,0x00,
	/* Character 't' */
	0x00,0x44,0x44,0xEE,0x44,0x44,0x44,0x00,
	/* Character 'u' */
	0x00,0x00,0xAA,0xAA,0xAA,0xAA,0xEE,0x00,
	/* Character 'v' */
	0x00,0x00,0xAA,0xAA,0xAA,0xAA,0x44,0x00,
	/* Character 'w' */
	0x00,0x00,0xAA,0xAA,0xAA,0xEE,0xAA,0x00,
	/* Character 'x' */
	0x00,0x00,0xAA,0xAA,0x44,0xAA,0xAA,0x00,
	/* Character 'y' */
	0x00,0x00,0xAA,0xAA,0xAA,0x66,0x22,0xCC,
	/* Character 'z' */
	0x00,0x00,0xEE,0x22,0x44,0x88,0xEE,0x00,
	/* Character '{' */
	0x22,0x44,0x44,0x88,0x44,0x44,0x22,0x00,
	/* Character '|' */
	0x44,0x44,0x44,0x00,0x44,0x44,0x44,0x00,
	/* Character '}' */
	0x88,0x44,0x44,0x22,0x44,0x44,0x88,0x00,
	/* Character '~' */
	0x00,0x00,0xCC,0x66,0x00,0x00,0x00,0x00,
	/* Character 127 */
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

#endif
struct sdcc_is_anal {
	int cant_have_an_empty_file;
};
