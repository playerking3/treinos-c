#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int quantidade, combate, poder, total;
	
	cout<<"Selecione a quantidade de heróis: ";
	cin>>quantidade;
	
	for(int i = 1; i<=quantidade; i++){
		cout<<"Insira a força de combate do herói: ";
		cin>>combate;
		
		cout<<"insira a força de poderes especiais do herói: ";
		cin>>poder;
	}
	
}
