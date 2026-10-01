#include <iostream>
#include "Gedung.cpp"
#include "RuangKelas.cpp"
#include "RuangDosen.cpp"

int main() {
    // 1. Inisialisasi Objek Gedung
    Gedung gedungUtama("Gedung Japan International Cooperation Agency", "Jl. in aja dulu");

    // 2. Mengisi Data Awal
    gedungUtama.AddRuang(new RuangKelas("Laboratorium Komputer", 40, true, "RK-101", 1, "Budi Santoso"));
    gedungUtama.AddRuang(new RuangDosen("Ilmu Komputer", 12, "RD-201", 2, "Dr. Ahmad"));

    // 3. Tampilkan Data SEBELUM Ditambahkan Data Baru
    std::cout << ">>> DATA RUANGAN SEBELUM DITAMBAHKAN <<<" << std::endl;
    gedungUtama.tampilkanGedung();

    // 4. Penambahan Data Baru (Statis)
    std::cout << "[Sistem] Menambahkan 2 Ruangan Baru..." << std::endl << std::endl;
    
    // instansiasi
    RuangKelas* kelasBaru = new RuangKelas("Teori Reguler", 60, true, "RK-102", 1, "Siti Rahma");
    RuangDosen* dosenBaru = new RuangDosen("Pendidikan Ilmu Komputer", 8, "RD-202", 2, "Prof. Handoko");

    gedungUtama.AddRuang(kelasBaru);
    gedungUtama.AddRuang(dosenBaru);

    // 5. Tampilkan Data SESUDAH Ditambahkan Data Baru
    std::cout << ">>> DATA RUANGAN SESUDAH DITAMBAHKAN <<<" << std::endl;
    gedungUtama.tampilkanGedung();

    return 0;
}