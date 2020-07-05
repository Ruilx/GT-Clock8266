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
#ifndef _KANA6_H_
#define _KANA6_H_

const unsigned char kana6_data [] = {
	 0xdb,0x85,0xd3,0xd7,0xd9,0xff,     /* ぁ */
	 0xb3,0x05,0xab,0xa7,0xb1,0xff,     /* あ */
	 0xe1,0xfd,0xfb,0xef,0xf3,0xff,     /* ぃ */
	 0x83,0xfd,0xfb,0xef,0xf3,0xff,     /* い */
	 0xff,0xd5,0xd5,0xd5,0xf3,0xff,     /* ぅ */
	 0xef,0x6d,0xad,0xab,0xf7,0xff,     /* う */
	 0xfd,0xed,0xab,0xa1,0xed,0xff,     /* ぇ */
	 0xdd,0xdb,0x47,0x51,0xfd,0xff,     /* え */
	 0xd9,0x81,0xd7,0xf5,0xdb,0xff,     /* ぉ */
	 0xd9,0x01,0xd7,0x75,0xbb,0xff,     /* お */
	 0xdd,0xdb,0x07,0xdd,0x41,0xff,     /* か */
	 0xdd,0x03,0xdf,0x5d,0xa1,0xff,     /* が */
	 0xfb,0xad,0x0d,0xa5,0xaf,0xff,     /* き */
	 0xfb,0xad,0x0d,0xa5,0x6f,0xff,     /* ぎ */
	 0xdf,0xaf,0x77,0xfb,0xfd,0xff,     /* く */
	 0xdf,0xaf,0xf7,0x7b,0xbd,0xff,     /* ぐ */
	 0x83,0xff,0xdd,0x03,0xdf,0xff,     /* け */
	 0x83,0xff,0xed,0x43,0xaf,0xff,     /* げ */
	 0xfb,0xbd,0xbd,0xbd,0xdd,0xff,     /* こ */
	 0xfb,0xdd,0xdd,0x6d,0xbd,0xff,     /* ご */
	 0xfb,0xd5,0x1d,0xcd,0xdd,0xff,     /* さ */
	 0xdb,0x1d,0xcd,0x5d,0xbf,0xff,     /* ざ */
	 0x03,0xfd,0xfd,0xfb,0xf7,0xff,     /* し */
	 0x03,0xfd,0xfd,0x7b,0xb7,0xff,     /* じ */
	 0xbf,0xa7,0x05,0xb3,0xbf,0xff,     /* す */
	 0xdf,0xc5,0x85,0x5b,0xbf,0xff,     /* ず */
	 0xdf,0x83,0xdd,0x05,0xdd,0xff,     /* せ */
	 0xef,0x03,0xed,0x45,0xad,0xff,     /* ぜ */
	 0xef,0x6f,0x4b,0x25,0x6d,0xff,     /* そ */
	 0xaf,0xaf,0x8b,0x65,0xad,0xff,     /* ぞ */
	 0xb1,0x0f,0xb5,0xad,0xad,0xff,     /* た */
	 0xd1,0x0f,0xd5,0x55,0xb5,0xff,     /* だ */
	 0xbf,0x05,0xad,0xad,0xb3,0xff,     /* ち */
	 0xdf,0x05,0xd5,0x55,0xbb,0xff,     /* ぢ */
	 0xff,0xef,0xef,0xed,0xf3,0xff,     /* っ */
	 0xbf,0xbb,0x7b,0x77,0x8f,0xff,     /* つ */
	 0xef,0xed,0xdd,0x5b,0xa7,0xff,     /* づ */
	 0x73,0x6d,0x5d,0x3d,0x7f,0xff,     /* て */
	 0xdf,0xd3,0xcd,0x5d,0xbf,0xff,     /* で */
	 0xfb,0x15,0xed,0xdd,0xdd,0xff,     /* と */
	 0xfb,0x15,0xed,0x6d,0xbd,0xff,     /* ど */
	 0xb1,0x0f,0xb9,0xe1,0xbd,0xff,     /* な */
	 0x01,0xfb,0xbd,0xbd,0x9d,0xff,     /* に */
	 0x83,0xd7,0x0f,0xd9,0xe1,0xff,     /* ぬ */
	 0xb3,0x01,0xaf,0xe9,0xf1,0xff,     /* ね */
	 0x87,0x7b,0x07,0x7d,0x83,0xff,     /* の */
	 0x01,0xb9,0xb5,0x03,0xbd,0xff,     /* は */
	 0x01,0xeb,0xe5,0x43,0xad,0xff,     /* ば */
	 0x81,0xeb,0xe5,0x03,0x2d,0xff,     /* ぱ */
	 0xa3,0x1d,0xfd,0x83,0xdf,0xff,     /* ひ */
	 0xa3,0x1d,0xfd,0x43,0xaf,0xff,     /* び */
	 0xa3,0x1d,0xfd,0x23,0x37,0xff,     /* ぴ */
	 0xfb,0xf7,0x4d,0xb3,0xfb,0xff,     /* ふ */
	 0xfb,0x77,0x8d,0x73,0xbb,0xff,     /* ぶ */
	 0xfb,0x77,0x8d,0x33,0x3b,0xff,     /* ぷ */
	 0xef,0xdf,0xef,0xf7,0xfb,0xff,     /* へ */
	 0xef,0xdf,0xef,0x77,0xbb,0xff,     /* べ */
	 0xef,0xdf,0xef,0x37,0x3b,0xff,     /* ぺ */
	 0x01,0xfb,0x55,0x03,0x5d,0xff,     /* ほ */
	 0x01,0xab,0xa5,0x43,0xad,0xff,     /* ぼ */
	 0x01,0xab,0xa5,0x03,0x2d,0xff,     /* ぽ */
	 0xff,0xa9,0xa9,0x03,0xad,0xff,     /* ま */
	 0x73,0x75,0x01,0xf3,0xe9,0xff,     /* み */
	 0xa7,0x01,0xbd,0xdd,0xe9,0xff,     /* む */
	 0xe3,0x05,0xdb,0x87,0xe1,0xff,     /* め */
	 0xd7,0x03,0xd5,0xd5,0xf9,0xff,     /* も */
	 0xef,0xc1,0xef,0xab,0xe7,0xff,     /* ゃ */
	 0xdf,0x01,0xdf,0x57,0xcf,0xff,     /* や */
	 0xe3,0xf7,0xc1,0xed,0xf3,0xff,     /* ゅ */
	 0x87,0xdf,0x01,0xbb,0xc7,0xff,     /* ゆ */
	 0xfb,0xf5,0xc1,0xeb,0xed,0xff,     /* ょ */
	 0xfb,0xf5,0x03,0xdb,0xdd,0xff,     /* よ */
	 0x87,0xf5,0x6d,0x6d,0xb3,0xff,     /* ら */
	 0x0f,0xfd,0xfd,0x7b,0x07,0xff,     /* り */
	 0xf7,0x6f,0x49,0x29,0x73,0xff,     /* る */
	 0xb7,0x01,0xaf,0xe1,0xfd,0xff,     /* れ */
	 0xf7,0x6f,0x4d,0x2d,0x73,0xff,     /* ろ */
	 0xeb,0xc1,0xe7,0xf5,0xfb,0xff,     /* ゎ */
	 0xb3,0x01,0xaf,0xed,0xf3,0xff,     /* わ */
	 0x61,0x5b,0x07,0xe9,0xf1,0xff,     /* ゐ */
	 0xfd,0x5b,0x35,0x07,0x4d,0xff,     /* ゑ */
	 0xab,0x95,0x21,0xb5,0xed,0xff,     /* を */
	 0x81,0x6f,0xf3,0xfd,0xfb,0xff,     /* ん */
	 0xd7,0xd5,0xd5,0x7b,0xbf,0xff,     /* ゔ */
	 0xed,0xc3,0xef,0xb1,0xcf,0xff,     /* ゕ */
	 0xc1,0xff,0xed,0xc3,0xef,0xff,     /* ゖ */
	 0x00,0x00,0x00,0x00,0x00,0x00,     /* ゗ */
	 0x00,0x00,0x00,0x00,0x00,0x00,     /* ゘ */
	 0xff,0xff,0xff,0x7f,0xbf,0xff,     /* ゙ */
	 0xff,0xff,0xff,0x3f,0x3f,0xff,     /* ゚ */
	 0xff,0xff,0xdf,0x6f,0xbf,0xff,     /* ゛ */
	 0xff,0xff,0xbf,0x5f,0xbf,0xff,     /* ゜ */
	 0xff,0xbf,0xdf,0xeb,0xf3,0xff,     /* ゝ */
	 0xff,0xdf,0xef,0x75,0xb9,0xff,     /* ゞ */
	 0xf9,0x07,0xaf,0xad,0xb3,0xff,     /* ゟ */
	 0xaf,0xaf,0xaf,0xaf,0xff,0xff,     /* ゠ */
	 0xdd,0xd3,0xd7,0xcf,0xff,0xff,     /* ァ */
	 0x7f,0x7d,0x43,0x5f,0x3f,0xff,     /* ア */
	 0xfb,0xf7,0xe1,0xdf,0xff,0xff,     /* ィ */
	 0xef,0xef,0xc1,0xbf,0x7f,0xff,     /* イ */
	 0xe7,0xed,0xcd,0xeb,0xe7,0xff,     /* ゥ */
	 0x9f,0xbd,0x3d,0xbb,0x87,0xff,     /* ウ */
	 0xdd,0xdd,0xc1,0xdd,0xdd,0xff,     /* ェ */
	 0xbd,0xbd,0x81,0xbd,0xbd,0xff,     /* エ */
	 0xed,0xeb,0xe5,0xc1,0xef,0xff,     /* ォ */
	 0xdb,0xd7,0xcd,0x81,0xdf,0xff,     /* オ */
	 0xdd,0xd3,0x0f,0xdd,0xc1,0xff,     /* カ */
	 0xd9,0x07,0xdf,0x5d,0xa1,0xff,     /* ガ */
	 0xd7,0x17,0xc7,0xd1,0xd7,0xff,     /* キ */
	 0xd7,0x17,0xc1,0x57,0xb7,0xff,     /* ギ */
	 0xdf,0x3d,0xbd,0xbb,0x87,0xff,     /* ク */
	 0xed,0x1d,0xdb,0x57,0x8f,0xff,     /* グ */
	 0xdf,0x3d,0xbb,0x87,0xbf,0xff,     /* ケ */
	 0xef,0x1d,0xdb,0x47,0x9f,0xff,     /* ゲ */
	 0xbd,0xbd,0xbd,0xbd,0x81,0xff,     /* コ */
	 0xdd,0xdd,0xdd,0x41,0xbf,0xff,     /* ゴ */
	 0xdf,0x05,0xdd,0x83,0xdf,0xff,     /* サ */
	 0xef,0x05,0xed,0x43,0xaf,0xff,     /* ザ */
	 0x6d,0x6d,0xad,0xfb,0xc7,0xff,     /* シ */
	 0xad,0xad,0xed,0x7b,0xa7,0xff,     /* ジ */
	 0x7d,0x7b,0x77,0x4b,0x3d,0xff,     /* ス */
	 0xdd,0xdb,0xd7,0x4b,0xbd,0xff,     /* ズ */
	 0xdf,0x01,0xdd,0xd5,0xcd,0xff,     /* セ */
	 0xdf,0x01,0xdd,0x55,0xad,0xff,     /* ゼ */
	 0x3d,0xcd,0xfb,0xe7,0x1f,0xff,     /* ソ */
	 0x3d,0xcd,0xfd,0x7b,0xa7,0xff,     /* ゾ */
	 0xdd,0x3d,0xab,0xb7,0x8b,0xff,     /* タ */
	 0xed,0x1d,0xd5,0x5b,0x87,0xff,     /* ダ */
	 0xef,0xad,0x83,0x6f,0x6f,0xff,     /* チ */
	 0xf7,0xd5,0xc3,0x57,0xb7,0xff,     /* ヂ */
	 0xcf,0xfd,0xcd,0xfb,0xc7,0xff,     /* ッ */
	 0x1f,0xfd,0x1d,0xfb,0x07,0xff,     /* ツ */
	 0x1f,0xfd,0xcd,0x7b,0xa7,0xff,     /* ヅ */
	 0xdd,0x5b,0x47,0x5f,0xdf,0xff,     /* テ */
	 0xef,0xad,0xa3,0x6f,0xaf,0xff,     /* デ */
	 0xff,0x01,0xdf,0xef,0xf7,0xff,     /* ト */
	 0xff,0x01,0xdf,0x6f,0xb7,0xff,     /* ド */
	 0xdf,0xdd,0x03,0xdf,0xdf,0xff,     /* ナ */
	 0xfb,0xbb,0xbb,0xbb,0xfb,0xff,     /* ニ */
	 0x7d,0x6b,0x77,0x6b,0x1f,0xff,     /* ヌ */
	 0xdd,0x5b,0x51,0x47,0xdb,0xff,     /* ネ */
	 0xfd,0xfb,0xf7,0xcf,0x3f,0xff,     /* ノ */
	 0xf9,0x87,0xff,0x0f,0xf1,0xff,     /* ハ */
	 0xf1,0x0f,0xff,0x67,0xb9,0xff,     /* バ */
	 0xf1,0x0f,0xff,0x27,0x39,0xff,     /* パ */
	 0x03,0xed,0xdd,0xdd,0xbd,0xff,     /* ヒ */
	 0x03,0xf5,0xed,0x6d,0xbd,0xff,     /* ビ */
	 0x03,0xf5,0xed,0x2d,0x3d,0xff,     /* ピ */
	 0x7d,0x7d,0x7b,0x77,0x0f,0xff,     /* フ */
	 0xdf,0xdd,0xdd,0x5b,0xa7,0xff,     /* ブ */
	 0xdf,0xdd,0xdd,0x1b,0x07,0xff,     /* プ */
	 0xef,0xdf,0xef,0xf7,0xfb,0xff,     /* ヘ */
	 0xef,0xdf,0xef,0x77,0xbb,0xff,     /* ベ */
	 0xef,0xdf,0xef,0x37,0x3b,0xff,     /* ペ */
	 0xdb,0xd7,0x01,0xd7,0xdb,0xff,     /* ホ */
	 0xed,0xeb,0x81,0x6b,0xad,0xff,     /* ボ */
	 0xed,0xeb,0x81,0x2b,0x2d,0xff,     /* ポ */
	 0x7f,0x77,0x73,0x4d,0x3f,0xff,     /* マ */
	 0xf7,0x57,0x5b,0x6b,0xbd,0xff,     /* ミ */
	 0xfb,0xe3,0x9b,0x73,0xfd,0xff,     /* ム */
	 0xfd,0xeb,0xf7,0xeb,0x1f,0xff,     /* メ */
	 0x6f,0x03,0x6d,0x6d,0x6d,0xff,     /* モ */
	 0xef,0xc1,0xef,0xeb,0xe7,0xff,     /* ャ */
	 0xdf,0x01,0xdf,0xd7,0xcf,0xff,     /* ヤ */
	 0xfd,0xed,0xed,0xe1,0xfd,0xff,     /* ュ */
	 0x7d,0x7d,0x7d,0x01,0xfd,0xff,     /* ユ */
	 0xd5,0xd5,0xd5,0xd5,0xc1,0xff,     /* ョ */
	 0x6d,0x6d,0x6d,0x6d,0x01,0xff,     /* ヨ */
	 0xdf,0x5d,0x5d,0x5b,0x47,0xff,     /* ラ */
	 0x87,0xfd,0xfd,0x7b,0x07,0xff,     /* リ */
	 0xc1,0xff,0x01,0xfd,0xf3,0xff,     /* ル */
	 0x01,0xfd,0xfb,0xfb,0xf7,0xff,     /* レ */
	 0x81,0xbd,0xbd,0xbd,0x81,0xff,     /* ロ */
	 0xcf,0xdd,0xdd,0xdb,0xc7,0xff,     /* ヮ */
	 0x1f,0x7d,0x7d,0x7b,0x07,0xff,     /* ワ */
	 0xf7,0x87,0xb7,0x01,0xb7,0xff,     /* ヰ */
	 0x7d,0x7d,0x61,0x5d,0x3d,0xff,     /* ヱ */
	 0x7f,0x5d,0x5d,0x5b,0x07,0xff,     /* ヲ */
	 0x7d,0x7d,0xbd,0xfb,0xe7,0xff,     /* ン */
	 0xcf,0xdd,0x9d,0x5b,0xa7,0xff,     /* ヴ */
	 0xed,0xc3,0xef,0xe1,0xff,0xff,     /* ヵ */
	 0xf7,0xcf,0xed,0xe3,0xef,0xff,     /* ヶ */
	 0xcf,0xdd,0xdd,0x5b,0xa7,0xff,     /* ヷ */
	 0xfb,0xe3,0xeb,0x41,0xab,0xff,     /* ヸ */
	 0xdd,0xdd,0xd1,0x4d,0xbd,0xff,     /* ヹ */
	 0xdf,0xd5,0xd5,0x53,0xa7,0xff,     /* ヺ */
	 0xff,0xff,0xef,0xff,0xff,0xff,     /* ・ */
	 0xef,0xef,0xef,0xef,0xef,0xff,     /* ー */
	 0xbf,0xdf,0xe7,0xf9,0xff,0xff,     /* ヽ */
	 0xbf,0xdf,0xe7,0x79,0xbf,0xff,     /* ヾ */
}

