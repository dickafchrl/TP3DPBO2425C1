#include <iostream>
#include <string>

using namespace std;

class TempatSampah {
    // Atribut private
    private:
        string idTempatSampah;
        string lokasi; 
        string kapasitas;

    public:
        // Constructor kosong
        TempatSampah() {
        }

        // Constructor
        TempatSampah(string idTempatSampah, string lokasi, string kapasitas) {
            this->idTempatSampah = idTempatSampah;
            this->lokasi = lokasi;
            this->kapasitas = kapasitas;
        }

        // getter setter id
        string getIdTempatSampah() {return idTempatSampah;}
        
        void setIdTempatSampah(string idTempatSampah) {this->idTempatSampah = idTempatSampah;}
        
        // getter setter lokasi
        string getLokasi() {return lokasi;}
        
        void setLokasi(string lokasi) {this->lokasi = lokasi;}
        
        // getter setter kapasitas
        string getKapasitas() {return kapasitas;}
        
        void setKapasitas(string kapasitas) {this->kapasitas = kapasitas;}
        
    // Destructor
    ~TempatSampah() {    
    }
};