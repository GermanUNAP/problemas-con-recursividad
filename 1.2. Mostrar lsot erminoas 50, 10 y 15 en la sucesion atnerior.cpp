//2. Mostrar los términos 50,10 y 15 de la sucesión de la pregunta anterior

#include <iostream>

using namespace std;

void sucesion2(int n, int i){
	if(n == 101){
		return;
	}
	else{
		if( n == 5 || n == 25){
			cout<<i-1<<endl; 
		}
		cout<<i<<", ";
		sucesion2(n+1, i+2);
	}
}

int main(){
	sucesion2(1, 3);
	
	
	
	return 0;
}
