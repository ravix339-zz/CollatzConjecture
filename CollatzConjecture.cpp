#include <iostream>
using namespace std;


unsigned long long int COUNTMAX = 15; //User changes this to see numbers that have less than this many iterations
unsigned long long int MAX = 78; //User changes this to see numbers between 1 and this number (inclusive) that reach 1 in less than COUNTMAX iterations. 


int collatz(unsigned long long int, unsigned long long int);
void main()
{//
	unsigned long long int x = 1;
	while(1)
	{
		if (collatz(x, 0) == 0)
		{
			cout << x << " doesnt work" << endl;
		}
		else
		{
			cout << x << " works" <<endl;
		}
		x++;
		if (x == MAX+1)
			break;
	}
	system("PAUSE");
	return;
}
int collatz(unsigned long long int x, unsigned long long int count)
{
	if (x == 1)
		return 1;
	if (count == COUNTMAX)
		return 0;
	count++;
	if (x % 2 == 0)
		return collatz(x / 2, count);
	else
		return collatz(3 * x + 1, count);
}
