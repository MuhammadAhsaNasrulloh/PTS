#include <iostream>
using namespace std;

int main () {
	int kehadiran, tugas, uts, uas;
	int NilaiAkhir;
	cout << "kehadiran = " <<endl;
	cin >> kehadiran;
	cout << "tugas = " << endl;
	cin >> tugas;
	cout << "uts = " << endl;
	cin >> uts;
	cout << "uas = " << endl;
	cin >> uas;
	
	NilaiAkhir = (kehadiran + tugas + uts + uas) / 4;
	cout << "nilai akhir = " << NilaiAkhir << endl;
	
}