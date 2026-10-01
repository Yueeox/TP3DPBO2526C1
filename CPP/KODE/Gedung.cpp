#pragma once
#include <vector>
#include "Ruangan.cpp"

class Gedung {
private:
    std::string namaGedung;
    std::string lokasi;
    std::vector<Ruangan*> daftarRuang;

public:
    // Konstruktor
    Gedung(std::string nama, std::string lokasi) 
        : namaGedung(nama), lokasi(lokasi) {}

    // Destruktor Komposisi (Menghapus seluruh objek Ruangan)
    ~Gedung() {
        for (Ruangan* r : daftarRuang) {
            delete r;
        }
        daftarRuang.clear();
    }

    // Getter
    std::string getNamaGedung() const { return namaGedung; }
    std::string getLokasi() const { return lokasi; }

    // Setter
    void setNamaGedung(std::string namaGedung) { this->namaGedung = namaGedung; }
    void setLokasi(std::string lokasi) { this->lokasi = lokasi; }

    // Method Tambah Ruangan
    void AddRuang(Ruangan* ruang) {
        daftarRuang.push_back(ruang);
    }

    // Tampilkan Informasi Gedung
    void tampilkanGedung() const {
        std::cout << "==========================================================" << std::endl;
        std::cout << "GEDUNG: " << namaGedung << " (Lokasi: " << lokasi << ")" << std::endl;
        std::cout << "==========================================================" << std::endl;
        if (daftarRuang.empty()) {
            std::cout << "(Belum ada data ruangan yang terdaftar)" << std::endl;
        } else {
            for (size_t i = 0; i < daftarRuang.size(); ++i) {
                std::cout << i + 1 << ". ";
                daftarRuang[i]->tampilkanInfo();
            }
        }
        std::cout << "==========================================================" << std::endl << std::endl;
    }
};