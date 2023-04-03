#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140180";
	mhs1.nama = "fikri";
	mhs1.alamat = "kasihan";
	mhs1.umur = 18;

	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukkan nama: ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat: ";
	cin >> mhs2.alamat;
	cout << "Masukkan umur: ";
	cin >> mhs2.umur;

	cout << "\nnim :" << mhs1.nim;
	cout << "\nnama :" << mhs1.nama;
	cout << "\nalamat :" << mhs1.alamat;
	cout << "\numur:" << mhs1.umur;

	

}


