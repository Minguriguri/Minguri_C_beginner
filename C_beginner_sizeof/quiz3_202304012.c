#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {

	int number;
	
	printf("학번/이름\n");
	printf("****************************\n");
	printf("short 크기: %d\n", sizeof(short));
	printf("int 크기: %d\n", sizeof(int));
	printf("long 크기: %d\n", sizeof(long));
	printf("long long 크기: %d\n", sizeof(long long));
	printf("****************************\n");

	printf("8진수 입력:");
	scanf("%d", &number);
}