from laporan_sampah import LaporanSampah

class Transaksi:
    def __init__(self, id_transaksi="", tanggal="", daftar_sampah=None):
        self.__id_transaksi = id_transaksi
        self.__tanggal = tanggal
        self.__daftar_sampah = daftar_sampah if daftar_sampah is not None else []

    # getter setter id transaksi
    def get_id_transaksi(self):
        return self.__id_transaksi

    def set_id_transaksi(self, id_transaksi):
        self.__id_transaksi = id_transaksi

    # getter setter tanggal
    def get_tanggal(self):
        return self.__tanggal

    def set_tanggal(self, tanggal):
        self.__tanggal = tanggal

    # menambah laporan sampah (asosiasi)
    def tambah_sampah(self, sampah: LaporanSampah):
        self.__daftar_sampah.append(sampah)

    # Getter daftar sampah (list of object)
    def get_daftar_sampah(self):
        return self.__daftar_sampah
