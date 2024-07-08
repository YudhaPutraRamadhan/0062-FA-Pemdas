/*! \mainpage Sistem Manajemen Mata Kuliah
*
* \section intro_sec Pengantar
* Selamat datang di dokumentasi Sistem Manajemen Mata Kuliah
* Sistem ini dirancang untuk mengelola Mata Kuliah untuk menghitung nilai Mata Kuliah Perograman dan Jaringan
*
* \section structure_sec Struktur Kode
* Kode ini terdiri dari tiga kelas utama, yaitu :
* - \b MataKuliah : Menangani operasi yang terkait dengan Perograman dan Jaringan
* - \b Pemrograman : Menangani informasi nilai akhir pada mata kuliah Pemrograman
* - \b Jaringan : Menangani informasi nilai akhir pada mata kuliah Jaringan
*
* \section setup_sec Setup dan Konfigurasi
* Untuk menjalankan sistem ini, pastikan anda memiliki compiler c++
* Kompilasi dan jalankan file ini menggunakan compiler c++
*
* \section author_sec Tentang Pengembang
* Sistem ini dibuat dan dikembangkan oleh YudhaPutraRamadhan sebagai bagian dari ujian mata kuliah Pemrograman Dasar
*
* \section note_sec Catatan
* Dokumentasi ini dihasilkan menggunakan Doxygen
*/

/**
 * @file UCP Final Pemdas.cpp
 * @author Yudha Putra Ramadhan (YudhaRittan.com)
 * @brief Sistem manajemen karyawan dan proyek untuk perusahaan
 * @version 0.1
 * @date 2024-06-19
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
using namespace std;

class MataKuliah {
private:
    // isi dengan access modifier yang dibutuhkan
    float Presensi;
    float Activity;
    float Exercise;
    float TugasAkhir;
    // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
    MataKuliah()
    {
        Presensi = 0.0;
        Activity = 0.0;
        Exercise = 0.0;
        TugasAkhir = 0.0;
        // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
    }
    virtual void namaMataKuliah() {

        // tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
        void setPresensi(float nilai)
        {
            this->presensi = nilai;
        }
        float getPresensi()
        {
            return presensi;
        }

        // tambahkan setter dan getter lain yang dibutuhkan dibawah ini
    }
};

class Pemrograman : public MataKuliah {
public:

    void inputNilai() {
        cout << "Masukkan Nilai Presensi : ";
        cin >> Presensi;
        cout << "Masukkan Nilai Activity : ";
        cin >> Activity;
        cout << "Masukkan Nilai Exercise : ";
        cin >> Exercise;
        cout << "Masukkan Nilai Tugas Akhir : ";
        cin >> TugasAkhir;
    }

    double hitungNilaiAkhir() {
        return (Presensi + Activity + Exercise + TugasAkhir) / 4;
    }

    void cekKelulusan() {
        double nilaiAKhir = hitungNilaiAkhir();
        cout << "Nilai Akhir :" << nilaiAKhir << endl;
        if (nilaiAKhir >= 75) {
            cout << "Selamat anda dinyatakan lulus!" << endl;
        }
        else {
            cout << "Mohon maaf anda dinyatakan tidak lulus" << endl;
        }
    }
};
// isi disini untuk mengisi kelas pemrograman


class Jaringan : public MataKuliah {

    void inputNilai() {
        cout << "Masukkan Nilai Presensi : ";
        cin >> Presensi;
        cout << "Masukkan Nilai Activity : ";
        cin >> Activity;
        cout << "Masukkan Nilai Exercise : ";
        cin >> Exercise;
        cout << "Masukkan Nilai Tugas Akhir : ";
        cin >> TugasAkhir;
    }

    double hitungNilaiAkhir() {
        return (Presensi + Activity + Exercise + TugasAkhir) / 4;
    }

    void cekKelulusan() {
        double nilaiAKhir = hitungNilaiAkhir();
        cout << "Nilai Akhir :" << nilaiAKhir << endl;
        if (nilaiAKhir >= 75) {
            cout << "Selamat anda dinyatakan lulus!" << endl;
        }
        else {
            cout << "Mohon maaf anda dinyatakan tidak lulus" << endl;
        }
    }
    // isi disini untuk mengisi kelas jaringan
};

int main() {
    char pilih = 0;

    while (pilih != 3) {
        cout << "Pilih Matakuliah :" << endl;
        cout << "1. Pemrograman" << endl;
        cout << "2. Jaringan" << endl;
        cout << "3. Keluar" << endl;
        cin >> pilih;

        switch (pilih) {
        case 1:
            cout << "Masukkan nilai presensi :"
        }
    }
    MataKuliah* mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;
    // isi disini untuk menentukan mata kuliah yang dipilih
}