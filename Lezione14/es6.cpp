/*
	Name:Cristian Ghimiciu
	Copyright: 
	Author: 
	Date: 22/03/23 15:22
	Description: 
*/
#include <iostream>
using namespace std;

void divisori(int m){
	int q=0;
	for(int i=m; i>0; i--){
		if(m%i==0){
			cout<<i<<"-";
			q=q+1;
		}
	}
	cout<<endl<<q;
}
/*int main (){
	int x=15;
	divisori(x);
}*/


