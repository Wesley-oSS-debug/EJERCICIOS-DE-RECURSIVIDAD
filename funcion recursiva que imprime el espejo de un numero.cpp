/*4.- Escriba una funcion recursiva  que dado un numero entero positivo (no string ) calcule
 su imagen especular. Por ejemplo f(345)=543*/
 #include <iostream>
 #include <windows.h>
 using namespace std;
 int espejo(int,int);
  
  int main(){
  		SetConsoleOutputCP(CP_UTF8);
  	int espejonum=0;
  	int num;
  	cout<<"Ingrese el número : "; cin>>num;
  	cout<<"EL NUMERO ESPEJO ES: "<<espejo(num,espejonum);
  	return 0;
  }
  
 int espejo(int n, int m){
 	if(n==0){
 		return m;
	 }else{
	 	m=(m*10) + (n%10);
	 	return espejo(n/10,m);	
	 }	
 } 