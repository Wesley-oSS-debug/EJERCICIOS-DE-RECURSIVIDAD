/* factorial de un numero en recursividad*/

#include <iostream>
using namespace std;

int factorial(int n);// prototipo de la funcion

 int main(){
 	
 	int numero;
 	cout<<" Ingrese de NUMERO para hallar su FACTORIAL: "; cin>>numero;
	cout<<" EL FACTORIAL ES: "<<factorial(numero)<<endl;
 }
 
 int factorial(int n){
 	if(n==0){
 		 return 1;
	 }else{
	 	return factorial(n-1)*n;
	 }
 	
 }