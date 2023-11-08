//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба3.1 - Массивы, указатели, строки
//КТбо1-6, Кравченко Александр Андреевич
//TaskF
//03.11.2023

#include <iostream>

using namespace std;

int main() {
	unsigned long long int w, h;
	cin >> w >> h;
	char pic1[100][100];
	char pic2[100][100];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> pic1[i][j];
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> pic2[i][j];
		}
	}
	int arg;
	cin >> arg;
	int arg4 = arg % 10;
	arg /= 10;
	int arg3 = arg % 10;
	arg /= 10;
	int arg2 = arg % 10;
	int arg1 = arg / 10;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if ((pic1[i][j] == '0') && (pic2[i][j] == '0')) cout << arg1;
			if ((pic1[i][j] == '0') && (pic2[i][j] == '1')) cout << arg2;
			if ((pic1[i][j] == '1') && (pic2[i][j] == '0')) cout << arg3;
			if ((pic1[i][j] == '1') && (pic2[i][j] == '1')) cout << arg4;
		}
		cout << endl;
	}

}

