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
	 * ���鏬��a���ŏ�100�ł���
	 * ���[�U�[�ɏ���b, ����c����͂���, a��b��c��������
	 * a�̌��ʂ��o�͂���
	 * �����5��J��Ԃ�������,�@���[�U�[�ɏ���d����͂�����
	 * �Ō��a/d���o�͂���v���O���������Ȃ���
	 */
	/*double a=100;
	double b=0;
	double c=0;
	double d=0;
	double kaitou=0;

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
					kaitou=a/d;
					cout<<kaitou<<endl;
					*/


	/*���2
	 * ���鏬��x���ŏ�10�ł���
	 * ���鏭��y���ŏ�20�ł���
	 * ���[�U�[�ɏ���z,����w����͂���, x��z������, y��w��������
	 * x, y���o�͂���
	 * �����5��J��Ԃ�����, �Ō��, x + y���o�͂���v���O���������Ȃ���
	 */
    double x=10;
    double y=20;
    double z=0;
    double w=0;
    double kai;

    cin>>z;
    x=x*z;
    cout<<x<<endl;

    cin>>w;
    y=y*w;
    cout<<y<<endl;

    cin>>z;
        x=x*z;
        cout<<x<<endl;

        cin>>w;
        y=y*w;
        cout<<y<<endl;

        cin>>z;
            x=x*z;
            cout<<x<<endl;

            cin>>w;
            y=y*w;
            cout<<y<<endl;

            cin>>z;
                x=x*z;
                cout<<x<<endl;

                cin>>w;
                y=y*w;
                cout<<y<<endl;

                cin>>z;
                    x=x*z;
                    cout<<x<<endl;

                    cin>>w;
                    y=y*w;
                    cout<<y<<endl;

    kai=x+y;
    cout<<kai<<endl;


	return 0;
}
