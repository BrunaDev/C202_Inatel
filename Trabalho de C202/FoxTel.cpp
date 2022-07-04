#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	//Struct responsável por armazenar mais informações dos clientes
	struct cadastro
	{

		char nome[50];
		char cpf[12];
		int op; //aonde vai colocar a escolha entre os planos 1-2-3
		double total, Desc; //calculos
	};
	
	cadastro foxtel[50]; //vetor responsável por armazenar os clientes
	
	int N, pos;
	char x[12];
	double precoD, precoV, precoVI;
	int dados, voz, vozInter; //Dados, voz e ligações internacionais adicionais

	cout<<"Digite a quantidade de pessoas: ";
	cin >> N; //Entra com a quantidade
	
	for(int i = 0; i < N; i++) //Loop para entrar com as informações dos clientes
	{
		cin.ignore();
		cout << endl << "Digite o nome: ";
		cin.getline(foxtel[i].nome, 50);
		
		do{
			cout << "Digite o cpf: ";
			cin >> foxtel[i].cpf;
		}while(strlen(foxtel[i].cpf)!=11); //verifica se o CPF tem 11 digitos


		do
		{
			cout << "Escolha o plano 1-basic, 2-normal, 3-Premium: ";
			cin >> foxtel[i].op;
		}while(foxtel[i].op < 1 || foxtel[i].op > 3); //verifica se a opção escolhida é válida

		switch(foxtel[i].op)
		{
			case 1: //Plano basic
				cout << "Digite a quantidade de minutos adicionais para ligações: ";
				cin >> voz;
				precoV = 0.99 * voz; //sera cobrado a mais por minutos
				cout << "Digite a quantidade de dados adicionais diarios: ";
				cin >> dados; //sera cobrado por cada giga
				precoD = 1.99 * dados;
				foxtel[i].total = 39.90 + precoV + precoD;
				break;
			case 2:
				cout << "Digite a quantidade de minutos adicionais para ligações: ";
				cin >> voz;
				precoV = 0.99 * voz; //sera cobrado a mais por minutos
				cout << "Digite a quantidade de dados adicionais diarios: ";
				cin >> dados; //sera cobrado por cada giga
				precoD = 1.99 * dados;
				foxtel[i].total = 59.90 + precoV + precoD;
				break;
			case 3:
				cout << "Digite a quantidade de minutos adicionais para ligações: ";
				cin >> voz;
				precoV = 0.99 * voz; //sera cobrado a mais por minutos
				cout << "Digite a quantidade de dados adicionais diarios: ";
				cin >> dados; //sera cobrado por cada giga
				precoD = 1.99 * dados;
				cout << "Digite a quantidade de minutos adicionais para ligações internacionais: ";
				cin >> vozInter; //sera cobrado por cada minuto internacional
				precoVI = 2.99 * vozInter;
				foxtel[i].Desc = (79.90 + precoV + precoD + precoVI) * 0.1; //Desconto de 10%
				foxtel[i].total = (79.90 + precoV + precoD + precoVI) - foxtel[i].Desc;
				break;
		}
	}

	cout<<endl;
	cout<<"Relatorio de Clientes a partir do CPF"<<endl;
	cout << "Digite o CPF: ";
	
	cin >> x;
	for(int i = 0; i < N; i++)
	{		
		if(strcmp(foxtel[i].cpf, x) == 0)
		{
			pos = i;	
		}
	}

	cout << endl;
	cout << "O cliente " <<foxtel[pos].nome<< " escolheu o plano " << foxtel[pos].op << endl;
	cout << "O total de sua fatura sera de: " << fixed << setprecision(2) << foxtel[pos].total << " reais" << endl;
	
	if(foxtel[pos].op == 3)
	{
		cout << "Quantidade de desconto para o plano 3: " << fixed << setprecision(2) << foxtel[pos].Desc << " reais" << endl;
	}


	/*Plano 1 – Basic

	Voz - Ilimitada + 15min (outra operadora)

	Mensagens - ilimitado

	Dados – 5G

	Plano 2 – Normal

	Voz – Ilimitada + 40min (outra operadora)

	Mensagens - Ilimitado

	Dados – 15G (dados nao consomem wpp e waze)

	Plano 3 - Premium

	Voz – Ilimitado todas operadoras

	Voz Internacional - 35min

	Mensagens - Ilimitado

	Dados – 30G

	Dados não consomem waze e redes sociais (Wpp, Twt, Instagram, Facebook e Menssenger); */

	return 0;
}
