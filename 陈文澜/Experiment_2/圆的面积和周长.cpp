#include<iostream>

using namespace std;
const float P = 3.14159;
int main() {
	int r;//rΪԲ�İ뾶
	float perimeter, area;
	cout << "Բ�İ뾶Ϊ��";
		cin >> r;
	perimeter = 2 * P*r;
	area = P * r*r;
	cout << "Բ���ܳ�Ϊ��" << perimeter << "Բ�����Ϊ��" << area << endl;
	system("pause");
	return 0;
	
}
