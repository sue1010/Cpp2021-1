#include<iostream>
#include<cmath>

using namespace std;

int borrow_money(int age, int work_time, int money);

int main()
{
	char ans;
	int age, work_time,money;

	do{
		cout << "���� : ";
		cin >> age;

		cout << "�ҵ� : ";
		cin >> money;

		cout << "��� : ";
		cin >> work_time;

		if (age >= 25)
		{
			cout << "������ �����մϴ�" << endl;
			cout << "���� �ҵ��� �ִ� 10����� ������ �����մϴ�." << endl;
			
			if (work_time >= 5)
				cout << "��� 15,000�޷��� ������ �����մϴ�." << endl;

			cout << "���� ���� �ݾ� : " << borrow_money(age, work_time, money) << " �޷�" << endl;
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