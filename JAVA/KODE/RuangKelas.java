public class RuangKelas extends Ruangan {
    private String jenisKelas;
    private int jumlahKursi;
    private boolean proyektor;

    // Konstruktor
    public RuangKelas(String jenisKelas, int jumlahKursi, boolean proyektor,
                      String noRuang, int lantai, String penanggungJawab) {
        super(noRuang, lantai, penanggungJawab);
        this.jenisKelas = jenisKelas;
        this.jumlahKursi = jumlahKursi;
        this.proyektor = proyektor;
    }

    // Getter
    public String getJenisKelas() {
        return jenisKelas;
    }

    public int getJumlahKursi() {
        return jumlahKursi;
    }

    public boolean getProyektor() {
        return proyektor;
    }

    // Setter
    public void setJenisKelas(String jenisKelas) {
        this.jenisKelas = jenisKelas;
    }

    public void setJumlahKursi(int jumlahKursi) {
        this.jumlahKursi = jumlahKursi;
    }

    public void setProyektor(boolean adaProyektor) {
        this.proyektor = adaProyektor;
    }

    // Override Method Polimorfisme
    @Override
    public void tampilkanInfo() {
        System.out.print("[Ruang Kelas] ");
        super.tampilkanInfo();
        System.out.println(
            " | Jenis: " + jenisKelas +
            " | Kursi: " + jumlahKursi +
            " | Proyektor: " + (proyektor ? "Ada" : "Tidak")
        );
    }
}