/*ejercicio de conbinatori utilizando la recursvidad
aCa=1
aC1=a
nCk=n-1Ck-1 +  n-1Ck*/
#include <iostream>
#include <windows.h>
using namespace std;

int combinatoria(int,int); // prototipo de la funcion

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int num1,num2;
	cout<<"\n\n------COMBINATORIA DE DOS NUMEROS--------\n\n";
	do{
		
		cout<<"Ingrese el término SUPERIOR: "; cin>>num1;
		cout<<"Ingrese el término INFERIOR: "; cin>>num2;
		cout<<"RESPUESTA: "<<combinatoria(num1,num2)<<endl;
		
	}while(num1>=0 || num2>=0);
	
	return 0;
}
int combinatoria(int n, int k){
	if(n==k){
		return 1;
	}else if(k==1){
		return n;
	}else{
		return combinatoria(n-1,k-1)+combinatoria(n-1,k);
	}
	
	
	
	
}