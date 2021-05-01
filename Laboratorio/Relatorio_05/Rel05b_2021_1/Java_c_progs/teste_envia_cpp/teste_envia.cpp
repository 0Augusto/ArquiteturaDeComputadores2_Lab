#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <time.h>


// Para este programa o arduino deverá estar esperando 3 números !
using namespace std;

int main()
{

    string p1, p2, p3, porta, linha;
    char *manda;
    clock_t inicio, fim;

// Nas linhas abaixo você deve substituir com4 pela porta onde o Arduino está
    system("pause");
//    inicio = clock();
//    fim = clock();
    double Tempo;
//    printf("Tempo gasto: %g ms.", Tempo);

for (int i=1;i<=5;i=i+1){
    inicio = clock();
    system ("envia.exe com10 1 0 0");
    fim = clock();
    Tempo = (fim - inicio) * 1000.0 / CLOCKS_PER_SEC;
    printf("\nTempo gasto: %g ms.", Tempo);

    system ("envia.exe com10 0 0 0");
    for(int k=1;k<=900000;k++);

    }

    system("pause");

    cout<<"\n Digite a porta ->";
    cin>>porta;

// piscando 10 vezes
    for(int i=0;i<10;i++)
    {
        linha = "envia.exe ";
        if(i%2==0) p1="1";
        else p1="0";
        p2="0";
        p3="0";
        linha = linha + porta + " " + p1 + " " + p2 + " " + p3;
        manda = new char[linha.length()+1];
        memcpy(manda, linha.c_str(), linha.length() + 1);
        system(manda);

    }

// Um segundo teste

    linha = "envia.exe ";
    cout<<"\n\n\n Digite primeiro numero ->";
    cin>>p1;
    cout<<"\n Digite segundo numero ->";
    cin>>p2;
    cout<<"\n Digite terceiro numero ->";
    cin>>p3;
    linha = linha + porta + " " + p1+ " "+p2+ " " + p3;
    manda = new char[linha.length()+1];
    memcpy(manda, linha.c_str(), linha.length() + 1);
    cout<<linha;
    system(manda);
    system ("pause");
    system ("envia.exe com10 0 0 0");

    return 0;
}
