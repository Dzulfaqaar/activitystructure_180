#include <iostream>
using namespace std;

struct alamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	alamatDetail alamat;
	int umur;

};

int main() {
	Mahasiswa mhs;
	
	cout << "masukkan nim :";
	cin >> mhs.nim;
	cout << "masukkan nama :";
	cin >> mhs.nim;
	cout << " alamat :" << endl;
	cout << "\ntnama desa :";
	cin >> mhs.alamat.desa;
	cout << "\ntnama kota :";
	cin >> mhs.alamat.kota;
	cout << "masukkan umur :";
	cin >> mhs.umur;

	cout << "\nnim :" << mhs.nim;
	cout << "\nnama :" << mhs.nama;
	cout << "\ndesa :" << mhs.alamat.desa;
	cout << "\nkota :" << mhs.alamat.kota;
}