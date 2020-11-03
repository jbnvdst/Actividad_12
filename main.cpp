#include <iostream>
#include "ArregloDinamico.h"

using namespace std;

int main()
{
    ArregloDinamico<string> arreglo;

    arreglo.insertar_inicio("Segundo string");
    arreglo.insertar_inicio("Primer string");
    arreglo.insertar_final("Tercer string");
    arreglo.insertar_final("Cuarto string");

    arreglo.insertar("String de la posicion 2", 2);

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);


    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }


    cout << endl;

    return 0;
}
