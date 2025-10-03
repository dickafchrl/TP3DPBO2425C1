public class Nasabah {
    // Atribut private
    private String idNasabah;
    private String nama;
    private String alamat;

    // Constructor kosong
    public Nasabah() {
    }

    // Constructor
    public Nasabah(String idNasabah, String nama, String alamat) {
        this.idNasabah = idNasabah;
        this.nama = nama;
        this.alamat = alamat;
    }

    // Getter Setter idNasabah
    public String getIdNasabah() {
        return idNasabah;
    }

    public void setIdNasabah(String idNasabah) {
        this.idNasabah = idNasabah;
    }

    // Getter Setter nama
    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    // Getter Setter alamat
    public String getAlamat() {
        return alamat;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }
}