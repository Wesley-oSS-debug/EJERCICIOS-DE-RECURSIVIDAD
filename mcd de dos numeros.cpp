/* Ejercicio que halle el maximo MAXIMO COMUN DIVISOR (MCD)  de dos numeros*/
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int divisor(int, int);  //Prototipo de la funcion
 
 int main(){
 	SetConsoleOutputCP(CP_UTF8);
 	int num1,num2;
 	 cout<<"\n\n---------MAXIMO COMUN DIVISOR DE DOS NUMEROS---------\n\n";
 	cout<<"Ingrese el primer número: "; cin>>num1;
 	cout<<"Ingrese el segundo número: "; cin>>num2;
 	
	cout<<"\n";
 	cout<<"Máximo común de divisor de " <<num1<< " y "<<num2<<" es: "<<divisor(num1,num2);
 	getch();
 	return 0;
 	
 }
 
 int divisor(int a, int b){
 	
 	if(b==0){
 		return a;
	 }else{
	 	return divisor(b,a%b);
	 }
 		
 }