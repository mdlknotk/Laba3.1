//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба3.1 - Массивы, указатели, строки
//КТбо1-6, Кравченко Александр Андреевич
//TaskB
//02.10.2023

#include <iostream>

using namespace std;

int main() {
	long long int n, a,sumpol=0,MLTP=1,maxI=0,minI=0;
	cin >> n;
	int A[100];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		if (A[i]> 0) sumpol+=A[i];
		if (A[i] < A[minI]) {
			minI = i;
		}

		if (A[i] > A[maxI]) {
			maxI = i;
		}
	}
	if (maxI < minI) {
		a = maxI;
		maxI = minI;
		minI = a;
	}
	for(minI++;minI<maxI;++minI){
		MLTP *= A[minI];
	}
	cout << sumpol << ' ' << MLTP;
}

