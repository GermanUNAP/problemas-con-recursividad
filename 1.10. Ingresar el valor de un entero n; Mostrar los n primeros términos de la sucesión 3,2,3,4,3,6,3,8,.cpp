//Ingresar el valor de un entero: n; Mostrar los n primeros términos de la sucesión: 3,2,3,4,3,6,3,8,....

#include <iostream>

using namespace std;

void sucesion0(int j, int cont, int n){
	if(cont == n+1)
		return;
	else{
		if(cont%2==1){
			cout<<3<<", ";
			sucesion0(j,cont+1,n);
		}
		if(cont%2==0){
			cout<<j<<", ";
			sucesion0(j+2, cont+1, n);
		}
	}
}

int main(){
	int n;
	cin>>n;
	cout<<"=========================================="<<endl;
	sucesion0(2, 1, n);
	
	return 0;
}
