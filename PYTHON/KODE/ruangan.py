class Ruangan:
    def __init__(self, no_ruang: str, lantai: int, penanggung_jawab: str):
        self._no_ruang = no_ruang
        self._lantai = lantai
        self._penanggung_jawab = penanggung_jawab

    # Getter
    def get_no_ruang(self) -> str:
        return self._no_ruang

    def get_lantai(self) -> int:
        return self._lantai

    def get_pj(self) -> str:
        return self._penanggung_jawab

    # Setter
    def set_no_ruang(self, no_ruang: str):
        self._no_ruang = no_ruang

    def set_lantai(self, lantai: int):
        self._lantai = lantai

    def set_pj(self, nama_pj: str):
        self._penanggung_jawab = nama_pj

    # Method Polimorfisme
    def tampilkan_info(self):
        print(
            f"No. Ruang: {self._no_ruang} | Lantai: {self._lantai} | PJ: {self._penanggung_jawab}",
            end=""
        )