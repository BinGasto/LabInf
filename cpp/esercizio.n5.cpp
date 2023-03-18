/*
	Name: Esercitazione numero 5
	Copyright: 
	Author: Cristian Ghimiciu e Veronesi Claudio
	Date: 02/03/23 15:22
	Description: programma che grazie all'ausilio sfrenato dell'if permette all'utente e ad un suo amico di giocare al gioco del tris
*/
#include <iostream>

using namespace std;

int legge_posizione( int [9] );

int main (void){
	int t[9]={0},i=0,giocatore,sg=1,posizione; //sg=scelta giocatore
	cout<<"Benvenuti nel tris! Il funzionamento del gioco è molto semplice, ad ogni turno verrá chiesto ad un giocatore di fare la sua mossa scrivendo la casella che desidera cambiare"<<endl;
	while (i==0){
		cout<<"La situazione attuale è "<<endl<<"["<<t[0]<<"]"<<"  "<<"["<<t[1]<<"]"<<"  "<<"["<<t[2]<<"]"<<"  "<<endl<<"["<<t[3]<<"]"<<"  "<<"["<<t[4]<<"]"<<"  "<<"["<<t[5]<<"]"<<"  "<<endl<<"["<<t[6]<<"]"<<"  "<<"["<<t[7]<<"]"<<"  "<<"["<<t[8]<<"]"<<"  "<<endl;
		if (sg==1){
			cout<<"Giocatore 1 fai la tua mossa! ";
			posizione=legge_posizione( t );
			posizione=posizione-1;
			sg=2;
			t[posizione]=1;
			}
		else{
			cout<<"Giocatore 2 fai la tua mossa! ";
			posizione=legge_posizione(t);
			posizione=posizione-1;
			sg=1;
			t[posizione]=4;
			}
		if(t[0]+t[4]+t[8]==3 or t[0]+t[3]+t[6]==3 or t[0]+t[1]+t[2]==3 or t[1]+t[4]+t[7]==3 or t[2]+t[5]+t[8]==3 or t[3]+t[4]+t[5]==3 or t[6]+t[7]+t[8]==3 or t[2]+t[4]+t[6]==3){
			cout<<"Il giocatore numero 1 ha vinto!";
			i=1;
			}
		else if(t[0]+t[4]+t[8]==12 or t[0]+t[3]+t[6]==12 or t[0]+t[1]+t[2]==12 or t[1]+t[4]+t[7]==12 or t[2]+t[5]+t[8]==12 or t[3]+t[4]+t[5]==12 or t[6]+t[7]+t[8]==12 or t[2]+t[4]+t[6]==12){
			cout<<"Il giocatore numero 1 ha vinto!";
			i=1;
			}
		else if(t[0]+t[1]+t[2]+t[3]+t[4]+t[5]+t[6]+t[7]+t[8]>=21){
			cout<<"Pareggio :(";
			i=1;
			}
		else{
			i=0;
			}
		}
}

int legge_posizione(int t[9] ){

	int p;

	cin >> p;
	while ( (p < 1)  or (p > 9) or (t[p-1] != 0) ){
		cout << "non puoi inserire" << p << endl;
		cout << "fai un altra mossa " ;
		cin >> p ;
	};
	return p;
}
