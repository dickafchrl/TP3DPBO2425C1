#include <iostream>
#include <string>
#include <vector>
#include "laporanSampah.cpp"

using namespace std;

class Transaksi {
    // Atribut private
    private:
        string idTransaksi;
        string tanggal; 
        vector<LaporanSampah> daftarSampah; // Asosiasi

    public:
        // Constructor kosong
        Transaksi() {
        }

        // Constructor
        Transaksi(string idTransaksi, string tanggal, vector<LaporanSampah> daftarSampah) {
            this->idTransaksi = idTransaksi;
            this->tanggal = tanggal;
            this->daftarSampah = daftarSampah;
        }

        // getter setter id transaksi
        string getIdTransaksi() {return idTransaksi;}
        
        void setIdTransaksi(string idTransaksi) {this->idTransaksi = idTransaksi;}
        
        // getter setter tanggal
        string getTanggal() {return tanggal;}
        
        void setTanggal(string tanggal) {this->tanggal = tanggal;}
        
        // getter setter daftarSampah
        void tambahSampah(LaporanSampah sampah) {
        daftarSampah.push_back(sampah);
        }

        // Getter daftarSampah (return array of object)
        vector<LaporanSampah> getDaftarSampah() { 
            return daftarSampah;
        }

    // Destructor
    ~Transaksi() {    
    }
};