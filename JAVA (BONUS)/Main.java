import java.util.Arrays;

public class Main {
    public static void tampilkanData(BankSampah bank) {
        System.out.println("\n===== DATA BANK SAMPAH =====");
        System.out.println("ID Bank     : " + bank.getIdBankSampah());
        System.out.println("Nama        : " + bank.getNama());
        System.out.println("Alamat      : " + bank.getAlamat());

        System.out.println("\n--- Daftar Nasabah ---");
        for (Nasabah n : bank.getDaftarNasabah()) {
            System.out.println(n.getIdNasabah() + " - " + n.getNama() + " - " + n.getAlamat());
        }

        System.out.println("\n--- Daftar Tempat Sampah ---");
        for (TempatSampah t : bank.getDaftarTempatSampah()) {
            System.out.println(t.getIdTempatSampah() + " - " + t.getLokasi() + " - " + t.getKapasitas());
        }

        System.out.println("\n--- Daftar Transaksi ---");
        for (Transaksi tr : bank.getDaftarTransaksi()) {
            System.out.println("Transaksi " + tr.getIdTransaksi() + " | Tanggal: " + tr.getTanggal());
            for (LaporanSampah lap : tr.getDaftarSampah()) {
                System.out.println("   " + lap.getIdLaporanSampah() +
                        " - Total Transaksi: " + lap.getTotalTransaksi() +
                        " - Total Berat: " + lap.getTotalBerat());
            }
        }
    }

    public static void main(String[] args) {
        // Buat Bank Sampah
        BankSampah bank = new BankSampah("BS001", "Bank Sampah Sejahtera", "Jl. Merdeka No.10");

        // Data awal
        Nasabah n1 = new Nasabah("N001", "Andi", "Jl. Mawar No.1");
        Nasabah n2 = new Nasabah("N002", "Budi", "Jl. Melati No.2");
        bank.tambahNasabah(n1);
        bank.tambahNasabah(n2);

        TempatSampah t1 = new TempatSampah("TS001", "Depan Kantor RW", "100kg");
        bank.tambahTempatSampah(t1);

        LaporanSampah l1 = new LaporanSampah("L001", "10", "50kg");
        Transaksi tr1 = new Transaksi("T001", "2025-10-01", Arrays.asList(l1));
        bank.tambahTransaksi(tr1);

        System.out.println("=== DATA AWAL ===");
        tampilkanData(bank);

        // Tambahkan data baru (statis)
        Nasabah n3 = new Nasabah("N003", "Citra", "Jl. Kenanga No.3");
        bank.tambahNasabah(n3);

        TempatSampah t2 = new TempatSampah("TS002", "Belakang Sekolah", "200kg");
        bank.tambahTempatSampah(t2);

        LaporanSampah l2 = new LaporanSampah("L002", "7", "30kg");
        LaporanSampah l3 = new LaporanSampah("L003", "5", "15kg");
        Transaksi tr2 = new Transaksi("T002", "2025-10-02", Arrays.asList(l2, l3));
        bank.tambahTransaksi(tr2);

        System.out.println("\n=== DATA SETELAH PENAMBAHAN ===");
        tampilkanData(bank);
    }
}