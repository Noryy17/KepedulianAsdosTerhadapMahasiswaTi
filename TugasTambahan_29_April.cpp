#include <iostream>
using namespace std;

class Segitiga {
private:
      //Kenapa Intijer?  ini memanggil bilangan bulat
    int sisi1, sisi2, sisi3, alas, tinggi; // Properti privat hanya bisa diakses oleh fungsi dalam kelas
                    //Kenapa Float? digunakan untuk menyimpan bilangan desimal atau angka pecahan. 
    float hitungLuas() {
        (alas * tinggi) / 2; //Rumus Menghitung luas segitiga
    }

    float hitungKeliling() {
         sisi1 + sisi2 + sisi3; // Menghitung keliling segitiga
    }

public:
    void inputLuas() {
       do { //Untuk Perulangan jika Kondisi gagal di esekusi atau Eror.Seperti Melanggar Suatu ketentuan dalam perintah
        cout << "Masukkan Alas Segitiga (1 - 50, GENAP ) = ";
        cin >> alas;
        cout << "Masukkan Tinggi Segitiga (1 - 50) = ";
        cin >> tinggi;

        if (alas < 1 || alas > 50 ){ //if untuk menentukan blok kode yang akan dieksekusi, jika kondisi yang ditentukan benar akan terus maju.
            cout << " Angka Harus 1 - 50.\n";
        }else if (alas % 2 != 0){ // else if kalo mau mudah dipahami saya nangkepnya perumpamaan kayak milih lampu merah,kalo hijau dia akan jalan perintah ke if untuk terus maju,kalo else seperti lampu merah berhenti dan menunggu hingga benar atau menunggu hingga lampu hijau.
            cout << " Alas Harus Bilangan GENAP BROK !!!.\n";
        }

        if (tinggi < 1 || tinggi > 50){ //if untuk menentukan blok kode yang akan dieksekusi, jika kondisi yang ditentukan benar akan terus maju.
            cout << " Tinggi Harus Diantara 1 - 50.\n";
        }
        }while (alas < 1 || alas > 50 || alas % 2 != 0 || tinggi < 1 || tinggi > 50); //menjalankan blok kode berulang kali selama kondisi tertentu terpenuhi (true).
       
    }
    

    void inputKeliling() {
        do {
        cout << "Masukkan panjang sisi pertama (1 -50) : ";
        cin >> sisi1;
        cout << "Masukkan panjang sisi kedua (1 -50) : ";
        cin >> sisi2;
        cout << "Masukkan panjang sisi ketiga (1 -50) : ";
        cin >> sisi3;

        if(sisi1 < 1 || sisi1 > 50){ //if untuk menentukan blok kode yang akan dieksekusi, jika kondisi yang ditentukan benar akan terus maju.
            cout << "Sisi 1 Harus Lu Pilih diantara 1 - 50.\n";
        }
        else if (sisi2 < 1 || sisi2 > 50){  // else if kalo mau mudah dipahami saya nangkepnya perumpamaan kayak milih lampu merah,kalo hijau dia akan jalan perintah ke if untuk terus maju,kalo else seperti lampu merah berhenti dan menunggu hingga benar atau menunggu hingga lampu hijau.
            cout << "Sisi Ke 2 Harus Ente Pilih Juga Diantara 1 - 50.\n";
        }
        else if (sisi3 < 1 || sisi3 > 50){  // else if kalo mau mudah dipahami saya nangkepnya perumpamaan kayak milih lampu merah,kalo hijau dia akan jalan perintah ke if untuk terus maju,kalo else seperti lampu merah berhenti dan menunggu hingga benar atau menunggu hingga lampu hijau.
            cout << "Sisi ke 3 Sama Aja kayak sebelumnya 1-50.\n 3 ";
        }
    }while (sisi1 < 1 || sisi1 > 50 || sisi2 < 1 || sisi2 > 50 || sisi3 < 1 || sisi3 > 50); //menjalankan blok kode berulang kali selama kondisi tertentu terpenuhi (true).
    }

    

    void outputLuas() { // kenapa make void bang? karena kalo ingin menjalankan, seperti mencetak, menyetel nilai, atau menjalankan perintah, tanpa perlu mengembalikan hasil.

        cout << "Luas segitiga: " << hitungLuas() << endl;
    }

    void outputKeliling() {  // kenapa make void bang? karena kalo ingin menjalankan, seperti mencetak, menyetel nilai, atau menjalankan perintah, tanpa perlu mengembalikan hasil.
        cout << "Keliling segitiga: " << hitungKeliling() << endl;
    }
};

int main() { // Int main ini penting banget karena akan dijalankan disini ya maincharacter gitu biar mudah paham.
    Segitiga sgt;
    int pilihan;

    do {

    cout << "======== MENU SEGITIGA ========" << endl;
    cout << "1. Hitung Luas Segitiga" << endl;
    cout << "2. Hitung Keliling Segitiga" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) { //tempat memilih pilihan case jadi kayak menjalankan case perintah case misal saya memasukkan 2 kedalam cin maka case 2 akan dijalankan sesuai pemrograman.
    case 1:
    sgt.inputLuas();
    sgt.outputLuas();
        break;
    case 2:
    sgt.inputKeliling();
    sgt.outputKeliling();
        break;
    case 3:
        cout << "Keluar dari program." << endl;
        break;
    default: // ini kalo keluar dari pilihan ya makan akan muncul cout dibawah hehe..
        cout << "Pilihan tidak valid! BROK! Cuman ada 1-3 yaa..." << endl;
    }

}while(pilihan !=3);
}