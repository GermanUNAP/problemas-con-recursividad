//Ingresar el valor de un entero: n; Mostrar los n primeros términos de la sucesión: -20,20,-18,19,-16,18,-14,17,....


#include <iostream>

using namespace std;

void sucesionN(int i, int j, int cont, int n){
	if(cont == n+1)
		return;
	else{
		if(cont%2==1){
			cout<<i<<", ";
			sucesionN(i+2,j,cont+1,n);
		}
		if(cont%2==0){
			cout<<j<<", ";
			sucesionN(i,j-1, cont+1, n);
		}
	}
}

int main(){
	int n;
	cin>>n;
	cout<<"====================================="<<endl;
	sucesionN(-20, 20, 1, n);
	
	return 0;
}
