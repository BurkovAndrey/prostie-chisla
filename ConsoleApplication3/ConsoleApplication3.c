#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
int main() {
	int number;
	printf("Vvedite chislo:\n");
	scanf_s("%d", &number);

	if (number < 2) {
		printf("Nekorretni vvod!");
	}
	else {
		printf("Vse prostie chisla do vvedennogo:\n");
		for (int knumber = 2; knumber <= number; knumber++) {
			int primal = 1;

			for (int delitel = 2; delitel*delitel <= knumber; delitel++) {
				if (knumber%delitel == 0) {
					primal = 0; break;
				}
			}
			if (primal == 1) {
				printf("%d\t", knumber);
			}
		}
	}
	_getch();
	return 0;
}