#include <stdio.h>

int main(void)
{
	double n1, n2;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &n1, &n2);

	printf("%f %f %f %f\n", n1+n2, n1-n2, n1*n2, n1/n2);
	return 0;
}