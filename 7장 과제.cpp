#include<iostream>
#include<string>

using namespace std;

class Month
{
public:
	Month(string first, string second, string third);
	Month(int Num);
	Month();
	int accept();
	string accept3str();
	void printAccept();
	void print3str();
	int nextMonth();

private:
	int accMon;
	string accstr;
	int nextMon;
};

int main()
{
	Month mon1("F", "e", "b"), mon2(10), mon3;

	// 출력
	mon1.printAccept();
	mon1.print3str();
	cout << "Next Month: " << mon1.nextMonth() << endl;

	mon2.printAccept();
	mon2.print3str();
	cout << "Next Month: " << mon2.nextMonth() << endl;

	mon3.printAccept();
	mon3.print3str();
	cout << "Next Month: " << mon3.nextMonth() << endl;

	// 입력
	mon1.accept();
	mon1.accept3str();

	mon2.accept();
	mon2.accept3str();

	mon3.accept();
	mon3.accept3str();

	// 출력
	mon1.printAccept();
	mon1.print3str();
	cout << "Next Month: " << mon1.nextMonth() << endl;

	mon2.printAccept();
	mon2.print3str();
	cout << "Next Month: " << mon2.nextMonth() << endl;

	mon3.printAccept();
	mon3.print3str();
	cout << "Next Month: " << mon3.nextMonth() << endl;

	return 0;
}

Month::Month(string first, string second, string third)
{
	accstr = first + second + third;
	accMon = 2;
}

Month::Month(int Num)
{
	accstr = "Oct";
	accMon = Num;
}

Month::Month()
{
	accstr = "May";
	accMon = 5;
}

int Month::accept()
{
	cin >> accMon;
	return accMon;
}

string Month::accept3str()
{
	cin >> accstr;
	return accstr;
}

void Month::printAccept()
{
	cout << "Month Num: " << accMon << endl;
}

void Month::print3str()
{
	cout << "Month str: " << accstr << endl;
}

int Month::nextMonth() 
{
	nextMon = accMon + 1;
	return nextMon;
}
