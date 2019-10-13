#include <stdio.h>

int main() {
    int i = 65;
	for (int i = 32; i <= 126; ++i)
		printf("ASCII decimal code %d is %s\n", i, &i);

	return 0;
}