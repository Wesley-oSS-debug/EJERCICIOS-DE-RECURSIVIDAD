/*Programa recursivo que busque un valor x en un arreglo unidimensional de enteros*/

#include <iostream>
using namespace std;

bool buscar(int[], int, int);
int main(){
	
	int num;
	int array[]={3,5,7,3,9,2,1};
	int tam=sizeof(array)/sizeof(array[0]);
	cout<<"\n\n\t------Programa recursivo que busque un valor x en un arreglo unidimensional de enteros-----\n\n";
	cout<<"\nARRAY={3,5,7,3,9,2,1}\n";
	cout<<"Ingrese el numero a buscar: "; cin>>num;
	if(buscar(array,tam,num)){
		cout<<"El numero  ""["<<num<<"]" " SI ha sido encontrado ";
	}else{
		cout<<"El numero  ""["<<num<<"]" " NO ha sido encontrado ";
	}
	
	return 0;
}
 bool buscar(int array[], int tam, int x){
 	if(tam==0){
 		return false;
	 } if(array[tam-1]==x){
	 	
	 	return true;
	 	
	 }else{
	 	
	 	return buscar(array,tam-1,x);
	 }
 	
 	
 }