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
	 * ある小数が最初100である
	 * ユーザーに小数を二つを入力させ, どんどんかけていく
	 * かけた結果を出力する
	 * これを5回繰り返したあと,　ユーザーに小数をもう一つを入力させる
	 * そこまでの結果をさらに最後の小数で割り算を出力するプログラムを作りなさい
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
