#include<iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setId();
	void printAll();
	mahasiswa(string pnama) :nama(pnama) { setId(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setId() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID =" << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}
