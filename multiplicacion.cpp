/* multiplicacion de un numero en recursividad*/

#include <iostream>
using namespace std;

int MUL(int a, int b);// prototipo de la funcion

 int main(){
 	
 	int num1,num2;
 	cout<<" Ingrese el PRIMER numero a multiplicar: "; cin>>num1;
 	cout<<"Ingrese el SEGUNDO numero a multiplicar: "; cin>>num2;
	cout<<" La MULTIPLICACION ES: "<<MUL(num1,num2)<<endl;
 }
 
 int MUL(int a, int b){
 	if(b==0){
 		 return 0;
	 }else{
	 	return a+MUL(a,b-1);
	 }
 	
 }