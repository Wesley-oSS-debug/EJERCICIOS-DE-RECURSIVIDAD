/*Programa recursivo que encuentre el maximo valor de un arreglo unidimensional*/

#include <iostream>
using namespace std;

int buscar(int[], int);
int main(){
	
	int num;
	int array[]={556,5,9,3,7,2,1,0,5,12,45,23};
	int tam=sizeof(array)/sizeof(array[0]);
	cout<<"\n\n\t------Programa recursivo que busque el maximo valor de un arreglo unidimensional-----\n\n";
	cout<<"\nARRAY={3,5,9,3,7,2,1}\n";
	cout<<"\nTAMAÑO DEL ARREGLO:"<<tam<<endl;

	cout<<"El numero  ""["<<buscar(array,tam)<<"]" " es el MAXIMO VALOR ";

	return 0;
}
 int buscar(int array[], int tam){
 	if(tam==1){
 		return array[0];
	 
	 }
	 int maxRestante = buscar(array, tam - 1);

    // Comparar el último elemento con el máximo del resto del arreglo
    if (array[tam - 1] > maxRestante) {
        return array[tam - 1];
    } else {
        return maxRestante;
    }
 	
 }