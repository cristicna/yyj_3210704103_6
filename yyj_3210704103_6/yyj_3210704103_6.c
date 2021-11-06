#include "stdio.h"
void  main()
{
	float i, w;
	scanf_s("%f", &i);
		if (i <= 10)
		printf("w=%f\n", w = i / 10);
	else if (i <= 20)
		printf("w=%f\n", w = 1 + (i - 10) * 0.075);
	else if (i <= 40)
		printf("w=%f\n", w = 1 + 10 * 0.075 + (i - 20) * 0.05);
	else if (i <= 60)
		printf("w=%f\n", w = 1 + 10 * 0.075 + 20 * 0.03 + 20 * 0.05 + (i - 40) * 0.03);
	else if (i <= 100)
		printf("w=%f\n", w = 1 + 10 * 0.075 + 20 * 0.03 + 20 * 0, 05 + 20 * 0.03 + (i - 60) * 0.015);
	else
		printf("w=%f\n", w = 1 + 10 * 0.075+ 20 * 0.03 + 20 * 0, 05 + 20 * 0.03 + 40 * 0.015+(i-100)*0.01);

}