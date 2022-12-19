#include <iostream>
using namespace std;

string listKota[5] = {"Jakarta", "Surabaya", "Medan", "Makassar", "Bali"};
string listBandara[5] = {"Soekarno-Hatta Airport", "Juanda Airport", "Kualanamu Airport", "Hasanuddin Airport", "Ngurah Rai Airport"};
string listMaskapai[4] = {"Batik Air", "Citilink", "AirAsia", "Garuda Indonesia"};
string listKelas[3] = {"Ekonomi", "Bisnis", "First Class"};
int hargaMaskapai[4] = {200000, 400000, 600000, 800000};
int hargaKelas[3] = {200000, 500000, 800000};

struct tiket{// Untuk Login/Register program
    string pengguna[1];
    string password;
    string username;
};

void jktsby(){// Untuk menampilkan rute Jakarta - Surabaya
    cout << listKota[0] << " >>> " << listKota[1] << endl;
}
void jktmdn(){// Untuk menampilkan rute Jakarta - Medan
    cout << listKota[0] << " >>> " << listKota[2] << endl;
}
void jktmks(){// Untuk menampilkan rute Jakarta - Makassar
    cout << listKota[0] << " >>> " << listKota[3] << endl;
}
void jktbli(){// Untuk menampilkan rute Jakarta - Bali
    cout << listKota[0] << " >>> " << listKota[4] << endl;
}

void kelas(){ // Kelas Penerbangan
    cout << "\t.--------------------------------." << endl;
    cout << "\t| KODE |    KELAS PENERBANGAN    |" << endl;
    cout << "\t----------------------------------" << endl;
    cout << "\t|  1   | Ekonomi                 |" << endl;
    cout << "\t|  2   | Bisnis                  |" << endl;
    cout << "\t|  3   | Kelas Satu              |" << endl;
    cout << "\t.--------------------------------." << endl;
    cout << endl;
}

void pesawat(){ // Maskapai Penerbangan
    int harga;
    cout << "\t.-----------------------------------." << endl;
    cout << "\t| KODE |    MASKAPAI PENERBANGAN    |" << endl;
    cout << "\t-------------------------------------" << endl;
    cout << "\t|  1   | Batik Air                  |" << endl;
    cout << "\t|  2   | Citilink                   |" << endl;
    cout << "\t|  3   | AirAsia                    |" << endl;
    cout << "\t|  4   | Garuda Indonesia           |" << endl;
    cout << "\t.-----------------------------------." << endl;
    cout << endl;
}

