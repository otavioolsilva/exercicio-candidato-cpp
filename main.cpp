#include <bits/stdc++.h>

using namespace std;

int main()
{
    int escolaridade, experiencia;
    string viajar, habilitacao;
    bool cAssistente = 0, cGerente = 0, cAnalista = 0;

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

    //Resultado
    if(escolaridade >= 2 && habilitacao == "S") cAssistente = 1;
    if(escolaridade >= 3 && experiencia >= 20) cGerente = 1;
    if(escolaridade >= 3 && experiencia >= 40 && viajar == "S") cAnalista = 1;

    if(cAssistente == 0 && cGerente == 0 && cAnalista == 0){
        cout << endl << "Infelizmente seu perfil nao atende a empresa" << endl;
    } else{
        cout << endl << "Voce esta habilitado para o(s) seguinte(s) cargo(s):" << endl;
        if(cAssistente == 1) cout << "ASSISTENTE" << endl;
        if(cGerente == 1) cout << "GERENTE" << endl;
        if (cAnalista == 1) cout << "ANALISTA" << endl;
    }

    return 0;
}
