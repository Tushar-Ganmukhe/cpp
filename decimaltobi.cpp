#include<iostream>
using namespace std;

void decitobi(int x){
	int b;
	 while(x>0){
	 	b=x%2;
	 	
	 	cout<<b;
	 	
	 	x/=2;
	 }
}
int main(){
	
	decitobi(5);
}
