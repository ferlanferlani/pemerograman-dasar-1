//TUGAS ULANGAN TENGAH SEMESTER PEMEROGRAMAN DASAR
/*
Nama           : Ferlan Ferlani
Nim            : 220767
Kelas          : RA 1
Prodi          : Teknik Informatika
Matakuliah     : Pemerogrman Dasar
Semester       : Satu (1)
Tugas          : UTS (Ulangan Tengah Semester)
Dosen Pengampu : Ahmad Rufa'i, S.Kom., M.TI

***************************** KETERANGAN PROGRAM *************************
====================== JENIS PROGRAM : PROGRAM PRODUKSI ==================
perhitungan produksi barang (jenis jenis makanan ringan) dalam catatan
tiga hari, yaitu senin selasa dan rabu.
Ini adalah sebuah program produksi barang dengan cara menginput jumlah
data yang akan di inputkan terlebih dahulu, lalu akan secara otomatis
system mencatat dan kita input jenis makanan ringan sebanyak data yang 
kita inputkan sebelumnya.
==========================================================================


*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){

 float b[1000],c[1000], d[1000], e[1000], f[1000], g[1000], h[1000], total, hasil, rata, max, min, n;
 char a[1000][30];
 cout<<"================================================ SELAMAT DATANG DI APLIKASI SEDERHANA INPUT BARANG ===================================================="<<endl;
 cout<<"\t\t\t\t\t\t\t\tUNIVERSITAS PRIMAGRAHA"<<endl;
 cout<<"\t\t\t\t\t\t\t\t  TEKNIK INFORMATIKA"<<endl;
 cout<<"=======================================================================================================================================================";
 cout<<"NAMA \t\t: FERLAN FERLANI"<<endl;
 cout<<"NIM \t\t: 220767"<<endl;
 cout<<"KELAS \t\t: RA 1"<<endl;
 cout<<"PRODI \t\t: TEKNIK INFORMATIKA"<<endl;
 cout<<"MATAKULIAH \t: PEMEROGRAMAN DASAR"<<endl;
 cout<<"SEMESTER \t: (1) SATU"<<endl;
 cout<<"TUGAS \t\t: UTS (Ulangan Tengah Semester)"<<endl;
 cout<<"DOSEN PENGAMPU \t: Ahmad Rufa'i, S.Kom., M.TI"<<endl;
 cout<<"=======================================================================================================================================================\n\n";
 cout<<"************************ JENIS PROGRAM : PROGRAM PRODUKSI ************************"<<endl;
 cout<<"perhitungan produksi barang (jenis jenis makanan ringan) dalam catatan"<<endl;
 cout<<"tiga hari, yaitu senin, selasa, dan rabu. Ini adalah sebuah program catatan"<<endl;
 cout<<"produksi barang dengan cara menginput banyak data yang akan nantinya kita input"<<endl;
 cout<<"maka secara otomatis system akan mencatat. Lalu kita input"<<endl;
 cout<<"jenis makanan ringan sebanyak data yang kita inputkan sebelumnya."<<endl;
 cout<<"**********************************************************************************\n"<<endl;

 cout<<"************************ INSTRUKSI ************************"<<endl;
 cout<<"NOTE : Silahkan masukkan angka bilangan bulat"<<endl;
 cout<<"1. Silahkan masukkan berapa banyak data yang akan Anda input"<<endl;
 cout<<"2. Silahkan input jenis makanan ringan yang telah di produksi"<<endl;
 cout<<"3. Silahkan input jumlah barang yang telah di produksi selama tiga hari"<<endl;
 cout<<"   yaitu senin selasa, dan rabu."<<endl;
 cout<<"4. Data akan dicetak atau tampil dalam bentuk tabel"<<endl;
 cout<<"**********************************************************************************\n"<<endl;

 cout<<"=======================================================================================================================================================\n\n";



 cout<<"INPUT : ";
 cin>>n;
 cout<<endl<<endl;
 
 for (int i=0; i<n; i++){
  cout<<"Data ke-"<<i+1<<endl;
  cout<<"Jenis Makanan Ringan \t: ";
  scanf(" %[^\n]s",a[i]);

  //data yang akan diambil untuk mecari total, nilai tertinggi dan nilai terendah atau produksi terbanyak dan paling sedikit
  cout<<"Senin\t\t\t: ";
  cin>>b[i];
    
  cout<<"Selasa\t\t\t: ";
  cin>>c[i];
  
  cout<<"Rabu\t\t\t: ";
  cin>>d[i];

 }

 system("CLS");
 cout<<"=====================================================================================================================\n";
 cout<<"|                        DATA                            |                         DITANYA                          |\n";
 cout<<"=====================================================================================================================\n";
 cout<<"|  No  |   Nama Makanan Ringan   | Senin | Selasa | Rabu |     Total    |    Max    |    Min     |    Rata Rata     |\n";
 cout<<"=====================================================================================================================\n";
 for(int i=0;i<n;i++){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(24)<<a[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<b[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<c[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<d[i]<<"|";

// mencari nilai total
    total = b[i]+c[i]+d[i];
  cout<<" "<<setiosflags(ios::left)<<setw(13)<<total<<"|";
  

//   mencari nilai max 
    if(b[i] >= c[i]) {
        max = b[i];
    } 
    if(c[i] >= b[i]) {
        max = c[i];
    }
    if(d[i] >= b[i]) {
        max = d[i];
    } 

// mencari nilai min
    if(b[i] <= c[i]) {
        min = b[i];
    } 
    if(c[i] <= b[i]) {
        min = c[i];
    }
    if(d[i] <= b[i]) {
        min = d[i];
    }

// mencari total
    hasil = total / 3;

    cout<<" "<<setiosflags(ios::left)<<setw(10)<<max<<"|";
    cout<<" "<<setiosflags(ios::left)<<setw(11)<<min<<"|";
    cout<<" "<<setiosflags(ios::left)<<setw(17)<<hasil<<"|";


  cout<<"\n=====================================================================================================================\n";
 }
}