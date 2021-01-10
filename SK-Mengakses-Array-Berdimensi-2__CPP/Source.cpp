/* -------------------- */
/* Array Dimensi 2 */
/* -------------------- */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int i, j;
	int data_jual[4][4];
	
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			cout << "Data Ke - " << i << " " << j << endl;
			cout << "Jumlah Penjualan : ";
			cin >> data_jual[i][j];
		}
	}

	cout << "Data Penjualan Pertahun" << endl;
	cout << "-----------------------" << endl;
	cout << "NO 2007 2008 2093" << endl;
	cout << "-----------------------" << endl;

	for (i = 1; i <= 3; i++) {
		cout << setiosflags(ios::left) << setw(5) << i;
		for (j = 1; j <= 3; j++) {
			cout << setiosflags(ios::right) << setw(4);
			cout << data_jual[i][j];
			cout << " ";
		}
		cout << endl;
	}
	
	cout << "-----------------------" << endl;
	
	_getch();
	return 0;
}