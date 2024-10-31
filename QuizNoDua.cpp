#include <iostream>
using namespace std;
int main(){
    double apel, jeruk, semangka, totalApel, totalJeruk, totalSemangka, diskon, hargaFinal;
    
    cout << "Masukkan berat apel dalam kg: ";
    cin >> apel;
    cout << "Masukkan berat jeruk dalam kg: ";
    cin >> jeruk;
    cout << "Masukkan berat semangka dalam kg: ";
    cin >> semangka;

    totalApel = apel * 24000;
    totalJeruk = jeruk * 32500;
    totalSemangka = semangka * 8000;
    double totalSemua = totalApel + totalJeruk + totalSemangka;
    double totalKg = apel + jeruk + semangka;
    if(totalKg > 10){
        diskon = totalSemua * 0.05;
    }
    else if(totalKg > 8){
        diskon = totalSemua * 0.02;
    }
    hargaFinal = totalSemua - diskon;
    cout << hargaFinal;
    return 0;
}
