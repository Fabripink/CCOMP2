#ifndef ARREGLO DINAMICO_H
#define ARREGLO DINAMICO_H


class ArregloDinamico
{
    int *data;
    int tam;
    public:
        ArregloDinamico(int[], int);
        ~ArregloDinamico();
        void Insertar(int);
        int GetN(int);
};

#endif // ARREGLO DINAMICO_H
