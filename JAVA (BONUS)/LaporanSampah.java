public class LaporanSampah {
    // Atribut private
    private String idLaporanSampah;
    private String totalTransaksi;
    private String totalBerat;

    // Constructor kosong
    public LaporanSampah() {
    }

    // Constructor
    public LaporanSampah(String idLaporanSampah, String totalTransaksi, String totalBerat) {
        this.idLaporanSampah = idLaporanSampah;
        this.totalTransaksi = totalTransaksi;
        this.totalBerat = totalBerat;
    }

    // Getter Setter idLaporanSampah
    public String getIdLaporanSampah() {
        return idLaporanSampah;
    }

    public void setIdLaporanSampah(String idLaporanSampah) {
        this.idLaporanSampah = idLaporanSampah;
    }

    // Getter Setter totalTransaksi
    public String getTotalTransaksi() {
        return totalTransaksi;
    }

    public void setTotalTransaksi(String totalTransaksi) {
        this.totalTransaksi = totalTransaksi;
    }

    // Getter Setter totalBerat
    public String getTotalBerat() {
        return totalBerat;
    }

    public void setTotalBerat(String totalBerat) {
        this.totalBerat = totalBerat;
    }
}
