#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
int power(int n, int k)
{
	if (k <= 0)
		return 1;
	else
		return n*power(n, k - 1);
}
int main()
{
	int n = 3;
	int k = 2;
	scanf("%d%d", &n, &k);
	int ret = power(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}