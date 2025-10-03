class LaporanSampah:
    def __init__(self, id_laporan_sampah="", total_transaksi="", total_berat=""):
        self.__id_laporan_sampah = id_laporan_sampah
        self.__total_transaksi = total_transaksi
        self.__total_berat = total_berat

    # getter setter id laporan sampah
    def get_id_laporan_sampah(self):
        return self.__id_laporan_sampah

    def set_id_laporan_sampah(self, id_laporan_sampah):
        self.__id_laporan_sampah = id_laporan_sampah

    # getter setter total transaksi
    def get_total_transaksi(self):
        return self.__total_transaksi

    def set_total_transaksi(self, total_transaksi):
        self.__total_transaksi = total_transaksi

    # getter setter total berat
    def get_total_berat(self):
        return self.__total_berat

    def set_total_berat(self, total_berat):
        self.__total_berat = total_berat
