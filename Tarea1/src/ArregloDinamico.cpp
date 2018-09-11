#include "ArregloDinamico.h"

ArregloDinamico::ArregloDinamico(int a[],int tam){
    this->tam = tam;
    data=new int [tam];
    for(int i=0;i<tam;i++){
        data[i]=a[i];
    }
}

ArregloDinamico::ArregloDinamico(int tam){
    this->tam = tam;
    data=new int [tam];
}

ArregloDinamico::~ArregloDinamico(){
    delete []data;
}

void ArregloDinamico::Insertar(int n){
    int *nuevo=new int[tam+1];
    for(int i=0;i<tam;i++)
        nuevo[i]=data[i];
    nuevo[tam]=n;
    tam++;
    delete []data;
    data=nuevo;
}

int ArregloDinamico::GetN(int n){
    return data[n];
}

int ArregloDinamico::GetTam(){
    return tam;
}

void ArregloDinamico::Imp(){
    for(int i=0;i<tam-1;i++)
        cout<<data[i]<<" ";
    cout<<data[tam-1]<<endl;
}
