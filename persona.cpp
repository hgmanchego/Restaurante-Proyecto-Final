#include <iostream>
using namespace std;
class Persona{
protected:
	string nombre;
	string apellido;
	int edad;
public:
	void Setter(string a,string b,int c){
		nombre=a;
		apellido=b;
		edad=c;
	}
	void Print(){
		cout<<nombre<<" "<<apellido<<" "<<edad;
	}
};
class Comensal:public Persona{
private:
	int mesa;
public:
	void Setter(string a,string b,int c){
		nombre=a;
		apellido=b;
		mesa=c;
	}
	void Print(){
		cout<<nombre<<" "<<apellido<<" "<<mesa;
	}
};
class Empleado:public Persona{
private:
	string puesto;
public:
	void Setter(string a,string b,int c,string d){
		nombre=a;
		apellido=b;
		edad=c;
		puesto=d;
	}
	void Print(){
		cout<<nombre<<" "<<apellido<<" "<<edad<<" "<<puesto;	
	}
};
int main(int argc, char *argv[]){
	Persona alguien,*ptr=&alguien;
	ptr->Setter("Juan","Guzman",23);
	ptr->Print();
	cout<<endl;
	Comensal com;
	com.Setter("Pedro","Dias",5);
	com.Print();
	cout<<endl;
	Empleado em;
	em.Setter("Fulano","Palermo",27,"mesero");
	em.Print();
	return 0;
}
