#include <iostream>
using namespace std;
void main()
{
	int a = 1, d, num, sum = 0, p[4] = { 25000,18000,12000,20000 };
	char age;
	cout << "1, ���� 25000\t2.�λ� 18000\t3.���� 12000\t4.�뱸 20000";
	while (a)
	{
		cout << endl << "������ ��ȣ�� �Է����ּ��� : ";
		cin >> d;
		cout << endl << "�����ϰ��� �ϴ� ǥ�� ������ �Է����ּ��� : ";
		cin >> num;
		cout << endl << "��̸� y �л��̸� n�� �Է����ּ��� : ";
		cin >> age;

		switch (age)
		{
		case 'y':
		case 'Y':
			sum += p[d - 1] * num; cout << endl << "���������� �������� �ʽ��ϴ�. "; break;
		case 'n':
		case 'N':
			sum += p[d - 1] * num * 0.5;
			break;
		default:
			cout << endl << "�ùٸ� ���ڸ� �Է����� �ʾҽ��ϴ�.";
			break;
		}

		cout << endl << "�� �����Ͻðڽ��ϱ�?? y / n : ";
		cin >> age;

		switch (age)
		{
		case 'y':
		case 'Y':
			break;
		case 'n':
		case 'N':
			a = 0;
			break;
		default:
			cout << endl << "�ùٸ� ���ڸ� �Է����� �ʾҽ��ϴ�.";
			break;
		}
	}
	cout << "���� ����� " << sum << "�� �Դϴ�.";
}