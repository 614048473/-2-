#include <iostream>

int test = 42;
int main()
{
	double dval;
	double* pd = &dval;
	double* pd2 = pd;
	std::cout << pd << "\t" << pd2;
	return 0;
}