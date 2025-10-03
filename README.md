# TP3DPBO2425C1
TP 3 Hierarci inheritance

## Desain Relasi
<img width="621" height="797" alt="DesainOOP drawio" src="https://github.com/user-attachments/assets/13e618b9-8c4a-4ce8-8325-6827076912b8" />

## Penjelasan dari relasi ERD
desain ini amemiliki tema Bank sampah. Dengan total class sebanyal 9 buah diantaranya:
1. sampah : Parent dari sampah organik, non-organik, dan Elektronik yang memiliki atribut id, nama dan berat.
2. sampah organik : inheritance / keturunan dari sampah dengan atribut jenis organik
3. sampah non-organik : inheritance / keturunan dari sampah dengan atribut jenis non-organik
4. sampah elektronik : inheritance / keturunan dari sampah dengan atribut jenis elektronik
5. laporan sampah : ber asosiasi dengan sampah memiliki hubungan yang longgar dimana keduanya hanya bisa eksis tanpa mengandalkan salah satu nya.
6. transaksi : ber asosiasi dengan laporan sampah memiliki hubungan yang longgar dimana keduanya hanya bisa eksis tanpa mengandalkan salah satu nya.
7. nasabah : ber asosiasi dengan transaksi memiliki hubungan yang longgar dimana keduanya hanya bisa eksis tanpa mengandalkan salah satu nya.
8. bank sampah : memiliki 3 hubungan relasi diantaranya sebagai berikut :
  a. bank sampah memiliki relasi agregasi dengan nasabah karena bank sampah memiliki (has-a) nasabah. Dan jika bank sampah dihapus, nasabah bisa tetap eksis
  b. bank sampah memiliki relasi agregasi dengan tempat sampah karena bank sampah memiliki (has-a) tempat sampah. Dan jika bank sampah dihapus, tempat sampah bisa tetap eksis
  c. bank sampah memiliki relasi komposisi dengan transaksi karena transaksi sendiri sudah menjadi bagian dari bank sampah. Dan jika bank sampah terbakar / dihapus maka transaksi tersebut juga bisa hilang.
9. tempat sampah memiliki relasi agregasi dengan bank sampah alasan-nya seperti yang di jelaskan pada bagan di atas.
