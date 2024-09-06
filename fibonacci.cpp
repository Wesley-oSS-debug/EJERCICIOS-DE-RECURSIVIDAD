/*  secuencia  de fibonacci con recursividad 

0,1,1,2,3,5,8,13,21,....*/
#include <iostream>
#include <windows.h>
using namespace std;

 int fibonacci(int); // prototipo de la funcion 

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int num;
	cout<<"\n\n-----------SERIE FIBONACCI----------\n\n";
	cout<<"\n\n/  0,1,1,2,3,5,8,13,21,......./\n\n";
	do{
	cout<<"INGRESE el término enésimo de la serie FIBONACCI:\n"; cin>>num;
	cout <<"SERIE FIBONACCI: "<<fibonacci(num)<<" ";
	cout<<"\n";
	}while(num>=0);
	
	return 0;
}

int fibonacci(int x){
	
	if(x==0){
	
		return 0;
	}else if(x==1){
		return 1;
	}else{
		return fibonacci(x-1)+fibonacci(x-2);
	}	
}