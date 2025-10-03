#include <iostream>
#include <string>
#include <vector>
#include "tempatSampah.cpp"
#include "nasabah.cpp"
#include "transaksi.cpp"
using namespace std;

class BankSampah {
private:
    string idBankSampah;
    string nama;
    string alamat;
    vector<Nasabah> daftarNasabah;            // agregasi
    vector<TempatSampah> daftarTempatSampah;  // agregasi
    vector<Transaksi> daftarTransaksi;        // komposisi

public:
    // Constructor kosong
    BankSampah() {}

    // Constructor
    BankSampah(string idBankSampah, string nama, string alamat) {
        this->idBankSampah = idBankSampah;
        this->nama = nama;
        this->alamat = alamat;
    }

    // getter setter idBankSampah
    string getIdBankSampah() { return idBankSampah; }
    void setIdBankSampah(string idBankSampah) { this->idBankSampah = idBankSampah; }

    // getter setter nama
    string getNama() { return nama; }
    void setNama(string nama) { this->nama = nama; }

    // getter setter alamat
    string getAlamat() { return alamat; }
    void setAlamat(string alamat) { this->alamat = alamat; }

    // Tambah object Nasabah
    void tambahNasabah(Nasabah nasabah) {
        daftarNasabah.push_back(nasabah);
    }

    // Tambah object TempatSampah
    void tambahTempatSampah(TempatSampah tempat) {
        daftarTempatSampah.push_back(tempat);
    }

    // Tambah object Transaksi
    void tambahTransaksi(Transaksi transaksi) {
        daftarTransaksi.push_back(transaksi);
    }

    // Getter daftarNasabah
    vector<Nasabah> getDaftarNasabah() { return daftarNasabah; }

    // Getter daftarTempatSampah
    vector<TempatSampah> getDaftarTempatSampah() { return daftarTempatSampah; }

    // Getter daftarTransaksi
    vector<Transaksi> getDaftarTransaksi() { return daftarTransaksi; }

    // Destructor
    ~BankSampah() {}
};