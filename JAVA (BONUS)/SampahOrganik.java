public class SampahOrganik extends Sampah {
    // Atribut private
    private String jenisOrganik; // misal: sisa makanan, buah, daun

    // Constructor kosong
    public SampahOrganik() {
    }

    // Constructor
    public SampahOrganik(String idSampah, String nama, String berat, String jenisOrganik) {
        super(idSampah, nama, berat);
        this.jenisOrganik = jenisOrganik;
    }

    // Getter Setter jenisOrganik
    public String getJenisOrganik() {
        return jenisOrganik;
    }

    public void setJenisOrganik(String jenisOrganik) {
        this.jenisOrganik = jenisOrganik;
    }
}