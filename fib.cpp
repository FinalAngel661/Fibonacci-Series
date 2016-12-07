#include<iostream>

using namespace std;

volatile int n, c;

int fib()
{
	int first = 0, second = 1, next;

	for (c = 0; c < n; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		cout << next << endl;
	}

	return 0;
}