/*1.- programa que calcule la potencia de n de un numero x (n es un numero natural)*/
#include <iostream>
#include <windows.h>
using namespace std;
int potencia(int,int);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n, e,p;
	cout<<"\n\n----------POTENCIA DE UN NUMERO---------\n\n";
	cout<<"\n\t\tx²\n\n";
	cout<<"Ingrese el numero(x): "; cin>>n;
	cout<<"Ingrese la potencia del numero(y): "; cin>>e;
	if(e<0){
		cout<<"\nERROR\n";
		return 0;
	}
	cout<<"\n";
	p=potencia(n,e),
	cout<<"RESPUESTA: "<<p;
	return 0;
}
int potencia(int x, int y){
	 
	 if(y==0){
	 	return 1;
	 }else{
	 	return x * potencia(x,y-1);
	 }
}
