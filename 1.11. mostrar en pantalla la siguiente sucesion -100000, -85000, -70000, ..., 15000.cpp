//Mostrar en le pantalla la siguiente sucesión: -100000, -85000,-70000,...,+15000

#include <iostream>

using namespace std;

void sucesion1(long i, long n){
	if(i >= n){
		cout<<i;
		return;
	}
	else{
		cout<<i<<", ";
		sucesion1(i+15000, n);
	}
}


int main(){
	sucesion1(-100000, 15000);
	
	return 0;
}
