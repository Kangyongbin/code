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
