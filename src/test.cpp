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
	 * ある整数xを0にする
	 * ユーザーに数字を入力させて、その値をxに足して出力するのを5回繰り返すプログラムを実行しなさい
	 * 例
	 * 1を入力後 1を出力
	 * 2を入力後 3を出力
	 * 3を入力後 6を出力
	 * 4を入力後 10を出力
	 * 5を入力後 15を出力
	 * おわり
	 * 	 */

	//seikai();

	int x;//ｘという整数を用意する
	x=0;//xを０に設定する

    int y;//ｙという整数を用意する
    y=0;//yを０に設定する

    cin>>x;//xにユーザーに数字を入力させる
    y=y+x;//y＋xを計算し、yをその計算結果に設定しする
    cout<<y<<endl;//yを出力する

    cin>>x;//xにユーザーに数字を入力させる
    y=y+x;//yは０＋ユーザーの決めた数字の和
    cout<<y<<endl;//yを出力する

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
