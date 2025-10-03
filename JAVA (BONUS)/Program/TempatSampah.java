public class TempatSampah {
    // Atribut private
    private String idTempatSampah;
    private String lokasi;
    private String kapasitas;

    // Constructor kosong
    public TempatSampah() {
    }

    // Constructor
    public TempatSampah(String idTempatSampah, String lokasi, String kapasitas) {
        this.idTempatSampah = idTempatSampah;
        this.lokasi = lokasi;
        this.kapasitas = kapasitas;
    }

    // Getter Setter idTempatSampah
    public String getIdTempatSampah() {
        return idTempatSampah;
    }

    public void setIdTempatSampah(String idTempatSampah) {
        this.idTempatSampah = idTempatSampah;
    }

    // Getter Setter lokasi
    public String getLokasi() {
        return lokasi;
    }

    public void setLokasi(String lokasi) {
        this.lokasi = lokasi;
    }

    // Getter Setter kapasitas
    public String getKapasitas() {
        return kapasitas;
    }

    public void setKapasitas(String kapasitas) {
        this.kapasitas = kapasitas;
    }
}
