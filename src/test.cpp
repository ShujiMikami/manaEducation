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
	/*問題
	 *
	 * ある小数aが最初100である
	 * ユーザーに小数b, 小数cを入力させ, aにbとcをかける
	 * これを5回繰り返したあとのaの値を出力するプログラムを作りなさい
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
