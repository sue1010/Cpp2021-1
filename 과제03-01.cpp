#include<iostream>
#include<cmath>

using namespace std;

double gravity(double m1, double m2, double d);

int main()
{
	double m1, m2, d;
	char ans;
	
	do {
		cout << "m1(단위:g) : ";
		cin >> m1;
		cout << "m2(단위:g) : ";
		cin >> m2;
		cout << "d(단위:cm) : ";
		cin >> d;

		cout << gravity(m1, m2, d) << " 다인" << endl;

		cout << "Again?(y/n) : ";
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');

		return 0;
}

double gravity(double m1, double m2, double d)
{
	double G = 6.673 * pow(10, -8);
	double F = (G * m1 * m2) / pow(d, 2);
	return F;

}