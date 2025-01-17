/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef _COMMODORE64_H_
#define _COMMODORE64_H_

static const unsigned char font_commodore64_data [] = {
	 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,  /* <sp> */
	 0xff,0xff,0xff,0x05,0x05,0xff,0xff,0xff,     /* ! */
	 0xff,0x1f,0x1f,0xff,0xff,0x1f,0x1f,0xff,     /* " */
	 0xd7,0x01,0x01,0xd7,0xd7,0x01,0x01,0xd7,     /* # */
	 0xff,0xdb,0x8b,0x29,0x29,0xa3,0xb7,0xff,     /* $ */
	 0xff,0x39,0x33,0xe7,0xcf,0x99,0x39,0xff,     /* % */
	 0xff,0xb3,0x01,0x4d,0x4d,0x11,0xb1,0xf5,     /* & */
	 0xff,0xff,0xdf,0x9f,0x3f,0x7f,0xff,0xff,     /* ' */
	 0xff,0xff,0xc7,0x83,0x39,0x7d,0xff,0xff,     /* ( */
	 0xff,0xff,0x7d,0x39,0x83,0xc7,0xff,0xff,     /* ) */
	 0xef,0xab,0x83,0xc7,0xc7,0x83,0xab,0xef,     /* * */
	 0xff,0xef,0xef,0x83,0x83,0xef,0xef,0xff,     /* + */
	 0xff,0xff,0xfe,0xf8,0xf9,0xff,0xff,0xff,     /* , */
	 0xff,0xef,0xef,0xef,0xef,0xef,0xff,0xff,     /* - */
	 0xff,0xff,0xf9,0xf9,0xff,0xff,0xff,0xff,     /* . */
	 0xff,0xfb,0xf3,0xe7,0xcf,0x9f,0x3f,0x7f,     /* / */
	 0xff,0x83,0x01,0x6d,0x5d,0x01,0x83,0xff,     /* 0 */
	 0xff,0xfd,0xdd,0x01,0x01,0xfd,0xfd,0xff,     /* 1 */
	 0xff,0xb9,0x31,0x75,0x6d,0x0d,0x9d,0xff,     /* 2 */
	 0xff,0xbb,0x39,0x6d,0x6d,0x01,0x93,0xff,     /* 3 */
	 0xff,0xe7,0xe7,0xd7,0x97,0x01,0x01,0xf7,     /* 4 */
	 0xff,0x1b,0x19,0x5d,0x5d,0x41,0x63,0xff,     /* 5 */
	 0xff,0x83,0x01,0x6d,0x6d,0x21,0xb3,0xff,     /* 6 */
	 0xff,0x3f,0x3f,0x61,0x41,0x1f,0x3f,0xff,     /* 7 */
	 0xff,0x93,0x01,0x6d,0x6d,0x01,0x93,0xff,     /* 8 */
	 0xff,0x9b,0x09,0x6d,0x6d,0x01,0x83,0xff,     /* 9 */
	 0xff,0xff,0xff,0xdb,0xdb,0xff,0xff,0xff,     /* : */
	 0xff,0xff,0xfe,0xd8,0xd9,0xff,0xff,0xff,     /* ; */
	 0xff,0xef,0xc7,0x93,0x39,0x7d,0x7d,0xff,     /* < */
	 0xff,0xd7,0xd7,0xd7,0xd7,0xd7,0xd7,0xff,     /* = */
	 0xff,0x7d,0x7d,0x39,0x93,0xc7,0xef,0xff,     /* > */
	 0xff,0xbf,0x3f,0x75,0x65,0x0f,0x9f,0xff,     /* ? */
	 0xff,0x83,0x01,0x7d,0x4d,0x0d,0x8b,0xff,     /* @ */
	 0xff,0xc1,0x81,0x2f,0x2f,0x81,0xc1,0xff,     /* A */
	 0xff,0x01,0x01,0x6d,0x6d,0x01,0x93,0xff,     /* B */
	 0xff,0x83,0x01,0x7d,0x7d,0x39,0xbb,0xff,     /* C */
	 0xff,0x01,0x01,0x7d,0x39,0x83,0xc7,0xff,     /* D */
	 0xff,0x01,0x01,0x6d,0x6d,0x7d,0x7d,0xff,     /* E */
	 0xff,0x01,0x01,0x6f,0x6f,0x7f,0x7f,0xff,     /* F */
	 0xff,0x83,0x01,0x7d,0x6d,0x21,0xa3,0xff,     /* G */
	 0xff,0x01,0x01,0xef,0xef,0x01,0x01,0xff,     /* H */
	 0xff,0xff,0x7d,0x01,0x01,0x7d,0xff,0xff,     /* I */
	 0xff,0xfb,0xf9,0x7d,0x01,0x03,0x7f,0xff,     /* J */
	 0xff,0x01,0x01,0xc7,0x93,0x39,0x7d,0xff,     /* K */
	 0xff,0x01,0x01,0xfd,0xfd,0xfd,0xfd,0xff,     /* L */
	 0xff,0x01,0x01,0x9f,0xcf,0x9f,0x01,0x01,     /* M */
	 0xff,0x01,0x01,0x8f,0xc7,0x01,0x01,0xff,     /* N */
	 0xff,0x83,0x01,0x7d,0x7d,0x01,0x83,0xff,     /* O */
	 0xff,0x01,0x01,0x6f,0x6f,0x0f,0x9f,0xff,     /* P */
	 0xff,0x87,0x03,0x7b,0x7b,0x01,0x85,0xff,     /* Q */
	 0xff,0x01,0x01,0x67,0x63,0x09,0x9d,0xff,     /* R */
	 0xff,0x9b,0x09,0x6d,0x6d,0x21,0xb3,0xff,     /* S */
	 0xff,0x7f,0x7f,0x01,0x01,0x7f,0x7f,0xff,     /* T */
	 0xff,0x03,0x01,0xfd,0xfd,0x01,0x03,0xff,     /* U */
	 0xff,0x07,0x03,0xf9,0xf9,0x03,0x07,0xff,     /* V */
	 0xff,0x01,0x01,0xf3,0xe7,0xf3,0x01,0x01,     /* W */
	 0xff,0x39,0x11,0xc7,0xc7,0x11,0x39,0xff,     /* X */
	 0xff,0x1f,0x0f,0xe1,0xe1,0x0f,0x1f,0xff,     /* Y */
	 0xff,0x79,0x71,0x65,0x4d,0x1d,0x3d,0xff,     /* Z */
	 0xff,0xff,0x01,0x01,0x7d,0x7d,0xff,0xff,     /* [ */
	 0xff,0xbf,0x9f,0xcf,0xe7,0xf3,0xf9,0xfd,     /* \ */
	 0xff,0xff,0x7d,0x7d,0x01,0x01,0xff,0xff,     /* ] */
	 0xff,0xdf,0x9f,0x01,0x01,0x9f,0xdf,0xff,     /* ^ */
	 0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xff,     /* _ */
	 0xff,0xff,0x7f,0x3f,0x9f,0xdf,0xff,0xff,     /* ` */
	 0xff,0xfb,0xd1,0xd5,0xd5,0xc1,0xe1,0xff,     /* a */
	 0xff,0x81,0x81,0xed,0xed,0xe1,0xf3,0xff,     /* b */
	 0xff,0xe3,0xc1,0xdd,0xdd,0xdd,0xff,0xff,     /* c */
	 0xff,0xf3,0xe1,0xed,0xed,0x81,0x81,0xff,     /* d */
	 0xff,0xe3,0xc1,0xd5,0xd5,0xc5,0xe7,0xff,     /* e */
	 0xff,0xff,0xef,0xc1,0x81,0xaf,0xaf,0xff,     /* f */
	 0xff,0xe6,0xc2,0xda,0xda,0xc0,0xc1,0xff,     /* g */
	 0xff,0x81,0x81,0xef,0xef,0xe1,0xf1,0xff,     /* h */
	 0xff,0xff,0xed,0xa1,0xa1,0xfd,0xff,0xff,     /* i */
	 0xff,0xff,0xfe,0xfe,0xa0,0xa1,0xff,0xff,     /* j */
	 0xff,0x81,0x81,0xf7,0xe3,0xe9,0xfd,0xff,     /* k */
	 0xff,0xff,0xbd,0x81,0x81,0xfd,0xff,0xff,     /* l */
	 0xff,0xc1,0xc1,0xe7,0xe3,0xc7,0xc1,0xe1,     /* m */
	 0xff,0xc1,0xc1,0xdf,0xdf,0xc1,0xe1,0xff,     /* n */
	 0xff,0xe3,0xc1,0xdd,0xdd,0xc1,0xe3,0xff,     /* o */
	 0xff,0xc0,0xc0,0xdb,0xdb,0xc3,0xe7,0xff,     /* p */
	 0xff,0xe7,0xc3,0xdb,0xdb,0xc0,0xc0,0xff,     /* q */
	 0xff,0xc1,0xc1,0xdf,0xdf,0xcf,0xef,0xff,     /* r */
	 0xff,0xed,0xc5,0xd5,0xd5,0xd1,0xdb,0xff,     /* s */
	 0xff,0xdf,0xdf,0x83,0x81,0xdd,0xdd,0xff,     /* t */
	 0xff,0xc3,0xc1,0xfd,0xfd,0xc1,0xc1,0xff,     /* u */
	 0xff,0xc7,0xc3,0xf9,0xf9,0xc3,0xc7,0xff,     /* v */
	 0xff,0xc7,0xc1,0xf1,0xe3,0xf1,0xc1,0xc7,     /* w */
	 0xff,0xdd,0xc9,0xe3,0xe3,0xc9,0xdd,0xff,     /* x */
	 0xff,0xc6,0xc2,0xfa,0xf8,0xc1,0xc3,0xff,     /* y */
	 0xff,0xdd,0xd9,0xd1,0xc5,0xcd,0xdd,0xff,     /* z */
	 0xff,0xef,0xef,0x83,0x11,0x7d,0xff,0xff,     /* { */
	 0xff,0xff,0xff,0x01,0x01,0xff,0xff,0xff,     /* | */
	 0xff,0xff,0x7d,0x11,0x83,0xef,0xef,0xff,     /* } */
	 0xff,0x1f,0x3f,0x1f,0x9f,0x9f,0x3f,0xff,     /* ~ */
	 0xff,0xef,0xc7,0x83,0xef,0xef,0xef,0xff, /* <del> */
};

