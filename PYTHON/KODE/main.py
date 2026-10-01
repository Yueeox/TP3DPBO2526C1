from gedung import Gedung
from ruangKelas import RuangKelas
from ruangDosen import RuangDosen


def main():
    # 1. Inisialisasi Objek Gedung
    gedung_utama = Gedung(
        "Gedung Japan International Cooperation Agency",
        "Jl. in aja dulu"
    )

    # 2. Mengisi Data Awal
    gedung_utama.add_ruang(
        RuangKelas("Laboratorium Komputer", 40, True, "RK-101", 1, "Budi Santoso")
    )
    gedung_utama.add_ruang(
        RuangDosen("Ilmu Komputer", 12, "RD-201", 2, "Dr. Ahmad")
    )

    # 3. Tampilkan Data SEBELUM Ditambahkan Data Baru
    print(">>> DATA RUANGAN SEBELUM DITAMBAHKAN <<<")
    gedung_utama.tampilkan_gedung()

    # 4. Penambahan Data Baru
    print("[Sistem] Menambahkan 2 Ruangan Baru...")
    print()

    kelas_baru = RuangKelas("Teori Reguler", 60, True, "RK-102", 1, "Siti Rahma")
    dosen_baru = RuangDosen("Pendidikan Ilmu Komputer", 8, "RD-202", 2, "Prof. Handoko")

    gedung_utama.add_ruang(kelas_baru)
    gedung_utama.add_ruang(dosen_baru)

    # 5. Tampilkan Data SESUDAH Ditambahkan Data Baru
    print(">>> DATA RUANGAN SESUDAH DITAMBAHKAN <<<")
    gedung_utama.tampilkan_gedung()


if __name__ == "__main__":
    main()