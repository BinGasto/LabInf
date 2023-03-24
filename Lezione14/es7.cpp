/*
	Name: 
	Copyright: 
	Author: 
	Date: 22/03/23 16:05
	Description: 
*/
#include <iostream>

using namespace std;
int coppia(int a,int b,int c){
	if(a==b or a==c) return a;
	else if(b==c) return b;
	else if(c==a) return c;
	else return 0;
}
/*int main(){
	int x,y,z,valore;
	cin>>x>>y>>z;
	valore=coppia(x,y,z);
	cout<<valore;
}*/


