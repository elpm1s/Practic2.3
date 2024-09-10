#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");
	int L = 33, n = 2, k = 2, m = 2;
	printf("%s%d%s%d%s%2.2f\n", "Деление числа ", n, " на число ", L, " равняется числу ", n / L);



	system("pause");


}