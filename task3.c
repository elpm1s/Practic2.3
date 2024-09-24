#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");
	float n = 3, L = 33;
	printf("Дано:\n");
	printf("     %6.0f \n", n);
	printf("     %6.0f \n", L);
	printf("     _______\n");
	printf("Ответ:\n");
	printf("       %2.2f\n", n / L);



	system("pause");


}
