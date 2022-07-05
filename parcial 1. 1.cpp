#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    time_t tiempoahora;
    time( & tiempoahora);
    string mensaje1 = "Ha iniciado sesion correctamente \n";
    string mensaje2 = "Usuario o contrasena incorrecta";
    string usuario = "";
    string pass = "XYZ.2022";
    string cont;
    int opt;
    string name = "";
    string lastname = "";
    int id;
    string ticket = "";
    string mail = "@hotmail.com";
    char carr[60];

    cout << "Introduzca su nombre:";
    cin >> usuario;
    cout << "Bienvenido al Portal de la XYZ! \n";
    cout << "Fecha y hora de inicio de sesion: ";
    printf("%s\n", ctime( & tiempoahora));
    "\n";
    cout << "Su usuario es: " + usuario;
    "\n";
    cout << "\nSu constrasena es: ";
    srand(time(NULL));
    printf("%d", rand());
    printf("%d", RAND_MAX);
    "\n";

    cout << "\n Ingrese nueva contrasena: ";
    cin >> cont;
    cout << "Contrasena actualizada satisfactoriamente! \n";
    cout<<"\n"<<endl;
    while (true) {
        cout << "Menu Estados de tickets: \n";
        cout << "Elija cual de las 3 opciones desea realizar: \n";
        cout << " 1- Subir un nuevo ticket \n";
        cout << " 2- Ver tickets existentes \n";
        cout << " 3- Salir del menu \n";
        cin >> opt;

        if (opt == 1) {
            cout << "\n Introduzca su nombre ";
            cin >> name;
            cout << "\n Introduzca su apellido: ";
            cin >> lastname;
            cout << "\n Introduzca su ID: ";
            cin >> id;
            cout << "\n Introduzca su correo: ";
            cin >> mail;
            cout << "\n Introduzca la carrera que estudia: ";
            cin >> carr;
            
            //Falta agregar el espacio para que el usuario ingrese la solucitud del ticket
            //Falta generar codigo del ticket
        } else if (opt == 2) {
            cout << "Tickets activos: \n";
        } else if (opt == 3) {
            cout << "Fecha y hora de salida: ";
            printf("%s\n", ctime( & tiempoahora)); //me aparece la misma hora y fecha del inicio
            break;
        } else {
            cout << "Error: opcion invalida \n";
            break;
        }
    }

    return 0;
}
