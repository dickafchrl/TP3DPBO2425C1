from bank_sampah import BankSampah
from nasabah import Nasabah
from tempat_sampah import TempatSampah
from laporan_sampah import LaporanSampah
from transaksi import Transaksi

def tampilkan_data(bank: BankSampah):
    print("\n===== DATA BANK SAMPAH =====") 
    print("ID Bank     :", bank.get_id_bank_sampah())
    print("Nama        :", bank.get_nama())
    print("Alamat      :", bank.get_alamat())

    print("\n--- Daftar Nasabah ---")
    for n in bank.get_daftar_nasabah():
        print(f"{n.get_id_nasabah()} - {n.get_nama()} - {n.get_alamat()}")  

    print("\n--- Daftar Tempat Sampah ---")
    for t in bank.get_daftar_tempat_sampah():
        print(f"{t.get_id_tempat_sampah()} - {t.get_lokasi()} - {t.get_kapasitas()}")

    print("\n--- Daftar Transaksi ---")
    for tr in bank.get_daftar_transaksi():
        print(f"Transaksi {tr.get_id_transaksi()} | Tanggal: {tr.get_tanggal()}")
        for lap in tr.get_daftar_sampah():
            print(f"   {lap.get_id_laporan_sampah()} - Total Transaksi: {lap.get_total_transaksi()} - Total Berat: {lap.get_total_berat()}")

def main():
    # Buat Bank Sampah
    bank = BankSampah("BS001", "Bank Sampah Sejahtera", "Jl. Merdeka No.10")

    # Data awal
    n1 = Nasabah("N001", "Andi", "Jl. Mawar No.1")
    n2 = Nasabah("N002", "Budi", "Jl. Melati No.2")
    bank.tambah_nasabah(n1)
    bank.tambah_nasabah(n2)

    t1 = TempatSampah("TS001", "Depan Kantor RW", "100kg")
    bank.tambah_tempat_sampah(t1)

    l1 = LaporanSampah("L001", "10", "50kg")
    tr1 = Transaksi("T001", "2025-10-01", [l1])
    bank.tambah_transaksi(tr1)

    print("=== DATA AWAL ===")
    tampilkan_data(bank)

    # Tambah data baru (statis)
    n3 = Nasabah("N003", "Citra", "Jl. Kenanga No.3")
    bank.tambah_nasabah(n3)

    t2 = TempatSampah("TS002", "Belakang Sekolah", "200kg")
    bank.tambah_tempat_sampah(t2)

    l2 = LaporanSampah("L002", "7", "30kg")
    l3 = LaporanSampah("L003", "5", "15kg")
    tr2 = Transaksi("T002", "2025-10-02", [l2, l3])
    bank.tambah_transaksi(tr2)

    print("\n=== DATA SETELAH PENAMBAHAN ===")
    tampilkan_data(bank)

if __name__ == "__main__":
    main()