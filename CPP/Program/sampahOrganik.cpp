#include <iostream>
#include <string>

using namespace std;

class SampahOrganik : public Sampah {
    // Atribut private
    private:
        string jenisOrganik; // Jenis sampah (sisa makanan, buah, Dll).
    
    public:
        // constructor kosong
        SampahOrganik() {
        }

        // Constructor
        SampahOrganik(string idSampah, string nama, string berat, 
            string jenisOrganik) 
            : Sampah(idSampah, nama, berat) {
            this->jenisOrganik = jenisOrganik;
        }
        
        // getter setter jenis Organik
        string getJenisOrganik() {return jenisOrganik;}

        void setJenisOrganik(string jenisOrganik) {this->jenisOrganik = jenisOrganik;}
        
    // Destructor
    ~SampahOrganik() {
    }
};