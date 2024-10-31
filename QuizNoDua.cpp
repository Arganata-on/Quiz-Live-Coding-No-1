#include <iostream>

using namespace std;
int main(){
    double apel, totalApel, jeruk, totalJeruk, semangka, totalSemangka, totalSemua;
    cout << "Masukkan berat buah apel dalam (kg): ";
    cin >> apel;
    totalApel = apel * 24000;
    cout << "Masukan berat buah jeruk dalam (kg): ";
    cin >> jeruk;
    totalJeruk = jeruk * 32500;
    cout << "Masukkan berat buah semangka dalam (kg): ";
    cin >> semangka;
    totalSemangka = semangka * 8000;
    double totalkg = apel + jeruk + semangka;
    if(totalkg > 10){
        totalSemua/0.05;
    }
    else if(totalkg> 8){
        totalSemua/0.02;
    }
    totalSemua = totalApel + totalJeruk + totalSemangka;
    cout << "\nHarga yang harus dibayar: "<< totalSemua;


    return 0;
}