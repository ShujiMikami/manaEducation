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
		cout << "数字を入力してください, 入力した数字を前の結果に足します" << endl;
		cin >> y;

		x += y;
		cout << x << endl;
	}

}


int main() {
	/*問題
	 * ある整数yを1にする
	 * ユーザーに数字を入力させて、その値をyに掛け算して出力するのを5回繰り返すプログラムを実行しなさい
	 * 例
	 * 1を入力後 1を出力
	 * 2を入力後 2を出力
	 * 3を入力後 6を出力
	 * 4を入力後 24を出力
	 * 5を入力後 120を出力
	 * おわり
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
