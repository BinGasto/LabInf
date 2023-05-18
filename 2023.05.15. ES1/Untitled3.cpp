/*
	Name: 
	Copyright: 
	Author: Cristian Ghimiciu
	Date: 17/05/23 15:10
	Description: 
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#define MAX_NAME 256

using namespace std;

struct studenti{
	string cognome;
	int voti;
};

char r[MAX_NAME];
float media=0;

void leggifile(char* r, studenti* vet);
float md(studenti* vet);
void stampa(studenti* vet);
void riordina(studenti * vet);
void scrivi(studenti * vet);

int main(){
	studenti vet[10];
	cout<<"inserisci il nome del file da aprire"<<endl;
	cin>>r;
	leggifile(r,vet);
	stampa(vet);
	float media=md(vet);
	riordina(vet);
	scrivi(vet);
}


void leggifile(char* r, studenti* vet){
	int conta=0;
	string c;
	fstream fil;
	fil.open(r,ios::in);
	while(getline(fil,c)&&(!c.empty())){
		vet[conta].cognome=c;
		getline(fil,c);
		stringstream ss;
		ss<<c;
		ss>>vet[conta].voti;
		conta++;
	}
	fil.close();
}
float md( studenti* vet){
	for(int i=0; i<10; i++){
		media+=vet[i].voti;
	}
	media=media/10;
	cout<<"Media : "<<media<<endl;
	return media;
}
void stampa(studenti* vet){
	for(int i=0; i<10; i++){
		cout<<vet[i].cognome<<" "<<vet[i].voti<<endl;
	}
}
void riordina(studenti * vet){
	int temp;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(vet[j].voti<vet[j+1].voti){
				temp=vet[j].voti;
				vet[j].voti=vet[j+1].voti;
				vet[j+1].voti=temp;
			}
		}
	}
}
void scrivi(studenti * vet){
	int dim=0;
	int j=0;
	while(vet[j].voti>media){
		j++;
	}
	
	fstream fil2;
	cout<<"inserisci il nome del file su cui scrivere"<<endl;
	cin>>r;
	fil2.open(r,ios::app);
	for(int i=0; i<j;i++){

		fil2<<vet[i].cognome<<endl;
		fil2<<vet[i].voti<<endl;
	}
}
