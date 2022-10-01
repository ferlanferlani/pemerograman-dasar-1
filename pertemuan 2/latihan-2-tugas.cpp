//program ketiga tugas membuat inputan data diri dalam c++
//dibuat tanggal 23 september 2022

#include <iostream> 
#include <stdlib.h>
using namespace std;

int main () {

	// buat variabel terlebih dahulu dengan type data string
	// string input
	string nama;
	string jurusan;
	string nim;

// bisa menggunakan type data char
	// char nama[50];
	// char jurusan[50];
	// char nim[20];

	// string untuk perulangan aplikasi
	string ulang;
	
	do
	{
		/* code */
		system("cls");
		cout<<"-----------------------"<<endl;
		cout<<"Masukkan Data Berikut : "<<endl;
		cout<<"-----------------------"<<endl;

		cout<<"Nama    : ";
		getline(cin, nama); 
		// cin >> nama;
		
		cout<<"Jurusan : ";
		getline(cin, jurusan);
		// cin >> jurusan;
		
		cout<<"Nim     : ";
		getline(cin, nim); 
		
		cout<<"------------------------------"<<endl;
		cout<<"DIBAWAH MERUPAKAN HASIL CETAK!"<<endl; 
		cout<<"------------------------------"<<endl;
		
		//Ambil data dari getline() atau inputan lalu di cetak sesuai string di bawah
		cout<<"DATA PRIBADI"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"Nama    : "<<nama<<endl;
		cout<<"Jurusan : "<<jurusan<<endl;
		cout<<"Nim     : "<<nim<<endl;
		cout<<"------------------------------"<<endl;
		cout << "Ulang Lagi (y/n) : ";
		cin >> ulang;
	} while (ulang == "y");

	system("cls");

	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"----------------------- PROGRAM FINISHED -----------------------"<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	
	
	
}
