#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"****************************\n";
	cout<<"**Marcelo's concessionária**\n";
	cout<<"****************************\n";	
	cout<<"****************************\n";
	cout<<"*********Bem-Vindo**********\n";
	cout<<"****************************\n";
	
	system("pause");
	system("cls");
	
	string carros, bagagem;
	int porta, pessoas;
	float gasolina, alcool;
	
	cout<<"Qual carro você quer comprar?\n*Audi\n*BMW\n*Fiat\n*Ferrari\n\n";
	cin>>carros;
	
	if(carros=="Audi" or carros=="audi"){
		gasolina=12.8;
		alcool=10.9;
	}else if(carros=="BMW" or carros=="Bmw" or carros=="bmw"){
		gasolina=9.8;
		alcool=8.9;
	}else if(carros=="fiat" or carros=="Fiat"){
		gasolina=26.8;
		alcool=24.9;
	}else if(carros=="Ferrari" or carros=="ferrari"){
		gasolina=13.8;
		alcool=12.9;
	}else{
		gasolina=0;
		alcool=0;
	}

	system("pause");
	system("cls");
	
	cout<<"o modelo escolhido terá quantas portas?\n\n";
	cin>> porta;
	
	if(porta>4){
		gasolina = gasolina - 0.5;
		alcool = alcool - 0.5;	
	}
	
	system("pause");
	system("cls");
	
	cout<<"Quantos passsageiros o carro ira levar?\n\n";
	cin>>pessoas;
	
	if(pessoas>2){
		gasolina = gasolina - 1.2;
		alcool = alcool - 1.2;
	}

	system("pause");
	system("cls");
	
	cout<<"Pretende levar coisas no bagageiro?\nResponda com \"sim\" ou \"não\"\n\n";
	cin>> bagagem;
	
	if(bagagem == "sim"){
		gasolina = gasolina - 0.2;
		alcool = alcool - 0.2;
	}
	
	system("pause");
	system("cls");
	
	if(bagagem == "sim" && gasolina > 0){
		cout<<"O carro escolhido, da marca "<<carros<<" no modelo de "<<porta<<" portas com "<<pessoas<<" passageiros e com\nitens no bagageiro tem uma economia de: \n"<<gasolina<<" L/Km usando gasolina.\n"<<alcool<<" L/Km usando etanol.";		
	}else if (gasolina >0){
		cout<<"O carro escolhido, da marca "<<carros<<" no modelo de "<<porta<<" portas com "<<pessoas<<" passageiros e com\no bagageiro vazio tem uma economia de: \n"<<gasolina<<" L/Km usando gasolina.\n"<<alcool<<" L/Km usando etanol.";	
	}else{
		cout<<"Erro, a marca do carro não condiz com as alternativas.\nTente novamente. ";
	}
	

}
