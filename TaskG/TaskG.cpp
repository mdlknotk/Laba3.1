//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба3.1 - Массивы, указатели, строки
//КТбо1-6, Кравченко Александр Андреевич
//TaskG
//05.11.2023

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int min = 0;
	int buf = 0;
	int buf1 = 0;
	int buf2 = 0;
	int h[100];
	int m[100];
	int s[100];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
		cin >> m[i];
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (h[j] < h[min] || h[j] == h[min] && m[j] < m[min] || h[j] == h[min] && m[j] == m[min] && s[j] < s[min]) {
				min = j;
			}
		}
		buf = h[i];
		buf1 = m[i];
		buf2 = s[i];
		h[i] = h[min];
		m[i] = m[min];
		s[i] = s[min];
		h[min] = buf;
		m[min] = buf1;
		s[min] = buf2;
	}
	for (int i = 0; i < n; i++)
	{
		cout << h[i] << ' ' << m[i] << ' ' << s[i] << endl;
	}
}