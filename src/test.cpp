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
	/*
	 * 以下のプログラムは, 3を2で割る計算結果を出力するプログラムである
	 */
	double x = 1;
	double y = 3;
	double z = 0;

	z = x / y;
	cout << z << endl; //答えは1が出力される.

	/*問題
	 * 以上のプログラムにおける, "int"をすべて, "double"に書き換えて, 答えがどうなるか確認しなさい
	 */

	double hankei;
	cin>>hankei;
	double pai;
	pai=3.14;
	double menseki;
	menseki=hankei*hankei*pai;
	cout<<menseki<<endl;









	return 0;
}
