/*ejercicio de suma de primeros numeros naturales usando recursividad*/
#include <iostream>
#include <windows.h>

using namespace std;

int sumatoria(int); // prototipo de la funcione
int main(){
	SetConsoleOutputCP(CP_UTF8);
	int num;
	cout<<"INGRESE LA CANTIDAD DE NÚMEROS A SUMAR: "; cin>>num;
	cout<<"LA SUMATORIA ES: "<<sumatoria(num);
	return 0;
}
 int sumatoria(int x){
 	if(x==1){
 		
 		return 1;
	 }else{
	 	
	 	return x + sumatoria(x-1);
	 }
 	
 	
 	
 	
 	
 }