/*2.- Programa recursivo que busque un valor x en un arreglo unidimensional de enteros*/
#include <iostream>
#include <windows.h>
using namespace std;

bool buscar(int[], int, int);
int main(){
		SetConsoleOutputCP(CP_UTF8);
	int num;
	int tam;
	cout<<"\n\n\t------Programa recursivo que busque un valor x en un arreglo unidimensional de enteros-----\n\n";
	cout<<"Ingrese el tamaño del arreglo: "; cin>>tam;
	int array[tam];
	for(int i=0;i<tam;i++){
		cout<<"Ingrese el elemento ["<<i+1<<"] : "; cin>>array[i];
	}
	cout<<"\n";
	cout<<"Ingrese el número a buscar: "; cin>>num;
	if(buscar(array,tam,num)==true){
		cout<<"El número  ""["<<num<<"]" " SI ha sido encontrado ";
	}else{
		cout<<"El número  ""["<<num<<"]" " NO ha sido encontrado ";
	}
	return 0;
}
 bool buscar(int array[], int tam, int x){
 	if(tam==0){
 		return false;
	 } else if(array[tam-1]==x){
	 	return true;
	 }else{	
	 	return buscar(array,tam-1,x);
	 }
 }