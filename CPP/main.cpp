#include <iostream>
#include <vector>
#include "bankSampah.cpp"
#include "sampah.cpp"
#include "sampahOrganik.cpp"
#include "sampahNonOrganik.cpp"
#include "sampahElektronik.cpp"

using namespace std;

void tampilkanData(BankSampah &bank) {
    cout << "\n===== DATA BANK SAMPAH =====" << endl;
    cout << "ID Bank     : " << bank.getIdBankSampah() << endl;
    cout << "Nama        : " << bank.getNama() << endl;
    cout << "Alamat      : " << bank.getAlamat() << endl;

    cout << "\n--- Daftar Nasabah ---" << endl;
    for (auto &n : bank.getDaftarNasabah()) {
        cout << n.getIdNasabah() << " - " << n.getNama() << " - " << n.getAlamat() << endl;
    }

    cout << "\n--- Daftar Tempat Sampah ---" << endl;
    for (auto &t : bank.getDaftarTempatSampah()) {
        cout << t.getIdTempatSampah() << " - " << t.getLokasi() << " - " << t.getKapasitas() << endl;
    }

    cout << "\n--- Daftar Transaksi ---" << endl;
    for (auto &tr : bank.getDaftarTransaksi()) {
        cout << "Transaksi " << tr.getIdTransaksi() 
             << " | Tanggal: " << tr.getTanggal() << endl;
        
        for (auto &lap : tr.getDaftarSampah()) {
            cout << "   " << lap.getIdLaporanSampah()
                 << " - Total Transaksi: " << lap.getTotalTransaksi()
                 << " - Total Berat: " << lap.getTotalBerat() << endl;
        }
    }
}

int main() {
    // Buat Bank Sampah
    BankSampah bank("BS001", "Bank Sampah Sejahtera", "Jl. Merdeka No.10");

    // Data awal
    Nasabah n1("N001", "Andi", "Jl. Mawar No.1");
    Nasabah n2("N002", "Budi", "Jl. Melati No.2");
    bank.tambahNasabah(n1);
    bank.tambahNasabah(n2);

    TempatSampah t1("TS001", "Depan Kantor RW", "100kg");
    bank.tambahTempatSampah(t1);

    LaporanSampah l1("L001", "10", "50kg");
    Transaksi tr1("T001", "2025-10-01", {l1});
    bank.tambahTransaksi(tr1);

    cout << "=== DATA AWAL ===" << endl;
    tampilkanData(bank);

    // Tambahkan data baru (statis)
    Nasabah n3("N003", "Citra", "Jl. Kenanga No.3");
    bank.tambahNasabah(n3);

    TempatSampah t2("TS002", "Belakang Sekolah", "200kg");
    bank.tambahTempatSampah(t2);

    LaporanSampah l2("L002", "7", "30kg");
    LaporanSampah l3("L003", "5", "15kg");
    Transaksi tr2("T002", "2025-10-02", {l2, l3});
    bank.tambahTransaksi(tr2);

    cout << "\n=== DATA SETELAH PENAMBAHAN ===" << endl;
    tampilkanData(bank);

    return 0;
}