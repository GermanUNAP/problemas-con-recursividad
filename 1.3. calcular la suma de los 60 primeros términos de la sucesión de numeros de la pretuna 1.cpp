//Calcular la suma de los 60 primeros t�rminos de la sucesi�n de n�meros de la pregunta 1.

#include <iostream>

using namespace std;
void sucesion3(int n, int i){
	if(n == 61){
		return;
	}
	else{
		
		cout<<i<<", ";
		sucesion3(n+1, i+2);
	}
}
int main(){
	sucesion3(1, 3);
	
	return 0;
}
