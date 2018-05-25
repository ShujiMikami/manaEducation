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
	 * ユーザーに体重と, 身長を, 小数点で, 入力させ,
	 * (体重)/(身長の2乗)を計算して出力するプログラムをつくりなさい.
	 * 体重を入力させる際, "体重を入力してください"と文字を出力し,
	 * 身長を入力させる際, "身長を入力してください"と文字を出力し,
	 * 結果を出力する際, "BMI=XX"と出力させなさい.
	 */
	double taijyu=0;
	cout<<"体重を入力してください"<<endl;
	cin>>taijyu;
	double sinntyo=0;
	cout<<"身長を入力してください"<<endl;
    cin>>sinntyo;
    double BMI=0;
	BMI=taijyu/(sinntyo*sinntyo);
	cout<<"BMI="<<BMI<<endl;












	return 0;
}
