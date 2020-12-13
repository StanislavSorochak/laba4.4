// Lab_04_4.cpp
// < Сорочак Станіслав >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 24

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, y, R;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= 0)
			y = (-R / 6.0) * (x + 6.0);
		else
			if (0 < x && x <= R)
				y = -sqrt(pow(R, 2) - pow(x, 2));
			else
				if (R < x && x <= 2 * R)
					y = sqrt(pow(R, 2) - (x - 2 * pow(R, 2)));
				else
					y = R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}


