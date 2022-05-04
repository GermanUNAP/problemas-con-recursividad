//Calcular el promedio de 10 números ingresados por teclado;

#include <iostream>

using namespace std;
int prom = 0;
int var;
int promedio(int n, int i){
	if(n == i){
		return prom/i;
	}
	else{
		cin>>var;
		prom +=var;
		promedio(n+1, i);
	}
}

int main(){
	int a = promedio(0, 10);
	cout<<a<<endl;
	return 0;
}
