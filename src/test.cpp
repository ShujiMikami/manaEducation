//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>
using namespace std;


int main() {
	/*���
	 * ���鐮�����ŏ�1�ł���
	 * ���������[�U�[�ɓ��͂����A
	 * ���̐��������������ʂ��o�͂���
	 * �����10��J��Ԃ��Ȃ���
	 *  */

	int b=1;
	int c=0;
	for(int a=0;a<10;a++){
		cin>>c;
		b=b*c;
		cout<<b<<endl;
	}
	return 0;
}
