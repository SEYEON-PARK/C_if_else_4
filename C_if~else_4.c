#include <stdio.h>

int main(void)
{
	float a;
	printf("������ �Է��Ͻÿ�. : ");
	scanf_s("%f", &a);

	if (a >= 80)
		printf("�հ��Դϴ�.\n");
	else
		printf("���հ��Դϴ�.\n");

	return 0;
}