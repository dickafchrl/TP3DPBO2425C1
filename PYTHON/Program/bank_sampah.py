from nasabah import Nasabah
from tempat_sampah import TempatSampah
from transaksi import Transaksi

class BankSampah:
    def __init__(self, id_bank_sampah="", nama="", alamat=""):
        self.__id_bank_sampah = id_bank_sampah
        self.__nama = nama
        self.__alamat = alamat
        self.__daftar_nasabah = []          # agregasi
        self.__daftar_tempat_sampah = []    # agregasi
        self.__daftar_transaksi = []        # komposisi

    # getter setter id
    def get_id_bank_sampah(self):
        return self.__id_bank_sampah

    def set_id_bank_sampah(self, id_bank_sampah):
        self.__id_bank_sampah = id_bank_sampah

    # getter setter nama
    def get_nama(self):
        return self.__nama

    def set_nama(self, nama):
        self.__nama = nama

    # getter setter alamat
    def get_alamat(self):
        return self.__alamat

    def set_alamat(self, alamat):
        self.__alamat = alamat

    # tambah object nasabah
    def tambah_nasabah(self, nasabah: Nasabah):
        self.__daftar_nasabah.append(nasabah)

    # tambah object tempat sampah
    def tambah_tempat_sampah(self, tempat: TempatSampah):
        self.__daftar_tempat_sampah.append(tempat)

    # tambah object transaksi
    def tambah_transaksi(self, transaksi: Transaksi):
        self.__daftar_transaksi.append(transaksi)

    # getter daftar
    def get_daftar_nasabah(self):
        return self.__daftar_nasabah

    def get_daftar_tempat_sampah(self):
        return self.__daftar_tempat_sampah

    def get_daftar_transaksi(self):
        return self.__daftar_transaksi
