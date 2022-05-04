//Mostrar los n  primeros términos de las serie 3,6,9,12,…

#include <iostream>

using namespace std;

void serieN(int i, int n){
	if(i == n+1)
		return;
	else{
		cout<<i*3<<endl;
		serieN(i+1, n);
	}
	
}

int main(){
	int n;
	cin>>n;
	cout<<"====================================="<<endl;
	serieN(1, n);
	return 0;
}
