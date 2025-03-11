#include <iostream>

using namespace std;

float fungsiHitungRerata(float x, float y){
    return (x + y) / 2;
}

string fungsiCekStatusKelulusan(float a){
    if (a >= 70){
        return "Lulus";
    }
    else {
        return "Gagal";
    }
}

int mian(){
    //Numeric nNilai1, nNilai2, nRerata
    float Nilai1, Nilai2, Rerata;
    //Display "Masukkan Nilai1 = "
    cout << "Masukkan Nilai! = ";
    //Accept nNilai1
    cin >> Nilai1;
    //Display "Masukkan NIlai2 = "
    cout << "Masukkan Nilai2 = ";
    //Accept nNilai2
    cin >> Nilai2;
    //Display "Status Kelulusan = " + cStatus
    cout << "Status kelulusan = " << fungsiCekStatusKelulusan(fungsiHitungRerata(Nilai1, Nilai2));
}