static const FontInfo font_commodore64 = {
	.fontIndex = 33,
	//.fontName = "Commodore64",
	.startUnicode = 32,
	.endUnicode = 128,
	.blockLength = 8,
	.logicality = false,
	.monospace = true,
	.numberHeight = 7,
	.index = nullptr,
	.data = font_commodore64_data,
};

/*
   Char Width Adjust Index    Total
 '<sp>'   8     +0      0   8 bytes
    '!'   8     +0      1   8 bytes
    '"'   8     +0      2   8 bytes
    '#'   8     +0      3   8 bytes
    '$'   8     +0      4   8 bytes
    '%'   8     +0      5   8 bytes
    '&'   8     +0      6   8 bytes
    '''   8     +0      7   8 bytes
    '('   8     +0      8   8 bytes
    ')'   8     +0      9   8 bytes
    '*'   8     +0     10   8 bytes
    '+'   8     +0     11   8 bytes
    ','   8     +0     12   8 bytes
    '-'   8     +0     13   8 bytes
    '.'   8     +0     14   8 bytes
    '/'   8     +0     15   8 bytes
    '0'   8     +0     16   8 bytes
    '1'   8     +0     17   8 bytes
    '2'   8     +0     18   8 bytes
    '3'   8     +0     19   8 bytes
    '4'   8     +0     20   8 bytes
    '5'   8     +0     21   8 bytes
    '6'   8     +0     22   8 bytes
    '7'   8     +0     23   8 bytes
    '8'   8     +0     24   8 bytes
    '9'   8     +0     25   8 bytes
    ':'   8     +0     26   8 bytes
    ';'   8     +0     27   8 bytes
    '<'   8     +0     28   8 bytes
    '='   8     +0     29   8 bytes
    '>'   8     +0     30   8 bytes
    '?'   8     +0     31   8 bytes
    '@'   8     +0     32   8 bytes
    'A'   8     +0     33   8 bytes
    'B'   8     +0     34   8 bytes
    'C'   8     +0     35   8 bytes
    'D'   8     +0     36   8 bytes
    'E'   8     +0     37   8 bytes
    'F'   8     +0     38   8 bytes
    'G'   8     +0     39   8 bytes
    'H'   8     +0     40   8 bytes
    'I'   8     +0     41   8 bytes
    'J'   8     +0     42   8 bytes
    'K'   8     +0     43   8 bytes
    'L'   8     +0     44   8 bytes
    'M'   8     +0     45   8 bytes
    'N'   8     +0     46   8 bytes
    'O'   8     +0     47   8 bytes
    'P'   8     +0     48   8 bytes
    'Q'   8     +0     49   8 bytes
    'R'   8     +0     50   8 bytes
    'S'   8     +0     51   8 bytes
    'T'   8     +0     52   8 bytes
    'U'   8     +0     53   8 bytes
    'V'   8     +0     54   8 bytes
    'W'   8     +0     55   8 bytes
    'X'   8     +0     56   8 bytes
    'Y'   8     +0     57   8 bytes
    'Z'   8     +0     58   8 bytes
    '['   8     +0     59   8 bytes
    '\'   8     +0     60   8 bytes
    ']'   8     +0     61   8 bytes
    '^'   8     +0     62   8 bytes
    '_'   8     +0     63   8 bytes
    '`'   8     +0     64   8 bytes
    'a'   8     +0     65   8 bytes
    'b'   8     +0     66   8 bytes
    'c'   8     +0     67   8 bytes
    'd'   8     +0     68   8 bytes
    'e'   8     +0     69   8 bytes
    'f'   8     +0     70   8 bytes
    'g'   8     +0     71   8 bytes
    'h'   8     +0     72   8 bytes
    'i'   8     +0     73   8 bytes
    'j'   8     +0     74   8 bytes
    'k'   8     +0     75   8 bytes
    'l'   8     +0     76   8 bytes
    'm'   8     +0     77   8 bytes
    'n'   8     +0     78   8 bytes
    'o'   8     +0     79   8 bytes
    'p'   8     +0     80   8 bytes
    'q'   8     +0     81   8 bytes
    'r'   8     +0     82   8 bytes
    's'   8     +0     83   8 bytes
    't'   8     +0     84   8 bytes
    'u'   8     +0     85   8 bytes
    'v'   8     +0     86   8 bytes
    'w'   8     +0     87   8 bytes
    'x'   8     +0     88   8 bytes
    'y'   8     +0     89   8 bytes
    'z'   8     +0     90   8 bytes
    '{'   8     +0     91   8 bytes
    '|'   8     +0     92   8 bytes
    '}'   8     +0     93   8 bytes
    '~'   8     +0     94   8 bytes
'<del>'   8     +0     95   8 bytes
Font Size Status: Index section 0 bytes, Pure Data 768 bytes, Data section 768 bytes, Total 768 bytes.
Using image: '33_Commodore64.png' size (768, 9), unicode from 32 to 127/127, grayscale threshold: 127, converted by ImageBinarization.
With options: MSB_AT_TOP, NEGATIVE_LOGIC, WIDTH_DETECT_AT_TOP, WIDTH_DETECT_MODE_SAME_COLOR, MONOSPACE
*/
#endif

