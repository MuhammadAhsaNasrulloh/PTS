#include <iostream>
using namespace std;

int main () {
	int panjang, lebar, tinggi;
    int volume;
    cout << "panjang = " << endl;
    cin >> panjang;
    cout << "lebar = "<< endl;
    cin >> lebar;
    cout << "tinggi = "<< endl;
    cin >> tinggi;
    
	
	cout << "=======================================" << endl;
	cout << "Contoh rumus bangun ruang"<<endl;
    volume = panjang * lebar * tinggi;
    cout << "volume bangun  ruang balok = " <<volume <<endl;
	
	return 0;
}