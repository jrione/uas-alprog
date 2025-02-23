#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int jumlahMahasiswa;
    cout<<"Masukkan Jumlah Mahasiswa: ";
    cin>>jumlahMahasiswa;

    vector<string> namaMahasiswa(jumlahMahasiswa);
    vector<float> nilaiTugas(jumlahMahasiswa);
    vector<float> nilaiUTS(jumlahMahasiswa);
    vector<float> nilaiUAS(jumlahMahasiswa);
    vector<float> nilaiAkhir(jumlahMahasiswa);
    vector<char> grade(jumlahMahasiswa);

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout<<"Mahasiswa Ke-"<<i + 1<<endl;
        cout<<"Nama Mahasiswa: ";
        cin>>namaMahasiswa[i];
        cout<<"Nilai Tugas: ";
        cin>>nilaiTugas[i];
        cout<<"Nilai UTS: ";
        cin>>nilaiUTS[i];
        cout<<"Nilai UAS: ";
        cin>>nilaiUAS[i];

        float nilaiMurniTugas = nilaiTugas[i] * 0.3;
        float nilaiMurniUTS = nilaiUTS[i] * 0.3;
        float nilaiMurniUAS = nilaiUAS[i] * 0.4;
        nilaiAkhir[i] = nilaiMurniTugas + nilaiMurniUTS + nilaiMurniUAS;

        if (nilaiAkhir[i] >= 80) grade[i] = 'A';
        else if (nilaiAkhir[i] >= 70) grade[i] = 'B';
        else if (nilaiAkhir[i] >= 59) grade[i] = 'C';
        else if (nilaiAkhir[i] >= 50) grade[i] = 'D';
        else grade[i] = 'E';
    }

    cout<<string(70, '-')<<endl;
    cout<<setw(25)<<" "<<"DAFTAR NILAI"<<endl;
    cout<<setw(20)<<" "<<"MATERI : PEMROGRAMMAN C++"<<endl;
    cout<<string(70, '-')<<endl;
    
    cout<<left<<setw(5)<<"No." 
        <<setw(30)<<"Nama" 
        <<setw(10)<<"Nilai" 
        <<setw(10)<<" " <<endl;
         
    cout<<setw(20)<<" " 
        <<setw(10)<<"Tugas" 
        <<setw(10)<<"UTS" 
        <<setw(10)<<"UAS" 
        <<setw(10)<<"Akhir"
        <<setw(10)<<"Grade"<<endl;

    cout<<string(70, '-')<<endl;
    
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout<<left<<setw(5) <<i + 1 
        <<setw(15)<<namaMahasiswa[i]
        <<setw(10)<<nilaiTugas[i]
        <<setw(10)<<nilaiUTS[i]
        <<setw(10)<<nilaiUAS[i]
        <<setw(10)<<nilaiAkhir[i]
        <<setw(10)<<grade[i]<< endl;
    }

    cout<<string(70, '-')<<endl;
    
    char ulang;
    cout<<"\nIngin menjalankan program dari awal (y/n)? ";
    cin>>ulang;

    if (ulang == 'y' || ulang == 'Y') {
        main();
    }

    return 0;
}   
