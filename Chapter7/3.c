#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	printf("��� : ");

	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			printf("%d ", i);
	printf("\n");
	return 0;
}