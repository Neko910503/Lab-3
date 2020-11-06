#include <stdio.h>
#include <stdlib.h>

long int f(int a);

int main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = f(m);
	b = f(n);
	c = f(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int f(int p)
{
	if (p > 1)
	{
		long int r = p * f(p - 1);
		return r;
	}
	else
	{
		return 1;
	}
}

