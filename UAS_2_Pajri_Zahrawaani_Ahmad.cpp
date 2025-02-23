#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string formatAngka(double angka) {
    string hasil = to_string((long long)angka);
    int n = hasil.length() - 3;
    while (n > 0) {
        n -= 3;
    }
    return hasil;
}

double potong(double pembelian) {
    double diskon;
    
    if (pembelian < 1000000) {
        diskon = 0;
    }
    else if (pembelian <= 5000000) {
        diskon = 0.20 * pembelian;
    }
    else {
        diskon = 0.35 * pembelian;
    }
    
    return diskon;
}

int main() {
    double pembelian, diskon, total;
    char ulang;
    
    do {
        cout<<"Program Hitung Potongan."<<endl;
        cout<<"Besar pembelian barang\t\tRp. ";
        cin>>pembelian;
        
        diskon = potong(pembelian);
        total = pembelian - diskon;
        
        cout<<"Besar diskon yang diberikan\tRp. "<<formatAngka(diskon)<<endl;
        cout<<"Besar harga yang harus dibayarkan\tRp. "<<formatAngka(total)<<endl;
        
        cout<<"\nIngin menjalankan program dari awal (y/n)? ";
        cin>>ulang;
        cout<<endl;
        
    } while (ulang == 'y' || ulang == 'Y');
    
    return 0;
}