import java.util.ArrayList;
import java.util.List;

public class BankSampah {
    private String idBankSampah;
    private String nama;
    private String alamat;

    private List<Nasabah> daftarNasabah;             // agregasi
    private List<TempatSampah> daftarTempatSampah;   // agregasi
    private List<Transaksi> daftarTransaksi;         // komposisi

    // Constructor kosong
    public BankSampah() {
        this.daftarNasabah = new ArrayList<>();
        this.daftarTempatSampah = new ArrayList<>();
        this.daftarTransaksi = new ArrayList<>();
    }

    // Constructor
    public BankSampah(String idBankSampah, String nama, String alamat) {
        this.idBankSampah = idBankSampah;
        this.nama = nama;
        this.alamat = alamat;
        this.daftarNasabah = new ArrayList<>();
        this.daftarTempatSampah = new ArrayList<>();
        this.daftarTransaksi = new ArrayList<>();
    }

    // Getter Setter idBankSampah
    public String getIdBankSampah() {
        return idBankSampah;
    }

    public void setIdBankSampah(String idBankSampah) {
        this.idBankSampah = idBankSampah;
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

    // Tambah Nasabah
    public void tambahNasabah(Nasabah nasabah) {
        daftarNasabah.add(nasabah);
    }

    // Tambah TempatSampah
    public void tambahTempatSampah(TempatSampah tempat) {
        daftarTempatSampah.add(tempat);
    }

    // Tambah Transaksi
    public void tambahTransaksi(Transaksi transaksi) {
        daftarTransaksi.add(transaksi);
    }

    // Getter daftarNasabah
    public List<Nasabah> getDaftarNasabah() {
        return daftarNasabah;
    }

    // Getter daftarTempatSampah
    public List<TempatSampah> getDaftarTempatSampah() {
        return daftarTempatSampah;
    }

    // Getter daftarTransaksi
    public List<Transaksi> getDaftarTransaksi() {
        return daftarTransaksi;
    }
}
