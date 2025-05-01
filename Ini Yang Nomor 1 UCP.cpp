//Mas Bisa Minta Tolong ini ga?,ini soal UCP yang pertama saya coba pelajari dan belajar Analisis dari awal Soalnya tapi ga tau apakah ini udah sesusai-
//Dengan Ketentuan yang diminta di Soal UCP,olehnya saya sendiri masih kesusahan dalam mempelajari gabungan syntax seperti do while dan if else-
//Saya Cuman ingin Belajar Supaya bisa lebih baik lagi kedepannya,karena takut kalo saya gabisa terus menerus yang ada saya malah keliatannya seperti ga niat Kuliah.
//Saya Mencoba Belajar Dari Awal lagi memahami syntax dan kegunaanya secara detal dan lebih teliti lagi,karena UCP yang sebelumnya saya merasa seperti orang gagal,4 pertemuan gabisa apa apa kecuali cin sam Cout.

#include <iostream>
#include <string>
using namespace std;

int main(){ //intejer/int = begin
    string namaPelanggan;
    string nomorIdentitas;
    char KategoriPelanggan;
    int jumlahBarang; //numric = intejer/int 
    float hargaBarang, totalHarga, diskon, hargaAkhir;

    //Memulai Input
    cout << " Tolong Masukkan Nama Pelanggannya ya kak! ";
    getline (cin , namaPelanggan);
    cout << " Masukkan Nomor Identitas Kakak ya! " ;
    cin >> nomorIdentitas;
    cout << " Masukkan Kategori Pelanggan (M/N) " ;
    cin >> KategoriPelanggan;

    do{ //do akan menjalankan perintah apa yang sudah aku ketik nanti akan diperiksa sama while apakah ini sesusai dengan apa yang disuruh.
        cout << " Jumlah Barang yang di beli ";
        cin >> jumlahBarang ;

        if (jumlahBarang < 1 || jumlahBarang > 10) { //program if akan berjalan sesuai dengan pemrograman jika yang dimasukkan bernilai true/sesuai perintah
            cout << " Maksimal 10 barang per pembelian,silahkan masukkan ulang ya kak. "<<endl;
        }
    }while (jumlahBarang < 1 || jumlahBarang > 10) ; //while ini yang memberkikan hak akses seperti hmm....,jika sesuai maka akan diberikan akses untuk melanjutkan perintah yang lain,kalo tidak memenuhi syarat maka akan disuruh mengulang sampe benar.

    cout << " Masukkan harga satuan barang ";
    cin >> hargaBarang;

    totalHarga = jumlahBarang * hargaBarang;

    if(KategoriPelanggan == 'M'){ //program if akan berjalan sesuai dengan pemrograman jika yang dimasukkan bernilai true/sesuai perintah
        diskon = 0.5 * totalHarga;

    } else { //kalo else sebaliknya tetap berjalan tapi intruksi yang berbeda dari if.
       diskon = 0; 
    }

    hargaAkhir = totalHarga - diskon;
    cout << "\n--- Struk Pembelian Toko Kelontong ---" << endl;
    cout << "Nama Pelanggan: " << namaPelanggan << endl;
    cout << "Nomor Identitas: " << nomorIdentitas << endl;
    cout << "Kategori Pelanggan: " << KategoriPelanggan << endl;
    cout << "Jumlah Barang: " << jumlahBarang << endl;
    cout << "Harga Satuan Barang: Rp" << hargaBarang << endl;
    cout << "Total Harga: Rp" << totalHarga << endl;
    cout << "Diskon: Rp" << diskon << endl;
    cout << "Harga Akhir: Rp" << hargaAkhir << endl;

    return 0;

}

