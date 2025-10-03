import java.util.ArrayList;
import java.util.List;

public class Transaksi {
    // Atribut private
    private String idTransaksi;
    private String tanggal;
    private List<LaporanSampah> daftarSampah; // komposisi

    // Constructor kosong
    public Transaksi() {
        this.daftarSampah = new ArrayList<>();
    }

    // Constructor
    public Transaksi(String idTransaksi, String tanggal, List<LaporanSampah> daftarSampah) {
        this.idTransaksi = idTransaksi;
        this.tanggal = tanggal;
        this.daftarSampah = daftarSampah;
    }

    // Getter Setter idTransaksi
    public String getIdTransaksi() {
        return idTransaksi;
    }

    public void setIdTransaksi(String idTransaksi) {
        this.idTransaksi = idTransaksi;
    }

    // Getter Setter tanggal
    public String getTanggal() {
        return tanggal;
    }

    public void setTanggal(String tanggal) {
        this.tanggal = tanggal;
    }

    // Getter daftarSampah
    public List<LaporanSampah> getDaftarSampah() {
        return daftarSampah;
    }

    // Method tambah laporan sampah
    public void tambahLaporanSampah(LaporanSampah laporan) {
        this.daftarSampah.add(laporan);
    }
}
