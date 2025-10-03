public class SampahNonOrganik extends Sampah {
    // Atribut private
    private String jenisNonOrganik; // misal: plastik, kaleng, kaca

    // Constructor kosong
    public SampahNonOrganik() {
    }

    // Constructor
    public SampahNonOrganik(String idSampah, String nama, String berat, String jenisNonOrganik) {
        super(idSampah, nama, berat);
        this.jenisNonOrganik = jenisNonOrganik;
    }

    // Getter Setter jenisNonOrganik
    public String getJenisNonOrganik() {
        return jenisNonOrganik;
    }

    public void setJenisNonOrganik(String jenisNonOrganik) {
        this.jenisNonOrganik = jenisNonOrganik;
    }
}
