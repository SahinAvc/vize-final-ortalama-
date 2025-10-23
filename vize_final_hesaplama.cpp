#include <iostream>
using namespace std;

int main()
{
    int vize, final, but;
    double sonuc;
    setlocale(LC_ALL,"Turkish");
    cout << "Vize notunu giriniz (0-100): ";
    cin >> vize;
    if (cin.fail() || vize < 0 || vize > 100) {
        cout << "Lütfen 0 ile 100 arasýnda geçerli bir sayý giriniz." << endl;
        return 1;
    }

    cout << "Final notunu giriniz (0-100): ";
    cin >> final;
    if (cin.fail() || final < 0 || final > 100) {
        cout << "Lütfen 0 ile 100 arasýnda geçerli bir sayý giriniz." << endl;
        return 1;
    }

    // Doðru aðýrlýklar: vize %40, final %60
    sonuc = vize * 0.4 + final * 0.6;

    if (sonuc >= 60) {
        cout << "Ortalama: " << sonuc << endl;
        cout << "Tebrikler, geçtiniz!" << endl;
    } else {
        cout << "Bütünleme notunu giriniz (0-100): ";
        cin >> but;
        if (cin.fail() || but < 0 || but > 100) {
            cout << "Lütfen 0 ile 100 arasýnda geçerli bir sayý giriniz." << endl;
            return 1;
        }

        sonuc = vize * 0.4 + but * 0.6;
        if (sonuc >= 60) {
            cout << "Ortalama: " << sonuc << endl;
            cout << "Tebrikler, bütünleme ile geçtiniz!" << endl;
        } else {
            cout << "Maalesef geçemediniz. Geçmiþ olsun." << endl;
        }
    }

    return 0;
}

