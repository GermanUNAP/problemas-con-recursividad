//Mostrar los múltiplos de 2 y 5 entre 0 y 100

#include <iostream>

using namespace std;
void multiplosDosCinco(int i, int n){
	if(i == n+1)
		return;
	else{
		if((i % 2 == 0) && (i%5==0) && i != 0){
			cout<<i<<endl;
		}
		multiplosDosCinco(i+1, n);
	}
	
}
int main(){
	multiplosDosCinco(0, 100);
	
	return 0;
}
