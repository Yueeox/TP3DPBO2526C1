import java.util.ArrayList;
import java.util.List;

public class Gedung {
    private String namaGedung;
    private String lokasi;
    private List<Ruangan> daftarRuang;

    // Konstruktor
    public Gedung(String nama, String lokasi) {
        this.namaGedung = nama;
        this.lokasi = lokasi;
        this.daftarRuang = new ArrayList<>();
    }

    // Getter
    public String getNamaGedung() {
        return namaGedung;
    }

    public String getLokasi() {
        return lokasi;
    }

    // Setter
    public void setNamaGedung(String namaGedung) {
        this.namaGedung = namaGedung;
    }

    public void setLokasi(String lokasi) {
        this.lokasi = lokasi;
    }

    // Method Tambah Ruangan
    public void addRuang(Ruangan ruang) {
        daftarRuang.add(ruang);
    }

    // Tampilkan Informasi Gedung
    public void tampilkanGedung() {
        System.out.println("==========================================================");
        System.out.println("GEDUNG: " + namaGedung + " (Lokasi: " + lokasi + ")");
        System.out.println("==========================================================");

        if (daftarRuang.isEmpty()) {
            System.out.println("(Belum ada data ruangan yang terdaftar)");
        } else {
            for (int i = 0; i < daftarRuang.size(); i++) {
                System.out.print((i + 1) + ". ");
                daftarRuang.get(i).tampilkanInfo();
            }
        }
        System.out.println("==========================================================");
        System.out.println();
    }
}