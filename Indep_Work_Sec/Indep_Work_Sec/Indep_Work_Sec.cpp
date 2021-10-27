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
	else cout << Pos_num << endl;
}
void Enter_Out_MinThen(int* ArrMinThen, int size_MinThen) {
	cout << "Введите значения для массива: " << endl;

	for (int i = 0; i < size_MinThen; i++) {
		cin >> ArrMinThen[i];
	}
	for (int i = 2; i < size_MinThen; i++) {
		if (ArrMinThen[i] < ArrMinThen[i - 2] - ArrMinThen[i - 1]) {
			cout << ArrMinThen[i] << " ";
		}
	}
	cout << endl;
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
	int size_MinThen;
	cout << "Введите размер массива: "; cin >> size_MinThen;
		int* num_MinThen_Arr = new int[size_MinThen];
		Enter_Out_MinThen(num_MinThen_Arr, size_MinThen);


	return 0;
}
