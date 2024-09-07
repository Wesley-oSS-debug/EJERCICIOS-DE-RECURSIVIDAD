/* ejercio de suma de elementos de un array*/

#include <iostream>
#include <windows.h>
using namespace std;

int suma(int,int[]); //prototipo de  la funcion

int main(){
	SetConsoleOutputCP(CP_UTF8);
int tam;
int array[100];
cout<<"Ingrese el tamaño de ARRAY: "; cin>>tam;
if(tam>100){
	
	cout<<"\nERROR\n";
}

for(int i;i<tam;i++){
	cout<<"Ingrese el elemento["<<i+1<<"]:";
	cin>>array[i];
}
cout<<"\n";
cout<<"LA SUMA DE LOS ELEMENTOS DEL ARRAY ES: "<<suma(tam,array);

	return 0;
}
 int suma(int tam, int array[]){
 	if(tam==0){
 		return 0;
	 }else{
	 	if(tam==1){
	 		return array[0];
		 }else{
		 	
	 	return array[tam-1]+suma(tam-1,array);
		 }
	 	
	 }
 		
 }