//���, �����, ��� ���
//���������������� � ������ ������ ����������
//����3.1 - �������, ���������, ������
//����1-6, ��������� ��������� ���������
//TaskD
//02.10.2023

#include <iostream>

using namespace std;

int main() {
	long long int n, temp, half, sumgol = 0;
	cin >> n;
	int A[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> A[i][j];
		}
	}
	for (int j = 0; j < n; j++) {
		int i = n;
		while (i--) {
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
}

