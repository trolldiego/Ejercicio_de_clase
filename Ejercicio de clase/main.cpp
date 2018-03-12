#include <iostream>// biblioteca entrada y salida datos

using namespace std; //palabras reservadas

int main()
{
    int mes = 0 , anio = 0, dato = 0,total=0; //declarar variables

    cout << " Ingrese la fecha" << endl ;
    cin >> dato;

    if (dato<=31129999)
    {
        total=dato/1000000;
        mes=(dato/10000)%100;
        anio=(dato%10000);

        if (mes>12)
        {
            cout << "Mes erroneo";
        }

        else if (total>31)
        {
            cout << "Dia erroneo";
        }
        else
        {
            cout << "Es " << total <<" del mes " << mes << " del año " <<anio << endl;

        }
    }
    else
    {
        cout << "Error";
    }





    return 0;
}
