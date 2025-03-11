#include <iostream>

using namespace std;

float Panjang, Lebar, Luas;
void prosedurHitungLuas(){
    Luas = Panjang * Lebar;
}

void prosedurInputData(){
    cout << "Masukkan panjangnya = ";
    cin >> Panjang;
    cout << "Masukkan lebarnya = ";
    cin >> Lebar; 
}

void prosedurOutputData(){
    cout << "Luas persegi panjang = " << Luas;
}

int main()
{
    prosedurInputData();
    prosedurHitungLuas();
    prosedurOutputData();
}