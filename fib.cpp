#include<iostream>
#include <cstring>

using namespace std;

//volatile int n, c;

int fib_count;

// recursive function
int fib(int n)
{
	fib_count++;
	if (n <= 1) return n;
	return fib(n - 1) + fib(n - 2);

	//int first = 0, second = 1, next;

	//for (c = 0; c < n; c++)
	//{
	//	if (c <= 1)
	//		next = c;
	//	else
	//	{
	//		next = first + second;
	//		first = second;
	//		second = next;
	//	}
	//	cout << next << endl;
	//}

	//return 0;
}

static int cache[1024];

void ClearCache()
{
	memset(cache, 0, 1024 * sizeof(int));
}

int fib_c(int n)
{
	if (n <= 1) return n;

	fib_count++;
	if (cache[n] == 0)
	 cache[n] = fib_c(n-1)+ fib_c(n-2);

	return cache[n];
}