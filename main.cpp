#include <bits/stdc++.h>

using namespace std;

int main()
{
    int escolaridade, experiencia;
    string viajar, habilitacao;

    //Leitura da escolaridade
    cout << "Qual sua escolaridade?" << endl;
    cout << "1) Ensino Fundamental" << endl;
    cout << "2) Ensino Medio" << endl;
    cout << "3) Ensino Superior" << endl;
    cout << "4) Pos-graduacao" << endl;
    cout << "Digite uma opcao: ";
    cin >> escolaridade;

    //Leitura dos demais dados
    cout << endl << "Voce tem quantos anos de experiencia profissional? ";
    cin >> experiencia;
    cout << "Voce tem disponibilidade para viajar (S/N)? ";
    cin >> viajar;
    cout << "Voce tem habilitacao de motorista (S/N)? ";
    cin >> habilitacao;

    //Escolaridade e experiencia
    cout << endl << "Pontos por escolaridade: " << escolaridade*10 << endl;
    if(experiencia <= 0) experiencia = 0;
    else if(experiencia <= 2) experiencia = 10;
    else if(experiencia <= 5) experiencia = 20;
    else experiencia = 40;
    cout << "Pontos por experiencia: " << experiencia << endl;

    return 0;
}