void setupFontkana6(fontInfo *font){
	if(font != nullptr){
		font->fontIndex = 64;
		strncpy(font->fontName, "Kana6", 6);
		font->startUnicode = 12353;
		font->endUnicode = 12543;
		font->blockLength = 6;
		font->logicality = false;
		font->monospace = true;
		font->monoMask = 0xFF;
		font->index = nullptr;
		font->data = kana6_data;
	}
}

/*
   Char Width Adjust Index    Total
    'ぁ'   6     +0      0   6 bytes
    'あ'   6     +0      1   6 bytes
    'ぃ'   6     +0      2   6 bytes
    'い'   6     +0      3   6 bytes
    'ぅ'   6     +0      4   6 bytes
    'う'   6     +0      5   6 bytes
    'ぇ'   6     +0      6   6 bytes
    'え'   6     +0      7   6 bytes
    'ぉ'   6     +0      8   6 bytes
    'お'   6     +0      9   6 bytes
    'か'   6     +0     10   6 bytes
    'が'   6     +0     11   6 bytes
    'き'   6     +0     12   6 bytes
    'ぎ'   6     +0     13   6 bytes
    'く'   6     +0     14   6 bytes
    'ぐ'   6     +0     15   6 bytes
    'け'   6     +0     16   6 bytes
    'げ'   6     +0     17   6 bytes
    'こ'   6     +0     18   6 bytes
    'ご'   6     +0     19   6 bytes
    'さ'   6     +0     20   6 bytes
    'ざ'   6     +0     21   6 bytes
    'し'   6     +0     22   6 bytes
    'じ'   6     +0     23   6 bytes
    'す'   6     +0     24   6 bytes
    'ず'   6     +0     25   6 bytes
    'せ'   6     +0     26   6 bytes
    'ぜ'   6     +0     27   6 bytes
    'そ'   6     +0     28   6 bytes
    'ぞ'   6     +0     29   6 bytes
    'た'   6     +0     30   6 bytes
    'だ'   6     +0     31   6 bytes
    'ち'   6     +0     32   6 bytes
    'ぢ'   6     +0     33   6 bytes
    'っ'   6     +0     34   6 bytes
    'つ'   6     +0     35   6 bytes
    'づ'   6     +0     36   6 bytes
    'て'   6     +0     37   6 bytes
    'で'   6     +0     38   6 bytes
    'と'   6     +0     39   6 bytes
    'ど'   6     +0     40   6 bytes
    'な'   6     +0     41   6 bytes
    'に'   6     +0     42   6 bytes
    'ぬ'   6     +0     43   6 bytes
    'ね'   6     +0     44   6 bytes
    'の'   6     +0     45   6 bytes
    'は'   6     +0     46   6 bytes
    'ば'   6     +0     47   6 bytes
    'ぱ'   6     +0     48   6 bytes
    'ひ'   6     +0     49   6 bytes
    'び'   6     +0     50   6 bytes
    'ぴ'   6     +0     51   6 bytes
    'ふ'   6     +0     52   6 bytes
    'ぶ'   6     +0     53   6 bytes
    'ぷ'   6     +0     54   6 bytes
    'へ'   6     +0     55   6 bytes
    'べ'   6     +0     56   6 bytes
    'ぺ'   6     +0     57   6 bytes
    'ほ'   6     +0     58   6 bytes
    'ぼ'   6     +0     59   6 bytes
    'ぽ'   6     +0     60   6 bytes
    'ま'   6     +0     61   6 bytes
    'み'   6     +0     62   6 bytes
    'む'   6     +0     63   6 bytes
    'め'   6     +0     64   6 bytes
    'も'   6     +0     65   6 bytes
    'ゃ'   6     +0     66   6 bytes
    'や'   6     +0     67   6 bytes
    'ゅ'   6     +0     68   6 bytes
    'ゆ'   6     +0     69   6 bytes
    'ょ'   6     +0     70   6 bytes
    'よ'   6     +0     71   6 bytes
    'ら'   6     +0     72   6 bytes
    'り'   6     +0     73   6 bytes
    'る'   6     +0     74   6 bytes
    'れ'   6     +0     75   6 bytes
    'ろ'   6     +0     76   6 bytes
    'ゎ'   6     +0     77   6 bytes
    'わ'   6     +0     78   6 bytes
    'ゐ'   6     +0     79   6 bytes
    'ゑ'   6     +0     80   6 bytes
    'を'   6     +0     81   6 bytes
    'ん'   6     +0     82   6 bytes
    'ゔ'   6     +0     83   6 bytes
    'ゕ'   6     +0     84   6 bytes
    'ゖ'   6     +0     85   6 bytes
    '゗'   6     +0     86   6 bytes
    '゘'   6     +0     87   6 bytes
    '゙'   6     +0     88   6 bytes
    '゚'   6     +0     89   6 bytes
    '゛'   6     +0     90   6 bytes
    '゜'   6     +0     91   6 bytes
    'ゝ'   6     +0     92   6 bytes
    'ゞ'   6     +0     93   6 bytes
    'ゟ'   6     +0     94   6 bytes
    '゠'   6     +0     95   6 bytes
    'ァ'   6     +0     96   6 bytes
    'ア'   6     +0     97   6 bytes
    'ィ'   6     +0     98   6 bytes
    'イ'   6     +0     99   6 bytes
    'ゥ'   6     +0    100   6 bytes
    'ウ'   6     +0    101   6 bytes
    'ェ'   6     +0    102   6 bytes
    'エ'   6     +0    103   6 bytes
    'ォ'   6     +0    104   6 bytes
    'オ'   6     +0    105   6 bytes
    'カ'   6     +0    106   6 bytes
    'ガ'   6     +0    107   6 bytes
    'キ'   6     +0    108   6 bytes
    'ギ'   6     +0    109   6 bytes
    'ク'   6     +0    110   6 bytes
    'グ'   6     +0    111   6 bytes
    'ケ'   6     +0    112   6 bytes
    'ゲ'   6     +0    113   6 bytes
    'コ'   6     +0    114   6 bytes
    'ゴ'   6     +0    115   6 bytes
    'サ'   6     +0    116   6 bytes
    'ザ'   6     +0    117   6 bytes
    'シ'   6     +0    118   6 bytes
    'ジ'   6     +0    119   6 bytes
    'ス'   6     +0    120   6 bytes
    'ズ'   6     +0    121   6 bytes
    'セ'   6     +0    122   6 bytes
    'ゼ'   6     +0    123   6 bytes
    'ソ'   6     +0    124   6 bytes
    'ゾ'   6     +0    125   6 bytes
    'タ'   6     +0    126   6 bytes
    'ダ'   6     +0    127   6 bytes
    'チ'   6     +0    128   6 bytes
    'ヂ'   6     +0    129   6 bytes
    'ッ'   6     +0    130   6 bytes
    'ツ'   6     +0    131   6 bytes
    'ヅ'   6     +0    132   6 bytes
    'テ'   6     +0    133   6 bytes
    'デ'   6     +0    134   6 bytes
    'ト'   6     +0    135   6 bytes
    'ド'   6     +0    136   6 bytes
    'ナ'   6     +0    137   6 bytes
    'ニ'   6     +0    138   6 bytes
    'ヌ'   6     +0    139   6 bytes
    'ネ'   6     +0    140   6 bytes
    'ノ'   6     +0    141   6 bytes
    'ハ'   6     +0    142   6 bytes
    'バ'   6     +0    143   6 bytes
    'パ'   6     +0    144   6 bytes
    'ヒ'   6     +0    145   6 bytes
    'ビ'   6     +0    146   6 bytes
    'ピ'   6     +0    147   6 bytes
    'フ'   6     +0    148   6 bytes
    'ブ'   6     +0    149   6 bytes
    'プ'   6     +0    150   6 bytes
    'ヘ'   6     +0    151   6 bytes
    'ベ'   6     +0    152   6 bytes
    'ペ'   6     +0    153   6 bytes
    'ホ'   6     +0    154   6 bytes
    'ボ'   6     +0    155   6 bytes
    'ポ'   6     +0    156   6 bytes
    'マ'   6     +0    157   6 bytes
    'ミ'   6     +0    158   6 bytes
    'ム'   6     +0    159   6 bytes
    'メ'   6     +0    160   6 bytes
    'モ'   6     +0    161   6 bytes
    'ャ'   6     +0    162   6 bytes
    'ヤ'   6     +0    163   6 bytes
    'ュ'   6     +0    164   6 bytes
    'ユ'   6     +0    165   6 bytes
    'ョ'   6     +0    166   6 bytes
    'ヨ'   6     +0    167   6 bytes
    'ラ'   6     +0    168   6 bytes
    'リ'   6     +0    169   6 bytes
    'ル'   6     +0    170   6 bytes
    'レ'   6     +0    171   6 bytes
    'ロ'   6     +0    172   6 bytes
    'ヮ'   6     +0    173   6 bytes
    'ワ'   6     +0    174   6 bytes
    'ヰ'   6     +0    175   6 bytes
    'ヱ'   6     +0    176   6 bytes
    'ヲ'   6     +0    177   6 bytes
    'ン'   6     +0    178   6 bytes
    'ヴ'   6     +0    179   6 bytes
    'ヵ'   6     +0    180   6 bytes
    'ヶ'   6     +0    181   6 bytes
    'ヷ'   6     +0    182   6 bytes
    'ヸ'   6     +0    183   6 bytes
    'ヹ'   6     +0    184   6 bytes
    'ヺ'   6     +0    185   6 bytes
    '・'   6     +0    186   6 bytes
    'ー'   6     +0    187   6 bytes
    'ヽ'   6     +0    188   6 bytes
    'ヾ'   6     +0    189   6 bytes
Font Size Status: Index section 0 bytes, Pure Data 1140 bytes, Data section 1140 bytes, Total 1140 bytes.
Using image: '64_kana_U+3041~U+30FF.png' size (1140, 9), unicode from 12353 to 12542/12543, grayscale threshold: 127, converted by ImageBinarization.
With options: MSB_AT_TOP, NEGATIVE_LOGIC, WIDTH_DETECT_AT_TOP, WIDTH_DETECT_MODE_SAME_COLOR, MONOSPACE
*/
#endif
