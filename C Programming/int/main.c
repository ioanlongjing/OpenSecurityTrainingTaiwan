// ���� int �ŧi/�x�s/��X/�ק�P������ 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 0. �ŧi
	int v1;
	int v2 = 0; 
	int v3 = 1;
	int v4 = 2+3;
	
	// 1. ��X
	printf("1. ��X:\n");
	printf("v1 = %d\n", v1);
	printf("v2 = %d\n", v2);
	printf("v3 = %d\n", v3);
	printf("v4 = %d\n", v4);
	
	printf("\n");
	
	// 2. �x�s
	printf("2. �x�s:\n");
	v1 = 3;
	printf("v1 = %d\n", v1);
	printf("v2 = %d\n", v2);
	printf("v3 = %d\n", v3);
	printf("v4 = %d\n", v4);
	
	printf("\n");
	
	// 3. �ק� 
	printf("3. �ק�\n");
	v1 = v2 = v3 = v4 = 6;
	printf("v1 = %d\n", v1);
	printf("v2 = %d\n", v2);
	printf("v3 = %d\n", v3);
	printf("v4 = %d\n", v4);
	
	printf("\n");
	
	// 4. �򥻹B�� 
	printf("4. ������\n");
	v1 = v1 + v2;
	v2 = v1 - v3;
	v3 = v1 * v4;
	v4 = v3 / v2;
	v1 = v2 % v4;
	printf("v1 = %d\n", v1);
	printf("v2 = %d\n", v2);
	printf("v3 = %d\n", v3);
	printf("v4 = %d\n", v4);
	
	return 0;
}

