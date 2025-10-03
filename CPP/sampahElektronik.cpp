#include <iostream>
#include <string>

using namespace std;

class SampahElektronik : public Sampah {
    // Atribut private
    private:
        string jenisElektronik; // Jenis sampah (Batre, Lampu, Dll).
    
    public:
        // constructor kosong
        SampahElektronik() {
        }

        // Constructor
        SampahElektronik(string idSampah, string nama, string berat, 
            string jenisElektronik) 
            : Sampah(idSampah, nama, berat) {
            this->jenisElektronik = jenisElektronik;
        }
        
        // getter setter jenis elektronik
        string getJenisElektronik() {return jenisElektronik;}

        void setJenisElektronik(string jenisElektronik) {this->jenisElektronik = jenisElektronik;}
        
    // Destructor
    ~SampahElektronik() {
    }
};