#include <stdio.h>
#include <stdlib.h>

int odd(int U);
int even(int U);
int total(int U);

int main(void)
{
	int n, sum;
	char a;
	printf("1+2+....+n:?�п�Jn=?");
	scanf_s("%d", &n);
	printf("�аݻݭn����ƩM(o),���ƩM(e),�٬O��ƩM(i)�п��:");
	scanf_s(" %c", &a);

	switch (a)
	{
	case 'o':
		sum = odd(n);
		break;
	case 'e':
		sum = even(n);
		break;
	case 'i':
		sum = total(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n",sum);
	system("pause");
	return 0;
}

int odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}

int even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}

int total(int U)
{
	return odd(U) + even(U);
}

