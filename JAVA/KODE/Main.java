public class Main {
    public static void main(String[] args) {
        // 1. Inisialisasi Objek Gedung
        Gedung gedungUtama = new Gedung(
            "Gedung Japan International Cooperation Agency",
            "Jl. in aja dulu"
        );

        // 2. Mengisi Data Awal
        gedungUtama.addRuang(
            new RuangKelas("Laboratorium Komputer", 40, true, "RK-101", 1, "Budi Santoso")
        );
        gedungUtama.addRuang(
            new RuangDosen("Ilmu Komputer", 12, "RD-201", 2, "Dr. Ahmad")
        );

        // 3. Tampilkan Data SEBELUM Ditambahkan Data Baru
        System.out.println(">>> DATA RUANGAN SEBELUM DITAMBAHKAN <<<");
        gedungUtama.tampilkanGedung();

        // 4. Penambahan Data Baru
        System.out.println("[Sistem] Menambahkan 2 Ruangan Baru...");
        System.out.println();

        RuangKelas kelasBaru = new RuangKelas(
            "Teori Reguler", 60, true, "RK-102", 1, "Siti Rahma"
        );
        RuangDosen dosenBaru = new RuangDosen(
            "Pendidikan Ilmu Komputer", 8, "RD-202", 2, "Prof. Handoko"
        );

        gedungUtama.addRuang(kelasBaru);
        gedungUtama.addRuang(dosenBaru);

        // 5. Tampilkan Data SESUDAH Ditambahkan Data Baru
        System.out.println(">>> DATA RUANGAN SESUDAH DITAMBAHKAN <<<");
        gedungUtama.tampilkanGedung();
    }
}