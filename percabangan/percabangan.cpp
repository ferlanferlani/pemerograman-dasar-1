#include <iostream>
using namespace std;

// KETERANGAN
/*
jika nilai kedua persamaa bernilai true maka string itu yang akan dijalankan
sebaliknya jika bernilai false maka program akan keluar dan masuk else
(tidak masuk kriteria statment)
*/

int main() {
    int data = 90;

        if (data >= 0 && data <= 40) {
            cout <<"Nilai Anda adalah E"<<endl;
        } else if 
            (data <= 80 && data >= 85 ) {
                cout <<"Nilai Anda adalah B"<<endl;
        } else if 
        (data >= 90 && data <= 100) {
            cout <<"Nilai Anda adalah A"<<endl;
        } else {
            cout <<"-----------------"<<endl;
            cout <<"Data tidak valid!"<<endl;
            cout <<"-----------------"<<endl;
            }
}