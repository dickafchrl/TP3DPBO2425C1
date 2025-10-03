class Nasabah:
    def __init__(self, id_nasabah="", nama="", alamat=""):
        self.__id_nasabah = id_nasabah
        self.__nama = nama
        self.__alamat = alamat

    # getter setter id nasabah
    def get_id_nasabah(self):
        return self.__id_nasabah

    def set_id_nasabah(self, id_nasabah):
        self.__id_nasabah = id_nasabah

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