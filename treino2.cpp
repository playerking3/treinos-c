#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"****************************\n";
	cout<<"*****Ovos da dona maria*****\n";
	cout<<"****************************\n";
	cout<<"*********Bem-vindo**********\n";
	cout<<"****************************\n";
	
	system("pause");
	system("cls");
	
	double valor;
	string tamanho, sabor;
	
	cout<<"Qual o tamanho do ovo desejado\n*Pequeno (P)\n*Médio (M)\n*Grande (G)\n\n(Responder com a inicial.)";
	cin>> tamanho;
	
	if(tamanho=="P"){
		valor = 7.80;
	}else if(tamanho=="M"){
		valor = 12.90;
	}else if(tamanho =="G"){
		valor = 23.95;
	}else{
		valor = 0;
	}
	
	system("pause");
	system("cls");
	
	cout<<"Qual é o sabor desejado:\n*Chocolate preto (P)\n*Chocolate branco (B)\n*Chocolate Ao-Leite (L)\n\n(Responder com a inicial.)";
	cin>> sabor;
	
	if(sabor)
	
	system("pause");
	system("cls");
	

}
