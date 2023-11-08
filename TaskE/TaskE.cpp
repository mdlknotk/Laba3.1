//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба3.1 - Массивы, указатели, строки
//КТбо1-6, Кравченко Александр Андреевич
//TaskE
//04.11.2023

#include <iostream>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int i, j;
    int mas[100][100];
    int fl;
    int k = 2;

    mas[0][0] = 1;
    fl = 1;
    i = 1; j = 0;

    while (k <= n * n)
    {
        mas[i][j] = k;
        if (fl)
        {
            i--; j++;
            if (i == -1 && j < n)
            {
                fl = 0;
                i++;
            }
            else if ((i == -1 && j == n) || (j == n))
            {
                fl = 0;
                i += 2; 
                j--;
            }
        }
        else
        {
            i++; j--;
            if (j == -1 && i < n)
            {
                fl = 1;
                j++;
            }
            else if ((j == -1 && i == n) || (i == n))
            {
                fl = 1;
                j += 2; 
                i--;
            }
        }
        k++;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mas[i][j] << ' ';
        }
       cout <<endl;
    }
}
