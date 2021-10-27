#include <iostream>
using namespace std;
void Enter_Arr(int* Mass, int size) {
	for (int i = 0; i < size; i++) {
		Mass[i] = -10 + rand() % 20;
	}
}
void Find_Pos(int* Array, int size, int num_arr) {
	int Pos_num = -1;
	for (int i = 0; i < size; i++) {
		if (Array[i] == num_arr) {
			Pos_num = i;;
			break;
		}
	}
	if (Pos_num == -1) {
		cout << "Такого числа нет в массиве. " << endl;
	}
	else cout << Pos_num;
}



int main() {
	setlocale(LC_ALL, "rus");
	int size;
	cout << "Введите размер массива: "; cin >> size;
	int* Arr = new int[size];
	Enter_Arr(Arr, size);
	int num_arr;
	cout << "Введите число для нахождения его положения в массиве: "; cin >> num_arr;
	Find_Pos(Arr, size, num_arr);



	return 0;
}
