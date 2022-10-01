#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

//cara buat tampilan tabel di c++
int main(){

 int b[1000],c[1000],n;
 char a[1000][30];
 cout<<"Input:\n\n";
 cout<<"Masukan banyak data yang ingin diinput : ";
 cin>>n;
 cout<<endl<<endl;
 
 for (int i=0; i<n; i++){
  cout<<"Data ke-"<<i+1<<endl;
  cout<<"Masukan Nama\t: ";
  scanf(" %[^\n]s",a[i]);
  
  cout<<"Masukan Nilai 1\t: ";
  cin>>b[i];

  cout<<"Masukan Nilai 2\t: ";
  cin>>c[i];
 }

 system("CLS");
 cout<<"Output:\n\n";
 cout<<"=======================================================\n";
 cout<<"|  No  |           Nama           | Nilai 1 | Nilai 2 |\n";
 cout<<"=======================================================\n";
 for(int i=0;i<n;i++){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<a[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(8)<<b[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(8)<<c[i]<<"|";
  cout<<"\n=======================================================\n";
 }
}