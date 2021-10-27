#include <iostream>
#include<math.h>
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
void Enter_Out_RepArr(int* ArrRep, int size_Repnum) {
	cout << "Введите значения для массива: " << endl;

	for (int i = 0; i < size_Repnum; i++) {
		cin >> ArrRep[i];
	}
	int save_sum_rep = 2, sum_rep = 1;
	for (int i = 1; i < size_Repnum; i++) {
		if (ArrRep[i] != ArrRep[i - 1]) {
			sum_rep = 1; }
			if (ArrRep[i] == ArrRep[i - 1]) {
				sum_rep++;
				
			}

	if (save_sum_rep <= sum_rep) save_sum_rep = sum_rep;
		
	}
	cout << "Длинна наибольшей последовательности равна: " << save_sum_rep << endl;
}
void Enter_find_distPoints(int** Coor_Points, int volum_points) {
	for (int i = 0; i < volum_points; i++) {
		for (int j = 0; j < 2; j++) {
			Coor_Points[i][j] = -5 + rand() % 15;
		}
	}
	bool Check_X = false, Check_Y = false;
	double dist_Points, dist_save_Points = -1;
	int delX, delY;
	for (int i = 0; i < volum_points; i++) {
		for (int k = 1; k < volum_points; k++) {
			for (int j = 0; j < 2; j++) {
				if (j == 0) { 
				delX = 0;
				delX = Coor_Points[i][j] - Coor_Points[k][j]; 
				Check_X = true;
				} 
				if (j == 1) {
					delY = 0;
					delY = Coor_Points[i][j] - Coor_Points[k][j];
					Check_Y = true;
				}
				if (Check_Y == true && Check_X == true) {
					dist_Points = sqrt(pow(delX, 2) + pow(delY, 2));
					if (dist_save_Points < dist_Points) dist_save_Points = dist_Points;
				}
				
			}
		}
	}

	cout << "Наибольшее расстояние между точками равно: " << dist_save_Points;
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

		int size_Repnum;
		cout << "Введите размер массива: "; cin >> size_Repnum;
		int* RepArrNum = new int[size_Repnum];
		Enter_Out_RepArr(RepArrNum, size_Repnum);

		int volum_points;
		cout << "Введите количество точек: "; cin >> volum_points;
		int** Coor_points = new int* [volum_points];
		for (int i = 0; i < volum_points; i++) {
			Coor_points[i] = new int[2];
		}
		Enter_find_distPoints(Coor_points, volum_points);
	return 0;
}
