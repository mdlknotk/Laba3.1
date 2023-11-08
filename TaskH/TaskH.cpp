//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба3.1 - Массивы, указатели, строки
//КТбо1-6, Кравченко Александр Андреевич
//TaskH
//04.11.2023

#include <iostream>

using namespace std;

int main() {
	int n, k,i=0,counter=0,killed=0;
	cin >> n >> k;
	int ppl[500];
	for (int i = 0; i < n; i++)
	{
		ppl[i] = 0;
	}
	while (killed != n - 1) 
	{
		if (ppl[i]==0)
		{
			counter++;
			if (counter == k)
			{
				ppl[i] = 1;
				counter = 0;
				killed++;
			}
		}
		i = (i + 1) % n;
	}
	for (i = 0; ppl[i] != 0; i++){}
	cout << i + 1;
}