//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба3.1 - Массивы, указатели, строки
//КТбо1-6, Кравченко Александр Андреевич
//TaskC
//02.10.2023

#include <iostream>

using namespace std;

int main() {
	long long int n,temp,half,sumgol=0;
	cin >> n;
	int A[1001];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < (n/2+1); i++)
    {
        sumgol += A[i] / 2 + 1;
    }
    cout << sumgol;
}

