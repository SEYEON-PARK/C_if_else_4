#include <stdio.h>

int main(void)
{
	float a;
	printf("점수를 입력하시오. : ");
	scanf_s("%f", &a);

	if (a >= 80)
		printf("합격입니다.\n");
	else
		printf("불합격입니다.\n");

	return 0;
}