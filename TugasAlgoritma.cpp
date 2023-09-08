# data_manager.py

# Inisialisasi dictionary untuk menyimpan data
data = {}

# Fungsi untuk memasukkan data
def masukkan_data():
    key = input("Masukkan kunci data: ")
    value = input("Masukkan nilai data: ")
    data[key] = value
    print("Data berhasil dimasukkan.")

# Fungsi untuk mengubah data
def ubah_data():
    key = input("Masukkan kunci data yang ingin diubah: ")
    if key in data:
        value = input("Masukkan nilai data baru: ")
        data[key] = value
        print("Data berhasil diubah.")
    else:
        print("Kunci data tidak ditemukan.")

# Fungsi untuk menghapus data
def hapus_data():
    key = input("Masukkan kunci data yang ingin dihapus: ")
    if key in data:
        del data[key]
        print("Data berhasil dihapus.")
    else:
        print("Kunci data tidak ditemukan.")

# Fungsi untuk melakukan scan barcode
def scan_barcode():
    barcode = input("Masukkan barcode yang ingin di-scan: ")
    print(f"Barang dengan barcode {barcode} berhasil di-scan.")

# Fungsi untuk menampilkan menu
def tampilkan_menu():
    print("Pilih menu:")
    print("1. Masukan Data")
    print("2. Ubah Data")
    print("3. Hapus Data")
    print("4. Scan barcode")
    print("5. Kirim Data")
    print("6. Keluar")

# Fungsi untuk mengirim data
def kirim_data():
    print("Data yang akan dikirim:")
    for key, value in data.items():
        print(f"{key}: {value}")
    print("Data berhasil dikirim.")

# Fungsi untuk mencari data


def cari_data():
    kata_kunci = input("Masukkan kata kunci pencarian: ")
    found = False
    for key, value in data.items():
        if kata_kunci.lower() in key.lower() or kata_kunci.lower() in value.lower():
            print(f"Kunci: {key}, Nilai: {value}")
            found = True
    if not found:
        print("Data tidak ditemukan.")

if __name__ == "__main__":
    data = {
        "kunci1": "nilai1",
        "kunci2": "nilai2",
        "kunci3": "nilai3"
    }

    kata_kunci = input("Masukkan kata kunci pencarian: ")
    cari_data(data, kata_kunci)

# Fungsi untuk menjalankan program utama
def jalankan_program():
    while True:
        tampilkan_menu()
        pilihan = input("Pilih menu (1/2/3/4/5/6): ")
        
        if pilihan == "1":
            masukkan_data()
        elif pilihan == "2":
            ubah_data()
        elif pilihan == "3":
            hapus_data()
        elif pilihan == "4":
            scan_barcode()
        elif pilihan == "5":
            kirim_data()
        elif pilihan == "6":
            print("Program selesai.")
            break
        else:
            print("Pilihan tidak valid. Silakan pilih menu yang benar.")

# Jika modul ini dijalankan sebagai program utama, jalankan programnya
if __name__ == "__main__":
    jalankan_program()
