//Hallar los 100 primeros términos de la sucesion: 3,5,7,9,...

#include <iostream>


using namespace std;

void sucesion(int n, int i){
	if(n == 101){
		return;
	}
	else{
		
		cout<<i<<", ";
		sucesion(n+1, i+2);
	}
}

int main(){
	sucesion(1, 3);
	
	return 0;
}

