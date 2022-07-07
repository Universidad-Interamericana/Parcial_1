#include <iostream>
#include <vector>
#include <list>
#include <ctime>



using namespace std;



string usuario = "";
string cont = "";
list <string> name;
list <string> lastname;
vector <int> id;
int id_contador = 0;
list <string> mail;
list <string> carr;

int pausa;

time_t tmNow = time(0);
char* dt = ctime(&tmNow);
const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum) - 1;
void ImprimirMenuBienvenida();
void MenuEstadoTickets();
void IngresarNuevoTicket();
void MostrarTicket();

void ImprimirMenuBienvenida() {

	cout << "Introduzca su nombre: ";
	cin >> usuario;
	cout << "Bienvenido al Portal de la XYZ! \n";
	cout << "Fecha y hora de inicio de sesion: ";
	cout << dt;
	cout << "\nSu usuario es: " + usuario;
	cout << "\nSu contrasena es: ";
	int n = 10;
	for (int i = 0; i < n; i++)
		cout << alphanum[rand() % string_length];
	"\n";
	cout << "\n Ingrese nueva contrasena: ";
	cin >> cont;
	cout << "Contrasena actualizada satisfactoriamente! \n";
	system("pause");
	system("CLS");


}

void MenuEstadoTickets() {
	cout << "Menu Estados de tickets: \n";
	cout << "Elija cual de las 3 opciones desea realizar: \n";
	cout << " 1- Subir un nuevo ticket \n";
	cout << " 2- Ver tickets existentes \n";
	cout << " 3- Salir del menu \n";
}

void IngresarNuevoTicket() {
	//variables locales
	string name_f ="";
	string lastname_f = "";
	string mail_f = "";
	string carr_f = "";

	id_contador = id_contador + 1;
	id.push_back(id_contador);
	cout << "\n Introduzca su nombre ";
	cin >> name_f;
	name.push_back(name_f);
	cout << "\n Introduzca su apellido: ";
	cin >> lastname_f;
	lastname.push_back(lastname_f);
	cout << "\n Introduzca su correo: ";
	cin >> mail_f;
	mail.push_back(mail_f);
	cout << "\n Introduzca la carrera que estudia: ";
	cin >> carr_f;
	carr.push_back(carr_f);

}

void MostrarTicket() {
	for (size_t i = 0; i< id.size(); i++) {
		cout << "---------------------";
		cout << "ID:\t";
		cout << id.at(i) << " " << endl;
	}
	for (string item : name) {
		cout << "---------------------";
		cout << "Nombre:\t";
		cout << item <<" "<< endl;
	}
	for (string item : lastname) {
		cout << "---------------------";
		cout << "Apellido:\t";
		cout << item << " " << endl;
	}
	for (string item : mail) {
		cout << "---------------------";
		cout << "Correo electronico:\t";
		cout << item << "@hotmail.com" << endl;
	}
	for (string item : carr) {
		cout << "---------------------";
		cout << "Carrera:\t";
		cout << item << " " << endl;
	}
	

}

int main()
{
	

	int opcion = 0;
	ImprimirMenuBienvenida();
	do {
		MenuEstadoTickets();
		cin >> opcion;
		if(opcion == 1 ){
			system("CLS");
			IngresarNuevoTicket();


		}
		else if (opcion == 2) {
			system("CLS");
			MostrarTicket();
		}
		else if (opcion == 3) {
			tmNow = time(0);
			dt = ctime(&tmNow);
			cout << "Fecha y hora de salida: ";
			cout << dt;
		}
		else
		{
			system("CLS");
			cout << "Opcion invalida, porfavor elegir numero entre 1 - 3" << endl << endl;
		}
	} while (!(opcion == 3));
	
}
