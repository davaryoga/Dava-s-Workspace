# Dava-s-Workspace1
1. Inisialisasi dictionary "data" untuk menyimpan data, dengan kunci "ID Operator" dan nilai "ID Station Proses".

2. Loop utama:
   - Tampilkan menu utama:
     1. Masukkan Data
     2. Ubah Data
     3. Hapus Data
     4. Cari Data
     5. Scan Barcode
     6. Keluar

   - Terima pilihan menu utama dari pengguna.

   3. Jika pilihan adalah "Masukkan Data":
      - Terima "ID Operator" dan "ID Station Proses" dari pengguna.
      - Masukkan data ke dalam dictionary "data" dengan "ID Operator" sebagai kunci dan "ID Station Proses" sebagai nilai.

   4. Jika pilihan adalah "Ubah Data":
      - Terima "ID Operator" yang ingin diubah dari pengguna.
      - Jika "ID Operator" ada dalam dictionary "data":
        - Terima "ID Station Proses" baru dari pengguna.
        - Ubah nilai "ID Station Proses" dengan nilai baru.

   5. Jika pilihan adalah "Hapus Data":
      - Terima "ID Operator" yang ingin dihapus dari pengguna.
      - Jika "ID Operator" ada dalam dictionary "data":
        - Hapus data dengan "ID Operator" yang sesuai.

   6. Jika pilihan adalah "Cari Data":
      - Terima kata kunci pencarian dari pengguna.
      - Loop melalui setiap pasangan kunci dan nilai dalam dictionary "data":
        - Jika kata kunci ada dalam "ID Operator" atau "ID Station Proses" (ignorasi case):
          - Tampilkan pasangan "ID Operator" dan "ID Station Proses" yang sesuai.
        - Jika tidak ada yang cocok, tampilkan pesan bahwa data tidak ditemukan.

   7. Jika pilihan adalah "Scan Barcode":
      - Terima barcode yang ingin di-scan dari pengguna.
      - Tampilkan pesan bahwa barang dengan barcode tersebut berhasil di-scan.

   8. Jika pilihan adalah "Keluar":
      - Keluar dari loop utama dan program selesai.

   9. Jika pilihan tidak valid, tampilkan pesan bahwa pilihan tidak valid.

10. Selesai.
