#include <stdio.h>

int main () {
	char letter;

	printf( " Enter a letter : ");
	scanf ( "%c",  &letter );

if 	(letter == 'a' || letter == 'e' || letter == 'i'|| letter == 'o' || letter == 'u'||
	letter =='A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ){

	printf (" The letter '%c' is vowel . \n", letter);
} else if ((letter >= 'a' && letter <= 'z') || ( letter >= 'A' && letter <= 'Z')) {
printf ( "The letter ' %c ' is a constant . \n", letter );
}else {
printf ( "The input is not valid letter .\n");
}
return 0;
}


