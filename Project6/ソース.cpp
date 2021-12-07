#include <iostream>

//戻り値のない関数の定義
void myfun01(int num) {
	std::cout << num << "回目 関数の実行\n";
}

//戻り値のある関数
int getNum1() {
	return 1;
}
int getNum2() {
	return 2;
}

int main() {

	int  num;
	//関数の呼び出し
	num = getNum1();
	std::cout << "戻り値は" << num << "\n";
	num = getNum2();
	std::cout << "戻り値は" << num << "\n";

	//戻り値のある関数は 変数と同じ扱いが出来る
	int  total = getNum1() + getNum2();
	std::cout << "合計:" << total << "\n";

	system("pause");
	return 0;
}