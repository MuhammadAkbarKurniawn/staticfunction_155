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
