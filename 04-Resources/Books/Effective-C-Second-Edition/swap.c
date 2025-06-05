// swaps two integers

#include <stdio.h>
#include <stdlib.h>

//void swap(int, int) { // declared in 2-1, defined in 2-2
//	int t = a;
//	a = b;
//	b = t;
//	printf("swap: a = %d, b = %d\n", a, b);
//}

// second attempt
void swap(int *pa, int *pb) {	// pa -> a: 21	pb -> b: 17
	int t = *pa;		// t: 21
	*pa = *pb;		// pa -> a: 17	pb -> b: 17
	*pb = t;		// pa -> a: 17	pb -> b: 21
}

int main() {
	int a = 21;		// a: 21
	int b = 17;		// b: 17
	swap(a, b);
	printf("main: a = %d, b = %d\n", a, b); // a: 17	b: 21
	return EXIT_SUCCESS
}
