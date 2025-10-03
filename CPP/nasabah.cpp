#include <iostream>
#include <string>

using namespace std;

class Nasabah {
    // Atribut private
    private:
        string idNasabah;
        string nama; 
        string alamat;

    public:
        // Constructor kosong
        Nasabah() {
        }

        // Constructor
        Nasabah(string idNasabah, string nama, string alamat) {
            this->idNasabah = idNasabah;
            this->nama = nama;
            this->alamat = alamat;
        }

        // getter setter id nasabah
        string getIdNasabah() {return idNasabah;}
        
        void setIdNasabah(string idNasabah) {this->idNasabah = idNasabah;}
        
        // getter setter nama
        string getNama() {return nama;}
        
        void setNama(string nama) {this->nama = nama;}
        
        // getter setter alamat
        string getAlamat() {return alamat;}
        
        void SetAlamat(string alamat) {this->alamat = alamat;}
        
    // Destructor
    ~Nasabah() {    
    }
};