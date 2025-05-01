#include <iostream>
#include <string> //Ini Penting Buat Memanggil string dan getline kalo ga ada <string> tidak bisa dipanggil.
using namespace std;

struct DPL {  //Mendeklarasikan nama dan nip atau mungkin menyimpan data dosen pembimbing
    string nama; //kenapa harus stirng? simple karena string emang digunakan untuk menyimpan teks atau kalimat,Ini sangat berguna untuk menyimpan informasi seperti nama, alamat, atau deskripsi, yang tidak bisa disimpan dalam tipe data seperti int atau char.int hanya bisa angka dan char hanya bisa satu huruf.
    string nip;
};

struct TugasKerjaPraktek {  //Iya tambahan penjelasan tentang struct,kenapa make struct ga int? jawbannya karena struct itu buat menyimpan data teks atau kalimat kalo int hanya bisa bulangan bulat (kalo ga salah)
    string judul;
    int tahun; //seperti ini dia emang harus int karena memasukkan bilangan bulat
    char status; // kenapa make char?ga make stiring kan sama sama bisa menggunakan teks?alasannya karena penggunaan tipe char sangat efisiensi karena diperintah disuruh memberikan S = Selesai, B = Belum selesai.Menghemat waktu.
};

struct Mahasiswa {
    string nama;
    string nim;
    DPL dosen;
    TugasKerjaPraktek kerjaPraktek;
};

int main() { // lah bukannya barusan anda bilang kalo int hanya bisa menyimpan bilangan bulat kok ini bisa manggil cout sama cin dan yang lainnya?ya jelas bedalah kan tadi kalo cuman int doang ini udah di tambahkan "main" int aja itu tipe data kalo udah ada int main itu akan jadi fungsi utama kalo aku biar mudah paham anggap saja int main itu maincharacter biar tau kalo itu memiliki peran penting hehe.
    Mahasiswa mahasiswa;

    cout << "Masukkan nama mahasiswa: "; //Getline agarbisa menggunakan space(Spasi),dan jangan lupa memanggil #Include <stiring>
    getline(cin, mahasiswa.nama);

    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, mahasiswa.nim);

    cout << "Masukkan nama dosen pembimbing lapangan: ";
    getline(cin, mahasiswa.dosen.nama);

    cout << "Masukkan NIP dosen pembimbing lapangan: ";
    getline(cin, mahasiswa.dosen.nip);

    cout << "Masukkan judul kerja praktek: ";
    getline(cin, mahasiswa.kerjaPraktek.judul);

    cout << "Masukkan tahun kerja praktek: ";
    cin >> mahasiswa.kerjaPraktek.tahun;
    cin.ignore(); //menghapus karakter yang tidak diinginkan dari input buffer


    cout << "Masukkan status kerja praktek (S = Selesai, B = Belum selesai): ";
    cin >> mahasiswa.kerjaPraktek.status;

    // Menampilkan hasil
    cout << "\n--- Data Mahasiswa Skripsi ---\n";
    cout << "Nama Mahasiswa: " << mahasiswa.nama << endl;
    cout << "NIM: " << mahasiswa.nim << endl;
    cout << "Nama Dosen Pembimbing Lapangan: " << mahasiswa.dosen.nama << endl;
    cout << "NIP Dosen Pembimbing Lapangan: " << mahasiswa.dosen.nip << endl;
    cout << "Judul Skripsi: " << mahasiswa.kerjaPraktek.judul << endl;
    cout << "Tahun Kerja Praktek: " << mahasiswa.kerjaPraktek.tahun << endl;

    // Logika percabangan
    if (mahasiswa.kerjaPraktek.tahun < 2022) { //program if akan berjalan sesuai dengan pemrograman jika yang dimasukkan bernilai true/sesuai perintah
        cout << "Keterangan: Kerja Praktek Lama\n";
    } else { // kalo gagal atau bernilai false maka kode yang ada di false akan dijalankan
        cout << "Keterangan: Kerja Praktek Baru\n";
    }

    if (mahasiswa.kerjaPraktek.status == 'S' || mahasiswa.kerjaPraktek.status == 's') {
        cout << "Status Skripsi: Sudah siap seminar\n";
    } else if (mahasiswa.kerjaPraktek.status == 'B' || mahasiswa.kerjaPraktek.status == 'b') {
        cout << "Status Skripsi: Belum siap seminar\n";
    }

    return 0;
}