#include <iostream>

using namespace std;

int main()
{
    char ulang;
    int a, b, c;
    //a = Masa Kerja ( tahun )
    //b = Sales / Penjualan
    //c = Gaji Pokok

    awal:
        cout << "Masukkan Masa Kerja    : ";
    cin >> a;
        cout << "Masukkan Sales         : ";
    cin >> b;
        cout << "Masukkan Gaji Pokok    : ";
    cin >> c;

    if(a>5){
        if(b>2000){
            cout << "\nBonus 50%              : " << c * 50/100;
        }else{
            cout << "\nBonus 25%              : " << c * 25/100;
        }
    }else if (a<1){
        if(b>2000){
            cout << "\nBonus 25%              : " << c * 25/100;
        }else{
            cout << "\nBonus 0%               : 0 ";
        }
    }else{
        if(b>2000){
            cout << "\nBonus 35%              : " << c * 35/100;
        }else{
            cout << "\nBonus 15%              : " << c * 15/100;
        }
    }

    cout << "\n\nApakah ingin mengulang [y/n] : ";
    cin >> ulang;
    if(ulang=='y'){
        goto awal;
    }else{
        goto selesai;
    }
    selesai:


    return 0;
}
