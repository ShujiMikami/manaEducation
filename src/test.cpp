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
	 * ���鐮��x��0�ɂ���
	 * ���[�U�[�ɐ�������͂����āA���̒l��x�ɑ����ďo�͂���̂�5��J��Ԃ��v���O���������s���Ȃ���
	 * ��
	 * 1����͌� 1���o��
	 * 2����͌� 3���o��
	 * 3����͌� 6���o��
	 * 4����͌� 10���o��
	 * 5����͌� 15���o��
	 * �����
	 * 	 */

	//seikai();

	int x;//���Ƃ���������p�ӂ���
	x=0;//x���O�ɐݒ肷��

    int y;//���Ƃ���������p�ӂ���
    y=0;//y���O�ɐݒ肷��

    cin>>x;//x�Ƀ��[�U�[�ɐ�������͂�����
    y=y+x;//y�{x���v�Z���Ay�����̌v�Z���ʂɐݒ肵����
    cout<<y<<endl;//y���o�͂���

    cin>>x;//x�Ƀ��[�U�[�ɐ�������͂�����
    y=y+x;//y�͂O�{���[�U�[�̌��߂������̘a
    cout<<y<<endl;//y���o�͂���

    cin>>x;
    y=y+x;
    cout<<y<<endl;
    cin>>x;
    y=y+x;
    cout<<y<<endl;
    cin>>x;
    y=y+x;
    cout<<y<<endl;



	return 0;
}
