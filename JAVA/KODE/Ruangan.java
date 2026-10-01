public class Ruangan {
    protected String noRuang;
    protected int lantai;
    protected String penanggungJawab;

    // Konstruktor
    public Ruangan(String noRuang, int lantai, String penanggungJawab) {
        this.noRuang = noRuang;
        this.lantai = lantai;
        this.penanggungJawab = penanggungJawab;
    }

    // Getter
    public String getNoRuang() {
        return noRuang;
    }

    public int getLantai() {
        return lantai;
    }

    public String getPJ() {
        return penanggungJawab;
    }

    // Setter
    public void setNoRuang(String noRuang) {
        this.noRuang = noRuang;
    }

    public void setLantai(int lantai) {
        this.lantai = lantai;
    }

    public void setPJ(String namaPJ) {
        this.penanggungJawab = namaPJ;
    }

    // Method Polimorfisme
    public void tampilkanInfo() {
        System.out.print(
            "No. Ruang: " + noRuang +
            " | Lantai: " + lantai +
            " | PJ: " + penanggungJawab
        );
    }
}