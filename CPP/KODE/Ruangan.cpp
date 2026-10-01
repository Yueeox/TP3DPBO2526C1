#pragma once
#include <iostream>
#include <string>

class Ruangan {
protected:
    std::string noRuang;
    int lantai;
    std::string penanggungJawab;

public:
    // Konstruktor
    Ruangan(std::string noRuang, int lantai, std::string penanggungJawab)
        : noRuang(noRuang), lantai(lantai), penanggungJawab(penanggungJawab) {}

    // Destruktor
    virtual ~Ruangan() {}

    // Getter
    std::string getNoRuang() const { return noRuang; }
    int getLantai() const { return lantai; }
    std::string getPJ() const { return penanggungJawab; }

    // Setter
    void setNoRuang(std::string noRuang) { this->noRuang = noRuang; }
    void setLantai(int lantai) { this->lantai = lantai; }
    void setPJ(std::string namaPJ) { this->penanggungJawab = namaPJ; }

    // Method Polimorfisme
    virtual void tampilkanInfo() const {
        std::cout << "No. Ruang: " << noRuang 
                  << " | Lantai: " << lantai 
                  << " | PJ: " << penanggungJawab;
    }
};