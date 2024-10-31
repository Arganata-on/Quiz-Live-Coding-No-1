#include <iostream>

using namespace std;
int main(){
    double apel, totalApel, jeruk, totalJeruk, semangka, totalSemangka;

    cout << "Masukkan berat buah apel dalam (kg): ";
    cin >> apel;
    cout << "Masukan berat buah jeruk dalam (kg): ";
    cin >> jeruk;
    cout << "Masukkan berat buah semangka dalam (kg): ";
    cin >> semangka;

    totalApel = apel * 24000;
    totalJeruk = jeruk * 32500;
    totalSemangka = semangka * 8000;

    double totalkg = apel + jeruk + semangka;
    double totalSemua = totalApel + totalJeruk + totalSemangka;
    double diskon;

    if(totalkg > 10){
       diskon = totalSemua * (5.0/100);
    }
    else if(totalkg > 8){
       diskon = totalSemua * (2.0/100);
    }
    cout << "\nHarga yang harus dibayar: "<< totalSemua - diskon;

    return 0;
}
