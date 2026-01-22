#include <iostream>
#include <cmath>
#include <iomanip> // hassas çýktý için

using namespace std;

int main() {
    double a, b, c;
    cout << "Ikinci dereceden denklem: ax^2 + bx + c = 0\n";
    cout << "a katsayisini giriniz (a != 0): ";
    cin >> a;

    if (a == 0) {
        cout << "Hata: a katsayisi sifir olamaz (denklem ikinci dereceden olmaz).\n";
        return 1;
    }

    cout << "b katsayisini giriniz: ";
    cin >> b;
    cout << "c katsayisini giriniz: ";
    cin >> c;

    // Diskriminant hesaplama
    double delta = b * b - 4 * a * c;

    cout << fixed << setprecision(4); // virgülden sonra 4 hane göster
    cout << "\nDiskriminant (?) = " << delta << endl;

    if (delta < 0) {
        cout << "Denklemin gercek koku yoktur.\n";
    }
    else if (delta == 0) {
        double kok = -b / (2 * a);
        cout << "Denklemin tek bir gercek koku vardir:\n";
        cout << "x = " << kok << endl;
    }
    else { // delta > 0
        double kok1 = (-b + sqrt(delta)) / (2 * a);
        double kok2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Denklemin iki farkli gercek koku vardir:\n";
        cout << "x1 = " << kok1 << endl;
        cout << "x2 = " << kok2 << endl;
    }

    return 0;
}

