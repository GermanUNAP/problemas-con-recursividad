//Mostrar los 40 primeros números que sean múltiplos de 7

#include <iostream>

using namespace std;

void multiplosDeSiete(int i, int n){
	if(i==n+1)
		return;
	else{
		cout<<7*i<<endl;
		multiplosDeSiete(i+1, n);
	}
}

int main(){
	multiplosDeSiete(1, 40);
	
	return 0;
}
