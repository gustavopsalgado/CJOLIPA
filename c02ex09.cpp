// C02EX09.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float ht, vh, td, pd, sb, sl;

    cout << setprecision(2) << fixed <<right;

    cout << "entre as horas trabalhadas ...";
    cin >> ht;
    cin.ignore(80, '\n');

    cout << "entre o valor das horas trabalhadas ...";
    cin >> vh;
    cin.ignore(80, '\n');

    cout << "entre o valor do percentual de desconto ...";
    cin >> pd;
    cin.ignore(80, '\n');

    sb = ht * vh;
    td = (pd / 100)* sb;
    sl = sb - td;

    cout << "\n";
    cout << "salario bruto ...: " << setw(8) << sb << endl;
    cout << "desconto ........: " << setw(8) << td << endl;
    cout << "salario liquido .: " << setw(8) << sl << endl;

    cout << endl;
    cout << "tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