int main(){
    tiket pengguna;
    string username1, password1;
    int harga, bayar;
    char pilihMenu, pilihKota, pilihKelas, pilihRute, pilihBayar, pilihMaskapai, pilihMenu1;
    bool login = true;
    int ulang = 1;
    int *uangKembalian=&harga;

    while (login == true){
    cout << "*Silahkan Login sebelum memesan*" << endl;
    cout << "Username: ";
    cin >> username1;
    cout << "Password: ";
    cin >> password1;

    if (pengguna.username == username1 && pengguna.password == password1){
        while (ulang = 1){
                        cout << endl;
                        cout << "\t         =============== SELAMAT DATANG DI BANDARA JAKARTA ===============" << endl;
                        cout << "\t----------------- Semoga Perjalanan Anda Aman, Nyaman, dan Lancar ----------------" << endl;
                        cout << endl;
                        cout << "\t*Silahkan Pilih Rute Penerbangan*\n\n";
                        cout << "\t.-----------------------------------." << endl;
                        cout << "\t| NO |       RUTE PENERBANGAN       |" << endl;
                        cout << "\t-------------------------------------" << endl;
                        cout << "\t| 1  | " << listKota[0] << " >>> " << listKota[1] << endl;
                        cout << "\t| 2  | " << listKota[0] << " >>> " << listKota[2] << endl;
                        cout << "\t| 3  | " << listKota[0] << " >>> " << listKota[3] << endl;
                        cout << "\t| 4  | " << listKota[0] << " >>> " << listKota[4] << endl;
                        cout << "\t.-----------------------------------." << endl;
                        cout << endl;
                        cout << "Rute [1-4] : ";
                        cin >> pilihRute;
                        cout << endl;

                            if (pilihRute=='1'){//Jakarta - Surabaya (600k)
                                harga = 600000;
                                cout << "Detail Pesanan: " << endl;
                                jktsby();
                                cout << endl;
                                cout << "\t*Silahkan Pilih Maskapai Penerbangan*\n";
                                cout << endl;
                                pesawat();
                                cout << "Pilihan Maskapai [1-4] : ";
                                cin >> pilihMaskapai;

                                    if (pilihMaskapai=='1'){//Batik Air (+200k)
                                        harga = harga + 200000;
                                        cout << endl;
                                        cout << "Detail Pesanan: " << endl;
                                        jktsby();
                                        cout << "Maskapai : " << listMaskapai[0] <<endl;
                                        cout << endl;
                                        cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                        cout << endl;
                                        kelas();
                                        cout << "Pilihan [1-3] : ";
                                        cin >> pilihKelas;
                                            if (pilihKelas=='1'){//Ekonomi
                                                harga = harga + 200000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktsby();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[0] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << harga << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='2'){//Bisnis
                                                harga = harga + 500000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktsby();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[1] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|    Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='3'){//First Class
                                                harga = harga + 800000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktsby();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[2] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else{
                                                cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                            }
                                    }
                                    else if (pilihMaskapai=='2'){//Citilink (400k)
                                                harga = harga + 400000;
                                                cout << endl;
                                                cout << "Detail Pesanan: " << endl;
                                                jktsby();
                                                cout << "Maskapai : " << listMaskapai[1] <<endl;
                                                cout << endl;
                                                cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                cout << endl;
                                                kelas();
                                                cout << "Pilihan [1-3] : ";
                                                cin >> pilihKelas;
                                                    if (pilihKelas=='1'){//Ekonomi
                                                        harga = harga + 200000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktsby();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[0] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='2'){//Bisnis
                                                        harga = harga + 500000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktsby();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[1] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='3'){//First Class
                                                        harga = harga + 800000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktsby();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[2] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else{
                                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                    }
                                                }
                                    else if (pilihMaskapai=='3'){//AirAsia (600k)
                                                    harga = harga + 600000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktsby();
                                                    cout << "Maskapai : " << listMaskapai[2] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktsby();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktsby();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktsby();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                        }
                                    else if (pilihMaskapai=='4'){//Garuda (800k)
                                                    harga = harga + 800000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktsby();
                                                    cout << "Maskapai : " << listMaskapai[3] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktsby();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktsby();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktsby();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "| Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                                    }
                                    else{
                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                    }
                            }
                            if (pilihRute=='2'){//Jakarta - Medan (800k)
                                harga = 800000;
                                cout << "Detail Pesanan: " << endl;
                                jktmdn();
                                cout << endl;
                                cout << "\t*Silahkan Pilih Maskapai Penerbangan*\n";
                                cout << endl;
                                pesawat();
                                cout << "Pilihan Maskapai [1-4] : ";
                                cin >> pilihMaskapai;

                                    if (pilihMaskapai=='1'){//Batik Air (+200k)
                                        harga = harga + 200000;
                                        cout << endl;
                                        cout << "Detail Pesanan: " << endl;
                                        jktmdn();
                                        cout << "Maskapai : " << listMaskapai[0] <<endl;
                                        cout << endl;
                                        cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                        cout << endl;
                                        kelas();
                                        cout << "Pilihan [1-3] : ";
                                        cin >> pilihKelas;
                                            if (pilihKelas=='1'){//Ekonomi
                                                harga = harga + 200000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktmdn();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[0] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='2'){//Bisnis
                                                harga = harga + 500000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktmdn();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[1] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='3'){//First Class
                                                harga = harga + 800000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktmdn();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[2] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else{
                                                cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                            }
                                    }
                                    else if (pilihMaskapai=='2'){//Citilink (400k)
                                                harga = harga + 400000;
                                                cout << endl;
                                                cout << "Detail Pesanan: " << endl;
                                                jktmdn();
                                                cout << "Maskapai : " << listMaskapai[1] <<endl;
                                                cout << endl;
                                                cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                cout << endl;
                                                kelas();
                                                cout << "Pilihan [1-3] : ";
                                                cin >> pilihKelas;
                                                    if (pilihKelas=='1'){//Ekonomi
                                                        harga = harga + 200000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktmdn();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[0] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='2'){//Bisnis
                                                        harga = harga + 500000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktmdn();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[1] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='3'){//First Class
                                                        harga = harga + 800000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktmdn();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[2] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else{
                                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                    }
                                                }
                                    else if (pilihMaskapai=='3'){//AirAsia (600k)
                                                    harga = harga + 600000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktmdn();
                                                    cout << "Maskapai : " << listMaskapai[2] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmdn();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmdn();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmdn();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                        }
                                    else if (pilihMaskapai=='4'){//Garuda (800k)
                                                    harga = harga + 800000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktmdn();
                                                    cout << "Maskapai : " << listMaskapai[3] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmdn();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmdn();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmdn();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                                    }
                                    else{
                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                    }
                            }
                            if (pilihRute=='3'){//Jakarta - Makassar (1000k)
                                harga = 1000000;
                                cout << "Detail Pesanan: " << endl;
                                jktmks();
                                cout << endl;
                                cout << "\t*Silahkan Pilih Maskapai Penerbangan*\n";
                                cout << endl;
                                pesawat();
                                cout << "Pilihan Maskapai [1-4] : ";
                                cin >> pilihMaskapai;

                                    if (pilihMaskapai=='1'){//Batik Air (+200k)
                                        harga = harga + 200000;
                                        cout << endl;
                                        cout << "Detail Pesanan: " << endl;
                                        jktmks();
                                        cout << "Maskapai : " << listMaskapai[0] <<endl;
                                        cout << endl;
                                        cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                        cout << endl;
                                        kelas();
                                        cout << "Pilihan [1-3] : ";
                                        cin >> pilihKelas;
                                            if (pilihKelas=='1'){//Ekonomi
                                                harga = harga + 200000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktmks();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[0] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='2'){//Bisnis
                                                harga = harga + 500000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktmks();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[1] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='3'){//First Class
                                                harga = harga + 800000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktmks();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[2] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else{
                                                cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                            }
                                    }
                                    else if (pilihMaskapai=='2'){//Citilink (400k)
                                                harga = harga + 400000;
                                                cout << endl;
                                                cout << "Detail Pesanan: " << endl;
                                                jktmks();
                                                cout << "Maskapai : " << listMaskapai[1] <<endl;
                                                cout << endl;
                                                cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                cout << endl;
                                                kelas();
                                                cout << "Pilihan [1-3] : ";
                                                cin >> pilihKelas;
                                                    if (pilihKelas=='1'){//Ekonomi
                                                        harga = harga + 200000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktsby();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[0] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='2'){//Bisnis
                                                        harga = harga + 500000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktmks();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[1] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "| Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='3'){//First Class
                                                        harga = harga + 800000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktmks();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[2] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "| Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else{
                                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                    }
                                                }
                                    else if (pilihMaskapai=='3'){//AirAsia (600k)
                                                    harga = harga + 600000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktmks();
                                                    cout << "Maskapai : " << listMaskapai[2] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmks();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmks();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmks();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                        }
                                    else if (pilihMaskapai=='4'){//Garuda (800k)
                                                    harga = harga + 800000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktmks();
                                                    cout << "Maskapai : " << listMaskapai[3] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmks();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmks();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktmks();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                                    }
                                    else{
                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                    }
                            }
                            if (pilihRute=='4'){//Jakarta - Bali (1200k)
                                harga = 1200000;
                                cout << "Detail Pesanan: " << endl;
                                jktbli();
                                cout << endl;
                                cout << "\t*Silahkan Pilih Maskapai Penerbangan*\n";
                                cout << endl;
                                pesawat();
                                cout << "Pilihan Maskapai [1-4] : ";
                                cin >> pilihMaskapai;

                                    if (pilihMaskapai=='1'){//Batik Air (+200k)
                                        harga = harga + 200000;
                                        cout << endl;
                                        cout << "Detail Pesanan: " << endl;
                                        jktbli();
                                        cout << "Maskapai : " << listMaskapai[0] <<endl;
                                        cout << endl;
                                        cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                        cout << endl;
                                        kelas();
                                        cout << "Pilihan [1-3] : ";
                                        cin >> pilihKelas;
                                            if (pilihKelas=='1'){//Ekonomi
                                                harga = harga + 200000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktbli();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[0] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|    Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='2'){//Bisnis
                                                harga = harga + 500000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktbli();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[1] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "|Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else if (pilihKelas=='3'){//First Class
                                                harga = harga + 800000;
                                                cout << endl;
                                                cout << ".---------------------------." << endl;
                                                cout << "| Detail Pesanan: " << endl;
                                                cout << "----------------------------" << endl;
                                                cout << "| Atas Nama : " << username1 << endl;
                                                cout << "| --- Penerbangan ---" << endl;
                                                cout << "| "; jktbli();
                                                cout << "| Maskapai : " << listMaskapai[0] << endl;
                                                cout << "| Kelas    : " << listKelas[2] << endl;
                                                cout << "|===========================" << endl;
                                                cout << "| Harga Tiket : Rp." << harga << endl;
                                                cout << "| Bayar       : ";
                                                cin >> bayar;
                                                    if (bayar >= harga){
                                                        harga = bayar - harga;
                                                        cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                                    else{
                                                        cout << "|     Transaksi Gagal" << endl;
                                                        cout << "|____________________________" << endl;
                                                        cout << endl;
                                                        cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                    }
                                            }
                                            else{
                                                cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                            }
                                    }
                                    else if (pilihMaskapai=='2'){//Citilink (400k)
                                                harga = harga + 400000;
                                                cout << endl;
                                                cout << "Detail Pesanan: " << endl;
                                                jktbli();
                                                cout << "Maskapai : " << listMaskapai[1] <<endl;
                                                cout << endl;
                                                cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                cout << endl;
                                                kelas();
                                                cout << "Pilihan [1-3] : ";
                                                cin >> pilihKelas;
                                                    if (pilihKelas=='1'){//Ekonomi
                                                        harga = harga + 200000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktbli();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[0] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='2'){//Bisnis
                                                        harga = harga + 500000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktbli();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[1] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else if (pilihKelas=='3'){//First Class
                                                        harga = harga + 800000;
                                                        cout << endl;
                                                        cout << ".---------------------------." << endl;
                                                        cout << "| Detail Pesanan: " << endl;
                                                        cout << "----------------------------" << endl;
                                                        cout << "| Atas Nama : " << username1 << endl;
                                                        cout << "| --- Penerbangan ---" << endl;
                                                        cout << "| "; jktbli();
                                                        cout << "| Maskapai : " << listMaskapai[1] << endl;
                                                        cout << "| Kelas    : " << listKelas[2] << endl;
                                                        cout << "|===========================" << endl;
                                                        cout << "| Harga Tiket : Rp." << harga << endl;
                                                        cout << "| Bayar       : ";
                                                        cin >> bayar;
                                                            if (bayar >= harga){
                                                                harga = bayar - harga;
                                                                cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                            else{
                                                                cout << "|     Transaksi Gagal" << endl;
                                                                cout << "|____________________________" << endl;
                                                                cout << endl;
                                                                cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                            }
                                                    }
                                                    else{
                                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                    }
                                                }
                                    else if (pilihMaskapai=='3'){//AirAsia (600k)
                                                    harga = harga + 600000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktbli();
                                                    cout << "Maskapai : " << listMaskapai[2] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktbli();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktbli();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktbli();
                                                            cout << "| Maskapai : " << listMaskapai[2] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                        }
                                    else if (pilihMaskapai=='4'){//Garuda (800k)
                                                    harga = harga + 800000;
                                                    cout << endl;
                                                    cout << "Detail Pesanan: " << endl;
                                                    jktbli();
                                                    cout << "Maskapai : " << listMaskapai[3] <<endl;
                                                    cout << endl;
                                                    cout << "\t*Silahkan Pilih Kelas Penerbangan*\n";
                                                    cout << endl;
                                                    kelas();
                                                    cout << "Pilihan [1-3] : ";
                                                    cin >> pilihKelas;
                                                        if (pilihKelas=='1'){//Ekonomi
                                                            harga = harga + 200000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktbli();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[0] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='2'){//Bisnis
                                                            harga = harga + 500000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktbli();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[1] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else if (pilihKelas=='3'){//First Class
                                                            harga = harga + 800000;
                                                            cout << endl;
                                                            cout << ".---------------------------." << endl;
                                                            cout << "| Detail Pesanan: " << endl;
                                                            cout << "----------------------------" << endl;
                                                            cout << "| Atas Nama : " << username1 << endl;
                                                            cout << "| --- Penerbangan ---" << endl;
                                                            cout << "| "; jktbli();
                                                            cout << "| Maskapai : " << listMaskapai[3] << endl;
                                                            cout << "| Kelas    : " << listKelas[2] << endl;
                                                            cout << "|===========================" << endl;
                                                            cout << "| Harga Tiket : Rp." << harga << endl;
                                                            cout << "| Bayar       : ";
                                                            cin >> bayar;
                                                                if (bayar >= harga){
                                                                    harga = bayar - harga;
                                                                    cout << "| Kembalian   : Rp." << *uangKembalian << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                                else{
                                                                    cout << "|     Transaksi Gagal" << endl;
                                                                    cout << "|____________________________" << endl;
                                                                    cout << endl;
                                                                    cout << "*anda akan dikembalikan ke menu utama secara otomatis" << endl;
                                                                }
                                                        }
                                                        else{
                                                            cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                                        }
                                                    }
                                    else{
                                        cout << "\t*Maaf pilihan tidak sesuai*" << endl;
                                    }
                            }
                }
        }
    else{
        cout << "*Password yang anda masukkan salah" << endl;
        cout << "atau Username tidak ditemukan*" << endl;
        cout << endl;
        cout << "Silahkan daftar terlebih dahulu" << endl;
        while (password1 != pengguna.password){
            cout << "Username: ";
            cin >> username1;
            pengguna.username = username1;
            cout << "Password: ";
            cin >> pengguna.password;
            cout << "Ulangi Password: ";
            cin >> password1;
            if (password1 == pengguna.password){
                cout << endl;
                cout << "*Pendaftaran Berhasil*" << endl;
                cout << endl;
            }
            else{
                cout << endl;
                cout << "*Password tidak sama" << endl;
                cout << endl;
            }
        }
    }
}

return 0;
}
