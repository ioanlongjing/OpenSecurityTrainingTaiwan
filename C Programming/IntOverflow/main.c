#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
signed char var_signed_char_min;
signed char var_signed_char_max;
signed char var_signed_char_test;
var_signed_char_max = var_signed_char_min = -128;
var_signed_char_test = 127;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O1byte ��� \n");}
var_signed_char_max = var_signed_char_min = 255;
var_signed_char_test = 0;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O1byte ����� \n");}
var_signed_char_max = var_signed_char_min = -32768;
var_signed_char_test = 32767;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O2bytes ��� \n");}
var_signed_char_max = var_signed_char_min = 65535;
var_signed_char_test = 0;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O2bytes ����� \n");}
var_signed_char_max = var_signed_char_min = -2147483648;
var_signed_char_test = 2147483647;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O4bytes ��� \n");}
var_signed_char_max = var_signed_char_min = 4294967295;
var_signed_char_test = 0;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O4bytes ����� \n");}
var_signed_char_max = var_signed_char_min = -9223372036854775808;
var_signed_char_test = 9223372036854775807;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O8bytes ��� \n");}
var_signed_char_max = var_signed_char_min = 18446744073709551615;
var_signed_char_test = 0;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O8bytes ����� \n");}
var_signed_char_max = var_signed_char_min = -170141183460469231731687303715884105728;
var_signed_char_test = 170141183460469231731687303715884105727;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O16bytes ��� \n");}
var_signed_char_max = var_signed_char_min = 340282366920938463463374607431768211455;
var_signed_char_test = 0;
var_signed_char_min++;
if(var_signed_char_min == var_signed_char_test){ printf("signed char �O16bytes ����� \n");}
unsigned char var_unsigned_char_min;
unsigned char var_unsigned_char_max;
unsigned char var_unsigned_char_test;
var_unsigned_char_max = var_unsigned_char_min = -128;
var_unsigned_char_test = 127;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O1byte ��� \n");}
var_unsigned_char_max = var_unsigned_char_min = 255;
var_unsigned_char_test = 0;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O1byte ����� \n");}
var_unsigned_char_max = var_unsigned_char_min = -32768;
var_unsigned_char_test = 32767;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O2bytes ��� \n");}
var_unsigned_char_max = var_unsigned_char_min = 65535;
var_unsigned_char_test = 0;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O2bytes ����� \n");}
var_unsigned_char_max = var_unsigned_char_min = -2147483648;
var_unsigned_char_test = 2147483647;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O4bytes ��� \n");}
var_unsigned_char_max = var_unsigned_char_min = 4294967295;
var_unsigned_char_test = 0;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O4bytes ����� \n");}
var_unsigned_char_max = var_unsigned_char_min = -9223372036854775808;
var_unsigned_char_test = 9223372036854775807;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O8bytes ��� \n");}
var_unsigned_char_max = var_unsigned_char_min = 18446744073709551615;
var_unsigned_char_test = 0;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O8bytes ����� \n");}
var_unsigned_char_max = var_unsigned_char_min = -170141183460469231731687303715884105728;
var_unsigned_char_test = 170141183460469231731687303715884105727;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O16bytes ��� \n");}
var_unsigned_char_max = var_unsigned_char_min = 340282366920938463463374607431768211455;
var_unsigned_char_test = 0;
var_unsigned_char_min++;
if(var_unsigned_char_min == var_unsigned_char_test){ printf("unsigned char �O16bytes ����� \n");}
char var_char_min;
char var_char_max;
char var_char_test;
var_char_max = var_char_min = -128;
var_char_test = 127;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O1byte ��� \n");}
var_char_max = var_char_min = 255;
var_char_test = 0;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O1byte ����� \n");}
var_char_max = var_char_min = -32768;
var_char_test = 32767;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O2bytes ��� \n");}
var_char_max = var_char_min = 65535;
var_char_test = 0;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O2bytes ����� \n");}
var_char_max = var_char_min = -2147483648;
var_char_test = 2147483647;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O4bytes ��� \n");}
var_char_max = var_char_min = 4294967295;
var_char_test = 0;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O4bytes ����� \n");}
var_char_max = var_char_min = -9223372036854775808;
var_char_test = 9223372036854775807;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O8bytes ��� \n");}
var_char_max = var_char_min = 18446744073709551615;
var_char_test = 0;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O8bytes ����� \n");}
var_char_max = var_char_min = -170141183460469231731687303715884105728;
var_char_test = 170141183460469231731687303715884105727;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O16bytes ��� \n");}
var_char_max = var_char_min = 340282366920938463463374607431768211455;
var_char_test = 0;
var_char_min++;
if(var_char_min == var_char_test){ printf("char �O16bytes ����� \n");}
short var_short_min;
short var_short_max;
short var_short_test;
var_short_max = var_short_min = -128;
var_short_test = 127;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O1byte ��� \n");}
var_short_max = var_short_min = 255;
var_short_test = 0;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O1byte ����� \n");}
var_short_max = var_short_min = -32768;
var_short_test = 32767;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O2bytes ��� \n");}
var_short_max = var_short_min = 65535;
var_short_test = 0;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O2bytes ����� \n");}
var_short_max = var_short_min = -2147483648;
var_short_test = 2147483647;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O4bytes ��� \n");}
var_short_max = var_short_min = 4294967295;
var_short_test = 0;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O4bytes ����� \n");}
var_short_max = var_short_min = -9223372036854775808;
var_short_test = 9223372036854775807;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O8bytes ��� \n");}
var_short_max = var_short_min = 18446744073709551615;
var_short_test = 0;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O8bytes ����� \n");}
var_short_max = var_short_min = -170141183460469231731687303715884105728;
var_short_test = 170141183460469231731687303715884105727;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O16bytes ��� \n");}
var_short_max = var_short_min = 340282366920938463463374607431768211455;
var_short_test = 0;
var_short_min++;
if(var_short_min == var_short_test){ printf("short �O16bytes ����� \n");}
signed short var_signed_short_min;
signed short var_signed_short_max;
signed short var_signed_short_test;
var_signed_short_max = var_signed_short_min = -128;
var_signed_short_test = 127;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O1byte ��� \n");}
var_signed_short_max = var_signed_short_min = 255;
var_signed_short_test = 0;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O1byte ����� \n");}
var_signed_short_max = var_signed_short_min = -32768;
var_signed_short_test = 32767;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O2bytes ��� \n");}
var_signed_short_max = var_signed_short_min = 65535;
var_signed_short_test = 0;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O2bytes ����� \n");}
var_signed_short_max = var_signed_short_min = -2147483648;
var_signed_short_test = 2147483647;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O4bytes ��� \n");}
var_signed_short_max = var_signed_short_min = 4294967295;
var_signed_short_test = 0;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O4bytes ����� \n");}
var_signed_short_max = var_signed_short_min = -9223372036854775808;
var_signed_short_test = 9223372036854775807;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O8bytes ��� \n");}
var_signed_short_max = var_signed_short_min = 18446744073709551615;
var_signed_short_test = 0;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O8bytes ����� \n");}
var_signed_short_max = var_signed_short_min = -170141183460469231731687303715884105728;
var_signed_short_test = 170141183460469231731687303715884105727;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O16bytes ��� \n");}
var_signed_short_max = var_signed_short_min = 340282366920938463463374607431768211455;
var_signed_short_test = 0;
var_signed_short_min++;
if(var_signed_short_min == var_signed_short_test){ printf("signed short �O16bytes ����� \n");}
unsigned short var_unsigned_short_min;
unsigned short var_unsigned_short_max;
unsigned short var_unsigned_short_test;
var_unsigned_short_max = var_unsigned_short_min = -128;
var_unsigned_short_test = 127;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O1byte ��� \n");}
var_unsigned_short_max = var_unsigned_short_min = 255;
var_unsigned_short_test = 0;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O1byte ����� \n");}
var_unsigned_short_max = var_unsigned_short_min = -32768;
var_unsigned_short_test = 32767;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O2bytes ��� \n");}
var_unsigned_short_max = var_unsigned_short_min = 65535;
var_unsigned_short_test = 0;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O2bytes ����� \n");}
var_unsigned_short_max = var_unsigned_short_min = -2147483648;
var_unsigned_short_test = 2147483647;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O4bytes ��� \n");}
var_unsigned_short_max = var_unsigned_short_min = 4294967295;
var_unsigned_short_test = 0;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O4bytes ����� \n");}
var_unsigned_short_max = var_unsigned_short_min = -9223372036854775808;
var_unsigned_short_test = 9223372036854775807;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O8bytes ��� \n");}
var_unsigned_short_max = var_unsigned_short_min = 18446744073709551615;
var_unsigned_short_test = 0;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O8bytes ����� \n");}
var_unsigned_short_max = var_unsigned_short_min = -170141183460469231731687303715884105728;
var_unsigned_short_test = 170141183460469231731687303715884105727;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O16bytes ��� \n");}
var_unsigned_short_max = var_unsigned_short_min = 340282366920938463463374607431768211455;
var_unsigned_short_test = 0;
var_unsigned_short_min++;
if(var_unsigned_short_min == var_unsigned_short_test){ printf("unsigned short �O16bytes ����� \n");}
int var_int_min;
int var_int_max;
int var_int_test;
var_int_max = var_int_min = -128;
var_int_test = 127;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O1byte ��� \n");}
var_int_max = var_int_min = 255;
var_int_test = 0;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O1byte ����� \n");}
var_int_max = var_int_min = -32768;
var_int_test = 32767;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O2bytes ��� \n");}
var_int_max = var_int_min = 65535;
var_int_test = 0;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O2bytes ����� \n");}
var_int_max = var_int_min = -2147483648;
var_int_test = 2147483647;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O4bytes ��� \n");}
var_int_max = var_int_min = 4294967295;
var_int_test = 0;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O4bytes ����� \n");}
var_int_max = var_int_min = -9223372036854775808;
var_int_test = 9223372036854775807;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O8bytes ��� \n");}
var_int_max = var_int_min = 18446744073709551615;
var_int_test = 0;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O8bytes ����� \n");}
var_int_max = var_int_min = -170141183460469231731687303715884105728;
var_int_test = 170141183460469231731687303715884105727;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O16bytes ��� \n");}
var_int_max = var_int_min = 340282366920938463463374607431768211455;
var_int_test = 0;
var_int_min++;
if(var_int_min == var_int_test){ printf("int �O16bytes ����� \n");}
long var_long_min;
long var_long_max;
long var_long_test;
var_long_max = var_long_min = -128;
var_long_test = 127;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O1byte ��� \n");}
var_long_max = var_long_min = 255;
var_long_test = 0;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O1byte ����� \n");}
var_long_max = var_long_min = -32768;
var_long_test = 32767;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O2bytes ��� \n");}
var_long_max = var_long_min = 65535;
var_long_test = 0;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O2bytes ����� \n");}
var_long_max = var_long_min = -2147483648;
var_long_test = 2147483647;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O4bytes ��� \n");}
var_long_max = var_long_min = 4294967295;
var_long_test = 0;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O4bytes ����� \n");}
var_long_max = var_long_min = -9223372036854775808;
var_long_test = 9223372036854775807;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O8bytes ��� \n");}
var_long_max = var_long_min = 18446744073709551615;
var_long_test = 0;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O8bytes ����� \n");}
var_long_max = var_long_min = -170141183460469231731687303715884105728;
var_long_test = 170141183460469231731687303715884105727;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O16bytes ��� \n");}
var_long_max = var_long_min = 340282366920938463463374607431768211455;
var_long_test = 0;
var_long_min++;
if(var_long_min == var_long_test){ printf("long �O16bytes ����� \n");}
signed long var_signed_long_min;
signed long var_signed_long_max;
signed long var_signed_long_test;
var_signed_long_max = var_signed_long_min = -128;
var_signed_long_test = 127;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O1byte ��� \n");}
var_signed_long_max = var_signed_long_min = 255;
var_signed_long_test = 0;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O1byte ����� \n");}
var_signed_long_max = var_signed_long_min = -32768;
var_signed_long_test = 32767;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O2bytes ��� \n");}
var_signed_long_max = var_signed_long_min = 65535;
var_signed_long_test = 0;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O2bytes ����� \n");}
var_signed_long_max = var_signed_long_min = -2147483648;
var_signed_long_test = 2147483647;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O4bytes ��� \n");}
var_signed_long_max = var_signed_long_min = 4294967295;
var_signed_long_test = 0;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O4bytes ����� \n");}
var_signed_long_max = var_signed_long_min = -9223372036854775808;
var_signed_long_test = 9223372036854775807;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O8bytes ��� \n");}
var_signed_long_max = var_signed_long_min = 18446744073709551615;
var_signed_long_test = 0;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O8bytes ����� \n");}
var_signed_long_max = var_signed_long_min = -170141183460469231731687303715884105728;
var_signed_long_test = 170141183460469231731687303715884105727;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O16bytes ��� \n");}
var_signed_long_max = var_signed_long_min = 340282366920938463463374607431768211455;
var_signed_long_test = 0;
var_signed_long_min++;
if(var_signed_long_min == var_signed_long_test){ printf("signed long �O16bytes ����� \n");}
unsigned var_unsigned_min;
unsigned var_unsigned_max;
unsigned var_unsigned_test;
var_unsigned_max = var_unsigned_min = -128;
var_unsigned_test = 127;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O1byte ��� \n");}
var_unsigned_max = var_unsigned_min = 255;
var_unsigned_test = 0;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O1byte ����� \n");}
var_unsigned_max = var_unsigned_min = -32768;
var_unsigned_test = 32767;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O2bytes ��� \n");}
var_unsigned_max = var_unsigned_min = 65535;
var_unsigned_test = 0;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O2bytes ����� \n");}
var_unsigned_max = var_unsigned_min = -2147483648;
var_unsigned_test = 2147483647;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O4bytes ��� \n");}
var_unsigned_max = var_unsigned_min = 4294967295;
var_unsigned_test = 0;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O4bytes ����� \n");}
var_unsigned_max = var_unsigned_min = -9223372036854775808;
var_unsigned_test = 9223372036854775807;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O8bytes ��� \n");}
var_unsigned_max = var_unsigned_min = 18446744073709551615;
var_unsigned_test = 0;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O8bytes ����� \n");}
var_unsigned_max = var_unsigned_min = -170141183460469231731687303715884105728;
var_unsigned_test = 170141183460469231731687303715884105727;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O16bytes ��� \n");}
var_unsigned_max = var_unsigned_min = 340282366920938463463374607431768211455;
var_unsigned_test = 0;
var_unsigned_min++;
if(var_unsigned_min == var_unsigned_test){ printf("unsigned �O16bytes ����� \n");}
unsigned int var_unsigned_int_min;
unsigned int var_unsigned_int_max;
unsigned int var_unsigned_int_test;
var_unsigned_int_max = var_unsigned_int_min = -128;
var_unsigned_int_test = 127;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O1byte ��� \n");}
var_unsigned_int_max = var_unsigned_int_min = 255;
var_unsigned_int_test = 0;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O1byte ����� \n");}
var_unsigned_int_max = var_unsigned_int_min = -32768;
var_unsigned_int_test = 32767;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O2bytes ��� \n");}
var_unsigned_int_max = var_unsigned_int_min = 65535;
var_unsigned_int_test = 0;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O2bytes ����� \n");}
var_unsigned_int_max = var_unsigned_int_min = -2147483648;
var_unsigned_int_test = 2147483647;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O4bytes ��� \n");}
var_unsigned_int_max = var_unsigned_int_min = 4294967295;
var_unsigned_int_test = 0;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O4bytes ����� \n");}
var_unsigned_int_max = var_unsigned_int_min = -9223372036854775808;
var_unsigned_int_test = 9223372036854775807;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O8bytes ��� \n");}
var_unsigned_int_max = var_unsigned_int_min = 18446744073709551615;
var_unsigned_int_test = 0;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O8bytes ����� \n");}
var_unsigned_int_max = var_unsigned_int_min = -170141183460469231731687303715884105728;
var_unsigned_int_test = 170141183460469231731687303715884105727;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O16bytes ��� \n");}
var_unsigned_int_max = var_unsigned_int_min = 340282366920938463463374607431768211455;
var_unsigned_int_test = 0;
var_unsigned_int_min++;
if(var_unsigned_int_min == var_unsigned_int_test){ printf("unsigned int �O16bytes ����� \n");}
unsigned long var_unsigned_long_min;
unsigned long var_unsigned_long_max;
unsigned long var_unsigned_long_test;
var_unsigned_long_max = var_unsigned_long_min = -128;
var_unsigned_long_test = 127;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O1byte ��� \n");}
var_unsigned_long_max = var_unsigned_long_min = 255;
var_unsigned_long_test = 0;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O1byte ����� \n");}
var_unsigned_long_max = var_unsigned_long_min = -32768;
var_unsigned_long_test = 32767;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O2bytes ��� \n");}
var_unsigned_long_max = var_unsigned_long_min = 65535;
var_unsigned_long_test = 0;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O2bytes ����� \n");}
var_unsigned_long_max = var_unsigned_long_min = -2147483648;
var_unsigned_long_test = 2147483647;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O4bytes ��� \n");}
var_unsigned_long_max = var_unsigned_long_min = 4294967295;
var_unsigned_long_test = 0;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O4bytes ����� \n");}
var_unsigned_long_max = var_unsigned_long_min = -9223372036854775808;
var_unsigned_long_test = 9223372036854775807;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O8bytes ��� \n");}
var_unsigned_long_max = var_unsigned_long_min = 18446744073709551615;
var_unsigned_long_test = 0;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O8bytes ����� \n");}
var_unsigned_long_max = var_unsigned_long_min = -170141183460469231731687303715884105728;
var_unsigned_long_test = 170141183460469231731687303715884105727;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O16bytes ��� \n");}
var_unsigned_long_max = var_unsigned_long_min = 340282366920938463463374607431768211455;
var_unsigned_long_test = 0;
var_unsigned_long_min++;
if(var_unsigned_long_min == var_unsigned_long_test){ printf("unsigned long �O16bytes ����� \n");}
long long var_long_long_min;
long long var_long_long_max;
long long var_long_long_test;
var_long_long_max = var_long_long_min = -128;
var_long_long_test = 127;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O1byte ��� \n");}
var_long_long_max = var_long_long_min = 255;
var_long_long_test = 0;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O1byte ����� \n");}
var_long_long_max = var_long_long_min = -32768;
var_long_long_test = 32767;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O2bytes ��� \n");}
var_long_long_max = var_long_long_min = 65535;
var_long_long_test = 0;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O2bytes ����� \n");}
var_long_long_max = var_long_long_min = -2147483648;
var_long_long_test = 2147483647;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O4bytes ��� \n");}
var_long_long_max = var_long_long_min = 4294967295;
var_long_long_test = 0;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O4bytes ����� \n");}
var_long_long_max = var_long_long_min = -9223372036854775808;
var_long_long_test = 9223372036854775807;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O8bytes ��� \n");}
var_long_long_max = var_long_long_min = 18446744073709551615;
var_long_long_test = 0;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O8bytes ����� \n");}
var_long_long_max = var_long_long_min = -170141183460469231731687303715884105728;
var_long_long_test = 170141183460469231731687303715884105727;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O16bytes ��� \n");}
var_long_long_max = var_long_long_min = 340282366920938463463374607431768211455;
var_long_long_test = 0;
var_long_long_min++;
if(var_long_long_min == var_long_long_test){ printf("long long �O16bytes ����� \n");}
signed long long var_signed_long_long_min;
signed long long var_signed_long_long_max;
signed long long var_signed_long_long_test;
var_signed_long_long_max = var_signed_long_long_min = -128;
var_signed_long_long_test = 127;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O1byte ��� \n");}
var_signed_long_long_max = var_signed_long_long_min = 255;
var_signed_long_long_test = 0;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O1byte ����� \n");}
var_signed_long_long_max = var_signed_long_long_min = -32768;
var_signed_long_long_test = 32767;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O2bytes ��� \n");}
var_signed_long_long_max = var_signed_long_long_min = 65535;
var_signed_long_long_test = 0;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O2bytes ����� \n");}
var_signed_long_long_max = var_signed_long_long_min = -2147483648;
var_signed_long_long_test = 2147483647;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O4bytes ��� \n");}
var_signed_long_long_max = var_signed_long_long_min = 4294967295;
var_signed_long_long_test = 0;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O4bytes ����� \n");}
var_signed_long_long_max = var_signed_long_long_min = -9223372036854775808;
var_signed_long_long_test = 9223372036854775807;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O8bytes ��� \n");}
var_signed_long_long_max = var_signed_long_long_min = 18446744073709551615;
var_signed_long_long_test = 0;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O8bytes ����� \n");}
var_signed_long_long_max = var_signed_long_long_min = -170141183460469231731687303715884105728;
var_signed_long_long_test = 170141183460469231731687303715884105727;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O16bytes ��� \n");}
var_signed_long_long_max = var_signed_long_long_min = 340282366920938463463374607431768211455;
var_signed_long_long_test = 0;
var_signed_long_long_min++;
if(var_signed_long_long_min == var_signed_long_long_test){ printf("signed long long �O16bytes ����� \n");}
unsigned long long var_unsigned_long_long_min;
unsigned long long var_unsigned_long_long_max;
unsigned long long var_unsigned_long_long_test;
var_unsigned_long_long_max = var_unsigned_long_long_min = -128;
var_unsigned_long_long_test = 127;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O1byte ��� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = 255;
var_unsigned_long_long_test = 0;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O1byte ����� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = -32768;
var_unsigned_long_long_test = 32767;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O2bytes ��� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = 65535;
var_unsigned_long_long_test = 0;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O2bytes ����� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = -2147483648;
var_unsigned_long_long_test = 2147483647;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O4bytes ��� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = 4294967295;
var_unsigned_long_long_test = 0;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O4bytes ����� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = -9223372036854775808;
var_unsigned_long_long_test = 9223372036854775807;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O8bytes ��� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = 18446744073709551615;
var_unsigned_long_long_test = 0;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O8bytes ����� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = -170141183460469231731687303715884105728;
var_unsigned_long_long_test = 170141183460469231731687303715884105727;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O16bytes ��� \n");}
var_unsigned_long_long_max = var_unsigned_long_long_min = 340282366920938463463374607431768211455;
var_unsigned_long_long_test = 0;
var_unsigned_long_long_min++;
if(var_unsigned_long_long_min == var_unsigned_long_long_test){ printf("unsigned long long �O16bytes ����� \n");}


	return 0;
}
