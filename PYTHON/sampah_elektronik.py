from sampah import Sampah

class SampahElektronik(Sampah):
    def __init__(self, id_sampah="", nama="", berat="", jenis_elektronik=""):
        super().__init__(id_sampah, nama, berat)
        self.__jenis_elektronik = jenis_elektronik

    # getter setter jenis elektronik
    def get_jenis_elektronik(self):
        return self.__jenis_elektronik

    def set_jenis_elektronik(self, jenis_elektronik):
        self.__jenis_elektronik = jenis_elektronik
