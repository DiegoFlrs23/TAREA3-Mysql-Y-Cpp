// mysql_c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cliente.h"
using namespace std;

int main()
{
    
    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;
    cout << "Ingrese Nit: ";
    getline(cin, nit);
    cout << "Ingrese Nombres: ";
    getline(cin, nombres);
    cout << "Ingrese Apellidos: ";
    getline(cin, apellidos);
    cout << "Ingrese Direccion: ";
    getline(cin, direccion);
    cout << "Ingrese Telefono: ";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Fecha Nacimiento: ";
    cin >> fecha_nacimiento;

    Cliente c = Cliente (nombres,apellidos,direccion,fecha_nacimiento,telefono,nit);
    c.crear();
    c.leer();
       
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file