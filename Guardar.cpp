#include <iostream>
#include <fstream>
using namespace std;
void escribir(string nom,string ape,int ed){
	ofstream archivo;
	
	archivo.open("Prueva.txt",ios::out);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<nom<<" "<<ape<<" "<<ed;
	archivo.close();
}
void leer(){
	ifstream archivo;
	string texto;
	archivo.open("Prueva.txt",ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,texto);
	}
}
int main(int argc, char *argv[]) {
	string nombre="Juan",apellido="Guzman";
	int edad=10;
	escribir(nombre, apellido, edad);
	
	return 0;
}

