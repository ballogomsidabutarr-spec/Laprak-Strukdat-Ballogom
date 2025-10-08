#include <iostream>
#include <string>
using namespace std;

// Soal 1: Kalkulator sederhana
void soal1() {
    cout << "=== SOAL 1: KALKULATOR ===" << endl;
    float a, b;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    
    cout << "Hasil penjumlahan: " << a + b << endl;
    cout << "Hasil pengurangan: " << a - b << endl;
    cout << "Hasil perkalian: " << a * b << endl;
    
    if (b != 0) {
        cout << "Hasil pembagian: " << a / b << endl;
    } else {
        cout << "Hasil pembagian: Tidak dapat membagi dengan nol" << endl;
    }
    cout << endl;
}

// Soal 2: Konversi angka ke tulisan
void soal2() {
    cout << "=== SOAL 2: KONVERSI ANGKA KE TULISAN ===" << endl;
    int angka;
    
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    
    // Validasi input
    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0-100" << endl;
        return;
    }
    
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", 
                       "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", 
                       "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
    
    if (angka == 0) {
        cout << angka << " : nol" << endl;
    }
    else if (angka == 100) {
        cout << angka << " : seratus" << endl;
    }
    else if (angka >= 1 && angka <= 9) {
        cout << angka << " : " << satuan[angka] << endl;
    }
    else if (angka >= 10 && angka <= 19) {
        cout << angka << " : " << belasan[angka - 10] << endl;
    }
    else {
        int puluh = angka / 10;
        int satu = angka % 10;
        
        if (satu == 0) {
            cout << angka << " : " << puluhan[puluh] << endl;
        } else {
            cout << angka << " : " << puluhan[puluh] << " " << satuan[satu] << endl;
        }
    }
    cout << endl;
}

// Soal 3: Pola mirror
void soal3() {
    cout << "=== SOAL 3: POLA MIRROR ===" << endl;
    int n;
    
    cout << "Input: ";
    cin >> n;
    cout << "Output:" << endl;
    
    for (int i = n; i >= 1; i--) {
        // Bagian kiri (menurun)
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        
        // Bintang di tengah
        cout << "* ";
        
        // Bagian kanan (meningkat)
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }
}

int main() {
    int pilihan;
    
    do {
        cout << "PILIH SOAL YANG AKAN DIJALANKAN:" << endl;
        cout << "1. Kalkulator" << endl;
        cout << "2. Konversi Angka ke Tulisan" << endl;
        cout << "3. Pola Mirror" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1:
                soal1();
                break;
            case 2:
                soal2();
                break;
            case 3:
                soal3();
                break;
            case 0:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
        
    } while (pilihan != 0);
    
    return 0;
}
