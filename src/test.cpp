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
	/*���1
	 *
	 * ���鏬�����ŏ�100�ł���
	 * ���[�U�[�ɏ���������͂���, �ǂ�ǂ񂩂��Ă���
	 * ���������ʂ��o�͂���
	 * �����5��J��Ԃ�������,�@���[�U�[�ɏ��������������͂�����
	 * �����܂ł̌��ʂ�����ɍŌ�̏����Ŋ���Z���o�͂���v���O���������Ȃ���
	 */
	double a=100;
	double b=0;
	double c=0;
	double d=0;

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

					cin>>d;
	          a=a/d;
	          cout<<a<<endl;


	return 0;
}
