//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>
using namespace std;


int main() {
	/*問題
	 * ある整数が最初1である
	 * 整数をユーザーに入力させ、
	 * その整数をかけた結果を出力する
	 * これを10回繰り返しなさい
	 *  */

	int b=1;
	int c=0;
	for(int a=0;a<10;a++){
		cin>>c;
		b=b*c;
		cout<<b<<endl;
	}
	return 0;
}
