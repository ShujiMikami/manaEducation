//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
	/*���
	 *
	 * ���鏬��a���ŏ�100�ł���
	 * ���[�U�[�ɏ���b, ����c����͂���, a��b��c��������
	 * �����5��J��Ԃ������Ƃ�a�̒l���o�͂���v���O���������Ȃ���
	 */
	double a=100;
	double b=0;
	double c=0;

	cin>>b;
	cin>>c;
	a=a*b*c;
	cout<<a<<endl;
	cin>>b;
		cin>>c;
		a=a*b*c;
		cout<<a<<endl;
		cin>>b;
			cin>>c;
			a=a*b*c;
			cout<<a<<endl;
			cin>>b;
				cin>>c;
				a=a*b*c;
				cout<<a<<endl;
				cin>>b;
					cin>>c;
					a=a*b*c;
					cout<<a<<endl;


	return 0;
}
