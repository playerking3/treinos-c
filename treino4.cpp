#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int quantidade, combate, poder, total;
	
	cout<<"Selecione a quantidade de her�is: ";
	cin>>quantidade;
	
	for(int i = 1; i<=quantidade; i++){
		cout<<"Insira a for�a de combate do her�i: ";
		cin>>combate;
		
		cout<<"insira a for�a de poderes especiais do her�i: ";
		cin>>poder;
	}
	
}
