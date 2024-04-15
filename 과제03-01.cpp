#include<iostream>
#include<cmath>

using namespace std;

double gravity(double m1, double m2, double d);

int main()
{
	double m1, m2, d;
	char ans;
	
	do {
		cout << "m1(����:g) : ";
		cin >> m1;
		cout << "m2(����:g) : ";
		cin >> m2;
		cout << "d(����:cm) : ";
		cin >> d;

		cout << gravity(m1, m2, d) << " ����" << endl;

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