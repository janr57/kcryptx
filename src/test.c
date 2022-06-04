#include <stdio.h>
#include "kcryptx.h"

int main(int argc, char** argv)
{
	char* string = "01234567890123467";

	string = caesar("Hola", 3);
	printf("Ciphertext: %s\n", string);

	return 0;
}

