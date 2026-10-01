public class RuangDosen extends Ruangan {
    private String programStudi;
    private int jumlahDosen;

    // Konstruktor
    public RuangDosen(String programStudi, int jumlahDosen,
                      String noRuang, int lantai, String penanggungJawab) {
        super(noRuang, lantai, penanggungJawab);
        this.programStudi = programStudi;
        this.jumlahDosen = jumlahDosen;
    }

    // Getter
    public String getProgramStudi() {
        return programStudi;
    }

    public int getJumlahDosen() {
        return jumlahDosen;
    }

    // Setter
    public void setProgramStudi(String programStudi) {
        this.programStudi = programStudi;
    }

    public void setJumlahDosen(int jumlahDosen) {
        this.jumlahDosen = jumlahDosen;
    }

    // Override Method Polimorfisme
    @Override
    public void tampilkanInfo() {
        System.out.print("[Ruang Dosen] ");
        super.tampilkanInfo();
        System.out.println(
            " | Prodi: " + programStudi +
            " | Jumlah Dosen: " + jumlahDosen
        );
    }
}