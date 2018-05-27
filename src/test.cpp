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
	/*問題1
	 *
	 * ある小数aが最初100である
	 * ユーザーに小数b, 小数cを入力させ, aにbとcをかける
	 * aの結果を出力する
	 * これを5回繰り返したあと,　ユーザーに小数dを入力させる
	 * 最後にa/dを出力するプログラムを作りなさい
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


	/*問題2
	 * ある小数xが最初10である
	 * ある少数yが最初20である
	 * ユーザーに小数z,小数wを入力させ, xにzをかけ, yにwをかける
	 * x, yを出力する
	 * これを5回繰り返した後, 最後に, x + yを出力するプログラムを作りなさい
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
