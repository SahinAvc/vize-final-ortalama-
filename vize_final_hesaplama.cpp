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
        cout << "L�tfen 0 ile 100 aras�nda ge�erli bir say� giriniz." << endl;
        return 1;
    }

    cout << "Final notunu giriniz (0-100): ";
    cin >> final;
    if (cin.fail() || final < 0 || final > 100) {
        cout << "L�tfen 0 ile 100 aras�nda ge�erli bir say� giriniz." << endl;
        return 1;
    }

    // Do�ru a��rl�klar: vize %40, final %60
    sonuc = vize * 0.4 + final * 0.6;

    if (sonuc >= 60) {
        cout << "Ortalama: " << sonuc << endl;
        cout << "Tebrikler, ge�tiniz!" << endl;
    } else {
        cout << "B�t�nleme notunu giriniz (0-100): ";
        cin >> but;
        if (cin.fail() || but < 0 || but > 100) {
            cout << "L�tfen 0 ile 100 aras�nda ge�erli bir say� giriniz." << endl;
            return 1;
        }

        sonuc = vize * 0.4 + but * 0.6;
        if (sonuc >= 60) {
            cout << "Ortalama: " << sonuc << endl;
            cout << "Tebrikler, b�t�nleme ile ge�tiniz!" << endl;
        } else {
            cout << "Maalesef ge�emediniz. Ge�mi� olsun." << endl;
        }
    }

    return 0;
}

