#ifndef ARREGLO DINAMICO_H
#define ARREGLO DINAMICO_H


class ArregloDinamico
{
    int *data;
    int tam;
    public:
        ArregloDinamico(int[], int);
        ArregloDinamico(int);
        ~ArregloDinamico();
        void Insertar(int);
        int GetN(int);
        int GetTam();
};

#endif // ARREGLO DINAMICO_H
