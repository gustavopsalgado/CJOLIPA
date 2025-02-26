// C02EX08.CPP

#include <iostream>
using namespace std;

int main(void)
{
    float ht, vh, td, pd, sb, sl;
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
    cout << "salario bruto ...: " << sb << endl;
    cout << "desconto ........: " << td << endl;
    cout << "salario liquido .: " << sl << endl;

    cout << endl;
    cout << "tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
