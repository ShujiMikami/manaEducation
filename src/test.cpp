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
	/*���
	 * ���鐮��y��1�ɂ���
	 * ���[�U�[�ɐ�������͂����āA���̒l��y�Ɋ|���Z���ďo�͂���̂�5��J��Ԃ��v���O���������s���Ȃ���
	 * ��
	 * 1����͌� 1���o��
	 * 2����͌� 2���o��
	 * 3����͌� 6���o��
	 * 4����͌� 24���o��
	 * 5����͌� 120���o��
	 * �����
	 * 	 */

	//seikai();

	int y = 1;
	int x = 0;
	cin>>x;
	y=y*x;
	cout<<y<<endl;

	cin>>x;
	y=y*x;
	cout<<y<<endl;

	cin>>x;
	y=y*x;
	cout<<y<<endl;

	cin>>x;
	y=y*x;
	cout<<y<<endl;

	cin>>x;
	y=y*x;
	cout<<y<<endl;







	return 0;
}
