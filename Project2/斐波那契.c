#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int fib(int n){
	int a1 = 1;
	int a2 = 1;
	int a3 = 0;
	if (n <= 2)
		return 1;
	else{
		while (n > 2){
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
			n--;
		}
	}
	return a3;
}

int main()
{
	int n = 0;
	printf("������һ����n��������n������쳲�������Ϊ��\n");
	scanf("%d", &n);
	printf("%d", fib(n));
	system("pause");
	return 0;
}