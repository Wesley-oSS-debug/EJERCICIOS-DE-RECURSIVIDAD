/*programa que calcule la potecia de n de un numero x (n es un numero natural)*/
#include <iostream>
#include <windows.h>
using namespace std;

int p(int,int);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int num, potencia;
	cout<<"\n\n----------POTENCIA DE UN NUMERO---------\n\n";
	cout<<"\n\t\tx²\n\n";
	cout<<"Ingrese el numero(x): "; cin>>num;
	cout<<"Ingrese la potencia del numero(y): "; cin>>potencia;
	if(potencia<0){
		cout<<"\nERROR\n";
		return 0;
	}
	cout<<"\n";
	cout<<"RESPUESTA: "<<p(num,potencia);

	return 0;
}

int p(int x, int y){
	 
	 if(y==0){
	 	
	 	return 1;
	 }else{
	 	return x * p(x,y-1);
	 }
	
	
}