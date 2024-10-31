#include <iostream>
#include <cmath>

using namespace std;
void hitungEK(double m, double v);
int main(){
    double m, v;
    cout << "Masukan massa dalam (kg): ";
    cin >> m;
    cout  << "Masukan kecepatan dalam (m/s): ";
    cin >> v;
    hitungEK(m, v);
    return 0;
}
void hitungEK(double m, double v){
    double ek = 0.5 * m * pow(v, 2);
    cout << "Energi kinetik: " << ek << " joule";
}