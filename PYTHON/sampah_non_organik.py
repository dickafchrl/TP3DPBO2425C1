from sampah import Sampah

class SampahNonOrganik(Sampah):
    def __init__(self, id_sampah="", nama="", berat="", jenis_non_organik=""):
        super().__init__(id_sampah, nama, berat)
        self.__jenis_non_organik = jenis_non_organik

    # getter setter jenis non organik
    def get_jenis_non_organik(self):
        return self.__jenis_non_organik

    def set_jenis_non_organik(self, jenis_non_organik):
        self.__jenis_non_organik = jenis_non_organik