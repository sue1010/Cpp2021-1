#include<iostream>
#include<cmath>

using namespace std;

int borrow_money(int age, int work_time, int money);

int main()
{
	char ans;
	int age, work_time,money;

	do{
		cout << "나이 : ";
		cin >> age;

		cout << "소득 : ";
		cin >> money;

		cout << "경력 : ";
		cin >> work_time;

		if (age >= 25)
		{
			cout << "대출이 가능합니다" << endl;
			cout << "연간 소득의 최대 10배까지 대출이 가능합니다." << endl;
			
			if (work_time >= 5)
				cout << "적어도 15,000달러의 대출이 가능합니다." << endl;

			cout << "대출 가능 금액 : " << borrow_money(age, work_time, money) << " 달러" << endl;
		}

		cout << "Again?(y/n) : ";
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');

		return 0;
}

int borrow_money(int age, int work_time, int money)
{
	int borrow;

	if (work_time >= 5)
	{
		if (money * 10 <= 15000)
			borrow = 15000;
		else
			borrow = money * 10;
	}
	else
		borrow = money * 10;

	return borrow;
}