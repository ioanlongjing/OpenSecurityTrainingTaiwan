#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
	printf("CHAR_BIT   = %16llx %20lld\n",   CHAR_BIT,   CHAR_BIT); // ��X   CHAR_BIT �� 10 �i��P 16 �i��
	printf("SCHAR_MIN  = %16llx %20d\n"  ,  SCHAR_MIN,  SCHAR_MIN); // ��X  SCHAR_MIN �� 10 �i��P 16 �i��
	printf("SCHAR_MAX  = %16llx %20lld\n",  SCHAR_MAX,  SCHAR_MAX); // ��X  SCHAR_MAX �� 10 �i��P 16 �i��
	printf("UCHAR_MAX  = %16llx %20lld\n",  UCHAR_MAX,  UCHAR_MAX); // ��X  UCHAR_MAX �� 10 �i��P 16 �i��
	printf("CHAR_MIN   = %16llx %20d\n"  ,   CHAR_MIN,   CHAR_MIN); // ��X   CHAR_MIN �� 10 �i��P 16 �i��
	printf("CHAR_MAX   = %16llx %20lld\n",   CHAR_MAX,   CHAR_MAX); // ��X   CHAR_MAX �� 10 �i��P 16 �i��
	printf("MB_LEN_MAX = %16llx %20lld\n", MB_LEN_MAX, MB_LEN_MAX); // ��X MB_LEN_MAX �� 10 �i��P 16 �i��
	printf("SHRT_MIN   = %16llx %20hd\n" ,   SHRT_MIN,   SHRT_MIN); // ��X   SHRT_MIN �� 10 �i��P 16 �i��
	printf("SHRT_MAX   = %16llx %20lld\n",   SHRT_MAX,   SHRT_MAX); // ��X   SHRT_MAX �� 10 �i��P 16 �i��
	printf("USHRT_MAX  = %16llx %20lld\n",  USHRT_MAX,  USHRT_MAX); // ��X  USHRT_MAX �� 10 �i��P 16 �i��
	printf("INT_MIN    = %16llx %20d\n"  ,    INT_MIN,    INT_MIN); // ��X    INT_MIN �� 10 �i��P 16 �i��
	printf("INT_MAX    = %16llx %20lld\n",    INT_MAX,    INT_MAX); // ��X    INT_MAX �� 10 �i��P 16 �i��
	printf("UINT_MAX   = %16llx %20lld\n",   UINT_MAX,   UINT_MAX); // ��X   UINT_MAX �� 10 �i��P 16 �i��
	printf("LONG_MIN   = %16llx %20ld\n" ,   LONG_MIN,   LONG_MIN); // ��X   LONG_MIN �� 10 �i��P 16 �i��
	printf("LONG_MAX   = %16llx %20lld\n",   LONG_MAX,   LONG_MAX); // ��X   LONG_MAX �� 10 �i��P 16 �i��
	printf("ULONG_MAX  = %16llx %20lld\n",  ULONG_MAX,  ULONG_MAX); // ��X  ULONG_MAX �� 10 �i��P 16 �i��
	printf("LLONG_MIN  = %16llx %20lld\n",  LLONG_MIN,  LLONG_MIN); // ��X  LLONG_MIN �� 10 �i��P 16 �i��
	printf("LLONG_MAX  = %16llx %20lld\n",  LLONG_MAX,  LLONG_MAX); // ��X  LLONG_MAX �� 10 �i��P 16 �i��
	printf("ULLONG_MAX = %16llx %20llu\n", ULLONG_MAX, ULLONG_MAX); // ��X ULLONG_MAX �� 10 �i��P 16 �i��
	return 0;
}
