# sampah.py

class Sampah:
    def __init__(self, id_sampah="", nama="", berat=""):
        self.__id_sampah = id_sampah
        self.__nama = nama
        self.__berat = berat

    # getter setter id
    def get_id_sampah(self):
        return self.__id_sampah

    def set_id_sampah(self, id_sampah):
        self.__id_sampah = id_sampah

    # getter setter nama
    def get_nama(self):
        return self.__nama

    def set_nama(self, nama):
        self.__nama = nama

    # getter setter berat
    def get_berat(self):
        return self.__berat

    def set_berat(self, berat):
        self.__berat = berat
