#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, r;

	cout << "x= "; cin >> x;
	cout << "r= "; cin >> r;
	cout << "y= "; cin >> y;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		if ((y <= 0 && y >= -x - r) || (y <= sqrt(r * r - x * x) && y >= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;

		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
