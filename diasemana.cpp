#include <iostream>

using namespace std;

int main()
{
    int condicion;
    string dia;

    cout << "Ingrese el dia de la semana: ";

    cin >> dia;

    if (dia == "lunes"){
        condicion = 1;
    }else if (dia == "martes"){
        condicion = 2;
    }else if (dia == "miercoles"){
        condicion = 3;
    }else if (dia == "jueves"){
        condicion = 4;
    }else if (dia == "viernes"){
        condicion = 5;
    }else if (dia == "sabado"){
        condicion = 6;
    }else if (dia == "domingo"){
        condicion = 7;
    }else{
        condicion = 0;
    }

    switch(condicion)
    {
    case 1:
        cout << "NO hay programacion" << endl;
    break;
    case 2:
        cout << "NO hay programacion" << endl;
    break;
    case 3:
        cout << "NO hay programacion" << endl;
    break;
    case 4:
        cout << "HAY programacion" << endl;
    break;
    case 5:
        cout << "HAY programacion" << endl;
    break;
    case 6:
        cout << "Es sabado, NO hay clases" << endl;
    break;
    case 7:
        cout << "Es domingo, NO hay clases" << endl;
    break;
    default:
        cout << "El dato no es un dia de la semana" << endl;
    break;
    }

    return 0;
}
