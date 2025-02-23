#include <iostream>
#include <string>
using namespace std;

int Tarif(char kode) {
    if (kode == 'C' || kode == 'c') {
        return 500;
    }
    else if (kode == 'K' || kode == 'k') {
        return 700;
    }
    else if (kode == 'N' || kode == 'n') {
        return 1000;
    }
    return 0;
}

string getJenisBuku(char kode) {
    if (kode == 'C' || kode == 'c') {
        return "CerPen (Kumpulan Cerita Pendek)";
    }
    else if (kode == 'K' || kode == 'k') {
        return "Komik";
    }
    else if (kode == 'N' || kode == 'n') {
        return "Novel";
    }
    return "Tidak diketahui";
}

int main() {
    string nama;
    char kode, ulang;
    int jumlah;
    
    do {
        cout<<"Perpustakaan \"Kecil-Kecilan\""<<endl;
        cout<<"--------------------------------"<<endl;
        
        cout<<"Nama Penyewa Buku\t: ";
        cin.ignore();
        getline(cin, nama);
        
        cout<<"Kode Buku [C/K/N]\t: ";
        cin>>kode;
        
        cout<<"Banyak Pinjam\t\t: ";
        cin>>jumlah;
        
        int tarif = Tarif(kode);
        string jenisBuku = getJenisBuku(kode);
        int totalBayar = tarif * jumlah;
        
        cout<<"Tarif Sewa\t\t: Rp. "<<tarif<<endl;
        cout<<"Jenis Buku\t\t: "<<jenisBuku<<endl;
        cout<<"\nPenyewa dengan Nama "<<nama<<endl;
        cout<<"Jumlah Bayar Penyewaan Sebesar Rp. "<<totalBayar<<endl;
        
        cout<<"\nIngin menjalankan program dari awal (y/n)? ";
        cin>>ulang;
        cout<<endl;
        
    } while (ulang == 'y' || ulang == 'Y');
    
    return 0;
}