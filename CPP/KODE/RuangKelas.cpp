#pragma once
#include "Ruangan.cpp"

class RuangKelas : public Ruangan {
private:
    std::string jenisKelas;
    int jumlahKursi;
    bool proyektor;

public:
    // Konstruktor
    RuangKelas(std::string jenisKelas, int jumlahKursi, bool proyektor, 
               std::string noRuang, int lantai, std::string penanggungJawab)
        : Ruangan(noRuang, lantai, penanggungJawab), 
          jenisKelas(jenisKelas), jumlahKursi(jumlahKursi), proyektor(proyektor) {}

    // Getter
    std::string getJenisKelas() const { return jenisKelas; }
    int getJumlahKursi() const { return jumlahKursi; }
    bool getProyektor() const { return proyektor; }

    // Setter
    void setJenisKelas(std::string jenisKelas) { this->jenisKelas = jenisKelas; }
    void setJumlahKursi(int jumlahKursi) { this->jumlahKursi = jumlahKursi; }
    void setProyektor(bool adaProyektor) { this->proyektor = adaProyektor; }

    // Override Method Polimorfisme
    void tampilkanInfo() const override {
        std::cout << "[Ruang Kelas] ";
        Ruangan::tampilkanInfo();
        std::cout << " | Jenis: " << jenisKelas 
                  << " | Kursi: " << jumlahKursi 
                  << " | Proyektor: " << (proyektor ? "Ada" : "Tidak") << std::endl;
    }
};