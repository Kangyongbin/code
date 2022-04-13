#include <iostream>
using namespace std;
void main()
{
	int a = 1, d, num, sum = 0, p[4] = { 25000,18000,12000,20000 };
	char age;
	cout << "1, 서울 25000\t2.부산 18000\t3.광주 12000\t4.대구 20000";
	while (a)
	{
		cout << endl << "목적지 번호를 입력해주세요 : ";
		cin >> d;
		cout << endl << "구매하고자 하는 표의 갯수를 입력해주세요 : ";
		cin >> num;
		cout << endl << "어른이면 y 학생이면 n을 입력해주세요 : ";
		cin >> age;

		switch (age)
		{
		case 'y':
		case 'Y':
			sum += p[d - 1] * num; cout << endl << "성인임으로 할인하지 않습니다. "; break;
		case 'n':
		case 'N':
			sum += p[d - 1] * num * 0.5;
			break;
		default:
			cout << endl << "올바른 문자를 입력하지 않았습니다.";
			break;
		}

		cout << endl << "더 구매하시겠습니까?? y / n : ";
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
			cout << endl << "올바른 문자를 입력하지 않았습니다.";
			break;
		}
	}
	cout << "버스 요금은 " << sum << "원 입니다.";
}