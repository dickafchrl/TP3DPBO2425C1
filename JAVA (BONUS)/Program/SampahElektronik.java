public class SampahElektronik extends Sampah {
    // Atribut private
    private String jenisElektronik; // misal: baterai, lampu, kabel

    // Constructor kosong
    public SampahElektronik() {
    }

    // Constructor
    public SampahElektronik(String idSampah, String nama, String berat, String jenisElektronik) {
        super(idSampah, nama, berat);
        this.jenisElektronik = jenisElektronik;
    }

    // Getter Setter jenisElektronik
    public String getJenisElektronik() {
        return jenisElektronik;
    }

    public void setJenisElektronik(String jenisElektronik) {
        this.jenisElektronik = jenisElektronik;
    }
}
