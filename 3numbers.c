#include <stdio.h>

int main () {
	int num1, num2, num3;

	printf ("Enter first number : ");
	scanf( "%d", &num1);

	printf ("Enter second number : ");
	scanf ("%d", & num2);

	printf ("Enter third number : ");
	scanf ("%d", &num3);

	if (num1==num2) {
		if (num1 > num3){
		printf ( " biggest number:  %d. \n", num1);
	}else {
		printf (" biggest number : %d  \n", num3);
	}
	}else if (num1 == num3) {
	if (num1 > num2) {
		printf (" biggest number : %d. \n", num1);
	}else {
		printf ( " biggest number  %d . \n",num2);
	}
	} else if ( num2==num3) { 
		if (num2 >num1) {
			printf ("biggest number %d. \n", num2);
		}else{ 
			printf ("biggest number &d.\n ", num1);
		}
		}else {
			printf (" there is no equal numbers, we cannot find biggest number from two numbers.\n");
		}
	return 0;
}
