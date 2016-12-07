#include <iostream>
#include <cassert>

extern int fib(int);
extern int fib_count;
extern int fib_c(int);
void ClearCache(size_t);

void main()
{
	ClearCache(10);

	assert(fib_c(6) == 8);

	assert(fib(5) == 5);
	assert(fib(6) == 8);

	fib_count = 0;

	fib(6);
	assert(fib_count == 25);
	ClearCache(100000);
	for (int i = 0; i < 100000; ++i)
	{
		fib_count = 0;
		fib_c(i);
		printf("%d  %d\n\n", i, fib_count);


	/*	fib_count = 0;
		fib(i);
		printf("%d  %d\n",i,fib_count);*/
	}
	/*printf("Enter the number of terms of Fibonacci series you want");
	printf_s(" %n ", n);
	printf("First %n ");
	printf(" terms of Fibonacci series are :- ");*/

	ClearCache(0);
	system("pause");
};