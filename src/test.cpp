//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void seikai()
{
	static int x = 0;
	int y;
	for(int i = 0; i < 5; i++){
		cout << "��������͂��Ă�������, ���͂���������O�̌��ʂɑ����܂�" << endl;
		cin >> y;

		x += y;
		cout << x << endl;
	}

}


int main() {
	/*
	 * �ȉ��̃v���O������, 3��2�Ŋ���v�Z���ʂ��o�͂���v���O�����ł���
	 */
	double x = 1;
	double y = 3;
	double z = 0;

	z = x / y;
	cout << z << endl; //������1���o�͂����.

	/*���
	 * �ȏ�̃v���O�����ɂ�����, "int"�����ׂ�, "double"�ɏ���������, �������ǂ��Ȃ邩�m�F���Ȃ���
	 */

	double hankei;
	cin>>hankei;
	double pai;
	pai=3.14;
	double menseki;
	menseki=hankei*hankei*pai;
	cout<<menseki<<endl;









	return 0;
}
