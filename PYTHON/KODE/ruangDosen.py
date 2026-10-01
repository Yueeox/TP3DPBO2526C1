from ruangan import Ruangan


class RuangDosen(Ruangan):
    def __init__(
        self,
        program_studi: str,
        jumlah_dosen: int,
        no_ruang: str,
        lantai: int,
        penanggung_jawab: str
    ):
        super().__init__(no_ruang, lantai, penanggung_jawab)
        self._program_studi = program_studi
        self._jumlah_dosen = jumlah_dosen

    # Getter
    def get_program_studi(self) -> str:
        return self._program_studi

    def get_jumlah_dosen(self) -> int:
        return self._jumlah_dosen

    # Setter
    def set_program_studi(self, program_studi: str):
        self._program_studi = program_studi

    def set_jumlah_dosen(self, jumlah_dosen: int):
        self._jumlah_dosen = jumlah_dosen

    # Override Method Polimorfisme
    def tampilkan_info(self):
        print("[Ruang Dosen] ", end="")
        super().tampilkan_info()
        print(f" | Prodi: {self._program_studi} | Jumlah Dosen: {self._jumlah_dosen}")