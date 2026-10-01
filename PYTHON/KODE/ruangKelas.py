from ruangan import Ruangan


class RuangKelas(Ruangan):
    def __init__(
        self,
        jenis_kelas: str,
        jumlah_kursi: int,
        proyektor: bool,
        no_ruang: str,
        lantai: int,
        penanggung_jawab: str
    ):
        super().__init__(no_ruang, lantai, penanggung_jawab)
        self._jenis_kelas = jenis_kelas
        self._jumlah_kursi = jumlah_kursi
        self._proyektor = proyektor

    # Getter
    def get_jenis_kelas(self) -> str:
        return self._jenis_kelas

    def get_jumlah_kursi(self) -> int:
        return self._jumlah_kursi

    def get_proyektor(self) -> bool:
        return self._proyektor

    # Setter
    def set_jenis_kelas(self, jenis_kelas: str):
        self._jenis_kelas = jenis_kelas

    def set_jumlah_kursi(self, jumlah_kursi: int):
        self._jumlah_kursi = jumlah_kursi

    def set_proyektor(self, ada_proyektor: bool):
        self._proyektor = ada_proyektor

    # Override Method Polimorfisme
    def tampilkan_info(self):
        print("[Ruang Kelas] ", end="")
        super().tampilkan_info()
        status_proyektor = "Ada" if self._proyektor else "Tidak"
        print(
            f" | Jenis: {self._jenis_kelas} | Kursi: {self._jumlah_kursi} | Proyektor: {status_proyektor}"
        )