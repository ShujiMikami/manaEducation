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
	 * ���[�U�[�ɑ̏d��, �g����, �����_��, ���͂���,
	 * (�̏d)/(�g����2��)���v�Z���ďo�͂���v���O����������Ȃ���.
	 * �̏d����͂������, "�̏d����͂��Ă�������"�ƕ������o�͂�,
	 * �g������͂������, "�g������͂��Ă�������"�ƕ������o�͂�,
	 * ���ʂ��o�͂����, "BMI=XX"�Əo�͂����Ȃ���.
	 */
	double taijyu=0;
	cout<<"�̏d����͂��Ă�������"<<endl;
	cin>>taijyu;
	double sinntyo=0;
	cout<<"�g������͂��Ă�������"<<endl;
    cin>>sinntyo;
    double BMI=0;
	BMI=taijyu/(sinntyo*sinntyo);
	cout<<"BMI="<<BMI<<endl;












	return 0;
}
