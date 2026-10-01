#pragma once
#include "Ruangan.cpp"

class RuangDosen : public Ruangan {
private:
    std::string programStudi;
    int jumlahDosen;

public:
    // Konstruktor
    RuangDosen(std::string programStudi, int jumlahDosen, 
               std::string noRuang, int lantai, std::string penanggungJawab)
        : Ruangan(noRuang, lantai, penanggungJawab), 
          programStudi(programStudi), jumlahDosen(jumlahDosen) {}

    // Getter
    std::string getProgramStudi() const { return programStudi; }
    int getJumlahDosen() const { return jumlahDosen; }

    // Setter
    void setProgramStudi(std::string programStudi) { this->programStudi = programStudi; }
    void setJumlahDosen(int jumlahDosen) { this->jumlahDosen = jumlahDosen; }

    // Override Method Polimorfisme
    void tampilkanInfo() const override {
        std::cout << "[Ruang Dosen] ";
        Ruangan::tampilkanInfo();
        std::cout << " | Prodi: " << programStudi 
                  << " | Jumlah Dosen: " << jumlahDosen << std::endl;
    }
};