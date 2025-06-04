#include <stdio.h>
#include <stdlib.h>

int main() {
	if(puts("Hello, world!") == EOF) {
		return EXIT_FAILURE;
		// code never executes
	}

	return EXIT_SUCCESS;
	// code here never executes
}
