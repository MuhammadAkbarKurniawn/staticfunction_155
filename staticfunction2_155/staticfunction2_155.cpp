#include<iostream>
#include<string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setId();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*definisi function*/ }
	static int getNim() { return nim; /*Definisi function*/ }

	mahasiswa(string pnama) : nama(pnama) { setId(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setId() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");
	mahasiswa::setNim(9); //Mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wahyono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "Akses dari luar object = " << mahasiswa::getNim() << endl; // mengakses nim
	system("pause");

	return 0;
}