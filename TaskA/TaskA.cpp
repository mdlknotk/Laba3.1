//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба3.1 - Массивы, указатели, строки
//КТбо1-6, Кравченко Александр Андреевич
//TaskA
//04.11.2023

#include <iostream>

using namespace std;

int main() {
	int n, countN = 0, countY = 0;
	cin >> n;
	int A[100];
	int* pA;
	pA = A;
	for (int i = 0; i < n; i++)
	{
		cin >> *pA;
		pA++;
	}
	pA = A;
	for (int i = 0; i < n; i++)
	{
		if (*pA  % 2 != 0) {
			cout << *pA << ' ';
			countN++;
		}
		pA++;
	}
	pA = A;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (*pA % 2 == 0) {
			cout << *pA << ' ';
			countY++;
		}
		pA++;
	}
	cout << endl;
	if (countY >= countN) cout << "YES";
	else cout << "NO";
}

