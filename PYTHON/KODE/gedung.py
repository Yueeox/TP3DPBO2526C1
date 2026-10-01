from ruangan import Ruangan


class Gedung:
    def __init__(self, nama_gedung: str, lokasi: str):
        self._nama_gedung = nama_gedung
        self._lokasi = lokasi
        self._daftar_ruang = []  # List[Ruangan]

    # Getter
    def get_nama_gedung(self) -> str:
        return self._nama_gedung

    def get_lokasi(self) -> str:
        return self._lokasi

    # Setter
    def set_nama_gedung(self, nama_gedung: str):
        self._nama_gedung = nama_gedung

    def set_lokasi(self, lokasi: str):
        self._lokasi = lokasi

    # Method Tambah Ruangan
    def add_ruang(self, ruang: Ruangan):
        self._daftar_ruang.append(ruang)

    # Tampilkan Informasi Gedung
    def tampilkan_gedung(self):
        print("=" * 58)
        print(f"GEDUNG: {self._nama_gedung} (Lokasi: {self._lokasi})")
        print("=" * 58)

        if not self._daftar_ruang:
            print("(Belum ada data ruangan yang terdaftar)")
        else:
            for i, ruang in enumerate(self._daftar_ruang, start=1):
                print(f"{i}. ", end="")
                ruang.tampilkan_info()

        print("=" * 58)
        print()