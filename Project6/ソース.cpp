#include <iostream>

//�߂�l�̂Ȃ��֐��̒�`
void myfun01(int num) {
	std::cout << num << "��� �֐��̎��s\n";
}

//�߂�l�̂���֐�
int getNum1() {
	return 1;
}
int getNum2() {
	return 2;
}

int main() {

	int  num;
	//�֐��̌Ăяo��
	num = getNum1();
	std::cout << "�߂�l��" << num << "\n";
	num = getNum2();
	std::cout << "�߂�l��" << num << "\n";

	//�߂�l�̂���֐��� �ϐ��Ɠ����������o����
	int  total = getNum1() + getNum2();
	std::cout << "���v:" << total << "\n";

	system("pause");
	return 0;
}