#include <iostream>
#include <string>

using namespace std;

class Sampah {
    // Atribut private
    private:
        string idSampah;
        string nama; 
        string berat; 

    public:
        // Constructor kosong
        Sampah() {
        }

        // Constructor
        Sampah(string idSampah, string nama, string berat) {
            this->idSampah = idSampah;
            this->nama = nama;
            this->berat = berat;
        }

        // getter setter id
        string getIdSampah() {return idSampah;}
        
        void setIdSampah(string idSampah) {this->idSampah = idSampah;}
        
        // getter setter nama
        string getNama() {return nama;}
        
        void setNama(string nama) {this->nama = nama;}
        
        // getter setter berat
        string getBerat() {return berat;}
         
        void setBerat(string berat) {this->berat = berat;}
        
    // Destructor
    ~Sampah() {
    }
};