// the following function copies n bytes from storage referenced by q
// this goes to the storage referenced by p
// remember that storage really just means 'allocated objects'
// the function params p and q are both restrict-qualified pointers
//
// this youtube video helps explain 'restrict' very well: https://www.youtube.com/watch?v=ohXjzvcX6Ic
//
// in other words, if you declare a pointer with restrict and point it to something...
// you're telling the compiler that this is the only pointer I am using to modify this object, so it won't go through computationally expensive checks to ensure thisa
//
// fun fact: this is the only keyword in C not found in C++

void f(int n, int * restrict p, int * restrict q)
{
    while (n-- > 0)
        *p++ = *q++; // none of the objects modified through *p is the same
                     // as any of the objects read through *q
                     // compiler free to optimize, vectorize, page map, etc.
}
 
void g(void)
{
    extern int d[100];
    f(50, d + 50, d); // OK
    f(50, d + 1, d);  // Undefined behavior: d[1] is accessed through both p and q in f
}

int main() {

	g();
	return 0;
}
