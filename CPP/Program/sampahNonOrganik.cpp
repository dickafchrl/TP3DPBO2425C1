#include <iostream>
#include <string>

using namespace std;

class SampahNonOrganik : public Sampah {
    // Atribut private
    private:
        string jenisNonOrganik; // Jenis sampah (plastik, kaleng, Dll).
    
    public:
        // constructor kosong
        SampahNonOrganik() {
        }

        // Constructor
        SampahNonOrganik(string idSampah, string nama, string berat, 
            string jenisNonOrganik) 
            : Sampah(idSampah, nama, berat) {
            this->jenisNonOrganik = jenisNonOrganik;
        }
        
        // getter setter jenis non organik
        string getJenisNonOrganik() {return jenisNonOrganik;}

        void setJenisNonOrganik(string jenisNonOrganik) {this->jenisNonOrganik = jenisNonOrganik;}
        
    // Destructor
    ~SampahNonOrganik() {
    }
};