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
	printf("请输入一个第n个数，第n个数的菲波那切数为：\n");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}