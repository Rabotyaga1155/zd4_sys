#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    ifstream infile("data.txt");
    ofstream outfile("Rezultat.txt", ios::app);

    if (!infile.is_open()) {
        cout << "Ошибка открытия файла data.txt" << endl;
        return 1;
    }

    if (!outfile.is_open()) {
        cout << "Ошибка открытия файла Rezultat.txt" << endl;
        return 1;
    }

    double a, b, alpha;

    while (infile >> a >> b >> alpha) {
        outfile << "Сторона квадрата а -" << a << " " << "Сторона квадрата b - " << b << endl;
    }

    infile.close();
    outfile.close();

    return 0;
}
