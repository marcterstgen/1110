#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int fib(int n){
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main(){
	int n = 0;
	printf("������һ����n��������n�����ķƲ�������Ϊ��\n");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}