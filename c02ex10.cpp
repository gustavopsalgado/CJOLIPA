// C02EX010.CPP

#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.141592; // ou #define PI 3.141592

int main(void)
{
    float v, h, r;

    cout << "Entre a altura ...: ";
    cin >> r;
    cin.ignore(80, '\n');

    cout << "Entre o raio .....: ";
    cin >> h;
    cin.ignore(80, '\n');

    v = h * PI * pow(r, 2);

    cout << "Area do cilindro .:" << v << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar ...";
    cin.get();
    return 0;
}
