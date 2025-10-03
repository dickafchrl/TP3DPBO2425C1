from sampah import Sampah

class SampahOrganik(Sampah):
    def __init__(self, id_sampah="", nama="", berat="", jenis_organik=""):
        super().__init__(id_sampah, nama, berat)
        self.__jenis_organik = jenis_organik

    # getter setter jenis organik
    def get_jenis_organik(self):
        return self.__jenis_organik

    def set_jenis_organik(self, jenis_organik):
        self.__jenis_organik = jenis_organik
