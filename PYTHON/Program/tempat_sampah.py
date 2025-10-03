class TempatSampah:
    def __init__(self, id_tempat_sampah="", lokasi="", kapasitas=""):
        self.__id_tempat_sampah = id_tempat_sampah
        self.__lokasi = lokasi
        self.__kapasitas = kapasitas

    # getter setter id
    def get_id_tempat_sampah(self):
        return self.__id_tempat_sampah

    def set_id_tempat_sampah(self, id_tempat_sampah):
        self.__id_tempat_sampah = id_tempat_sampah

    # getter setter lokasi
    def get_lokasi(self):
        return self.__lokasi

    def set_lokasi(self, lokasi):
        self.__lokasi = lokasi

    # getter setter kapasitas
    def get_kapasitas(self):
        return self.__kapasitas

    def set_kapasitas(self, kapasitas):
        self.__kapasitas = kapasitas
