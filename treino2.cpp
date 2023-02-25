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
	
	float valor;
	int tamanho, sabor, recheio, adc, entrega;
	
	do{
		cout<<"Insira o tamanho do Ovo:\n1-Pequeno\n2-Médio\n3-Grande\n\n";
		cin>>tamanho;
		
		switch(tamanho){
			case 1: valor += 7.80;
			break;
			case 2: valor += 12.90;
			break;
			case 3: valor += 23.95;
			break;
			default: cout<<"Valor invalido, tente novamente\n\n";
			system("pause");
			system("cls");
		}
	}while(tamanho<0 or tamanho >3);
	
	system("cls");
	
	do{
		cout<<"Insira o sabor do Ovo:\n1-Chocolate preto\n2-Chocolate Branco\n3-Chocolate Ao-Leite\n\n";
		cin>> sabor;
		
		switch(sabor){
			case 1: valor +=9.67;
			break;
			case 2: valor +=4.50;
			break;
			case 3: valor +=9.32;
			break;
			default: cout<<"Valor invalido, tente novamente\n\n";
			system("pause");
			system("cls");
		}
	}while(sabor<0 or sabor>3);
	
	system("cls");
	
	do{
		cout<<"Insira os recheios desejados:\n1-Chocolate Preto\n2-Chocolate Branco\n3-Meio a meio\n\n";
		cin>>recheio;
		
		switch(recheio){
			case 1: valor += 9.67;
			break;
			case 2: valor += 4.50;
			break;
			case 3: valor += 7.08;
			break; 
			default: cout<<"Valor invalido, tente novamente\n\n";
			system("pause");
			system("cls");
		}
	}while(recheio<0 or recheio >3);
	
 	system("cls");

	do{
		cout<<"Insira Os adicionais desejados:\n1-Kit-Kat\n2-MM's\n3-Ambos\n\n";
		cin>>adc;
		
		switch(adc){
			case 1: valor +=4.67;
			break;
			case 2: valor+=5.43;
			break;
			case 3: valor+=10.10;
			break;
			default: cout<<"Valor invalido, tente novamente\n\n";
			system("pause");
			system("cls");
		}
	}while(adc<0 or adc>3);
	
	system("cls");
	
	do{
		cout<<"Insira os as opções eddicionais de entrega desejados:\n1-embalado para presente\n2-Entrega em domicilio\n3-ambos\n4-Nenhum.\n\n";
		cin>>entrega;
	}while(entrega<0 or entrega >4);
}
