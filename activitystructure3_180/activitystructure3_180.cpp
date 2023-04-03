#include <iostream>
using namespace std;

struct alamatDetail
{
	char desa[20];
	char kota[20];
};

struct mahasiswa {
	char nim[12];
	char nama[20];
	alamatDetail alamat;
	int umur;
};

int main() {

	mahasiswa mhs[3];

	for (int i = 0;i < 3; i++)
	{
		cout << "masukkan nim: ";
		cin.getline(mhs[i].nim, 12);
		cout << "masukkan nama: ";
		cin.getline(mhs[i].nama, 20);
		cout << "alamat : " << endl;
		cout << "\tnama desa :";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tnama kota :";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukkan umur :";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}
	for (int i = 0;i < 3; i++)
	{
		cout << "\nnim :" << mhs[i].nim;
		cout << "\nnama :" << mhs[i].nama;
		cout << "\ndesa :" << mhs[i].alamat.desa;
		cout << "\nkota :" << mhs[i].alamat.kota;
		cout << "\numur :" << mhs[i].umur;

	}
}