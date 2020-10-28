#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, r;



	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;		r= 6. * rand() / RAND_MAX - 3;

		if ((y <= 0 && y >= -x - r) || (y <= sqrt(r * r - x * x) && y >= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}	return 0;}