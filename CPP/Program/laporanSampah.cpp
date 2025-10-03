#include <iostream>
#include <string>

using namespace std;

class LaporanSampah {
    // Atribut private
    private:
        string idLaporanSampah;
        string totalTransaksi; 
        string totalBerat;

    public:
        // Constructor kosong
        LaporanSampah() {
        }

        // Constructor
        LaporanSampah(string idLaporanSampah, string totalTransaksi, string totalBerat) {
            this->idLaporanSampah = idLaporanSampah;
            this->totalTransaksi = totalTransaksi;
            this->totalBerat = totalBerat;
        }

        // getter setter id lapora sampah
        string getIdLaporanSampah() {return idLaporanSampah;}
        
        void setIdLaporanSampah(string idLaporanSampah) {this->idLaporanSampah = idLaporanSampah;}
        
        // getter setter total transaksi
        string getTotalTransaksi() {return totalTransaksi;}
        
        void setTotalTransaksi(string totalTransaksi) {this->totalTransaksi = totalTransaksi;}
        
        // getter setter total berat
        string getTotalBerat() {return totalBerat;}
        
        void setTotalBerat(string totalBerat) {this->totalBerat = totalBerat;}
        
    // Destructor
    ~LaporanSampah() {    
    }
};