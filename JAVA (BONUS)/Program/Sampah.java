public class Sampah {
    // Atribut private
    private String idSampah;
    private String nama;
    private String berat;

    // Constructor kosong
    public Sampah() {
    }

    // Constructor
    public Sampah(String idSampah, String nama, String berat) {
        this.idSampah = idSampah;
        this.nama = nama;
        this.berat = berat;
    }

    // Getter Setter idSampah
    public String getIdSampah() {
        return idSampah;
    }

    public void setIdSampah(String idSampah) {
        this.idSampah = idSampah;
    }

    // Getter Setter nama
    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    // Getter Setter berat
    public String getBerat() {
        return berat;
    }

    public void setBerat(String berat) {
        this.berat = berat;
    }
}
