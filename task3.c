#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");
	int L = 33, n = 2, k = 2, m = 2;
	printf("%s%d%s%d%s%2.2f\n", "������� ����� ", n, " �� ����� ", L, " ��������� ����� ", n / L);



	system("pause");


}