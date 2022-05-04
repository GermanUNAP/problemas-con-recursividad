//Mostrar el cuadrado de los números del 1 al 50

#include <iostream>

using namespace std;

void calcularCuadrado(int n, int i){
	if(i == n+1){
		return;
	}
	else{
		cout<<i*i<<endl;
		calcularCuadrado(n, i+1);
	}
	
}

int main(){
	calcularCuadrado(50, 1);
	
	return 0;
}
