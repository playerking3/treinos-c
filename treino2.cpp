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
	int tamanho, sabor, recheio, adc, entrega, quantidade, pagamento;
	
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
		cout<<"Insira Os adicionais desejados:\n1-Kit-Kat\n2-MM's\n3-Ambos\n4-Nenhum\n\n";
		cin>>adc;
		
		switch(adc){
			case 1: valor +=4.67;
			break;
			case 2: valor+=5.43;
			break;
			case 3: valor+=10.10;
			break;
			case 4: break;
			default: cout<<"Valor invalido, tente novamente\n\n";
			system("pause");
			system("cls");
		}
	}while(adc<0 or adc>4);
	
	system("cls");
	
	do{
		cout<<"Insira os as opções eddicionais de entrega desejados:\n1-embalado para presente\n2-Entrega em domicilio\n3-ambos\n4-Nenhum.\n\n";
		cin>>entrega;
		
		switch(entrega){
			case 1: valor+=2.50;
			break;
			case 2: valor+=5.00;
			break;
			case 3: valor+=7.50;
			break;
			case 4: break;
			default: cout<<"Valor invalido, tente novamente\n\n";
			system("pause");
			system("cls");
		}
	}while(entrega<0 or entrega >4);
	
	system("cls");
	
	do{
	
		cout<<"Insira a quantidade de ovos para encomenda: ";
		cin>> quantidade;
		
		if(quantidade<0){
			cout<<"Valor inválido, tente novamente\n\n";
			system("pause");
			system("cls");
		}else{
			valor *= quantidade;
			break;
		}
		
		
	}while(quantidade<0);
	
	system("cls");
	do{
		cout<<"insira a forma de pagamento:\n1-Cartão de crédito\n2-Dinheiro/pix\n\n";
		cin>> pagamento;
		
		switch(pagamento){
			case 1: valor+=3.30;
			break;
			case 2: valor *= 0.9;
			break;
			default: cout<<"Valor invalido, tente novamente\n\n";
			system("pause");
			system("cls");
		}
	}while(pagamento<0 or pagamento >2);
	system("cls");
	
	cout<<"O preço do ovo de pascoa é: R$"<<valor;
}
