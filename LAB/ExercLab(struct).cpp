//Exercicio 01: O homem mais forte do mundo
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale> 

using namespace std;

int main()
{
	struct dados
	{
		char nome[50];
		int n1, n2, n3, n4, nf;
	};
	
	dados vet[100];
	
	int quant, pos = 0;
	cin>>quant;
	
	for(int i=0; i<quant; i++)
	{
		cin.ignore();
		cin.getline(vet[i].nome, 50);
		cin>>vet[i].n1;
		cin>>vet[i].n2;
		cin>>vet[i].n3;
		cin>>vet[i].n4;
		
		vet[i].nf = vet[i].n1 + vet[i].n2 + vet[i].n3 + vet[i].n4;
	}
	
	int maior = vet[0].nf;
	
	for(int i=0; i<quant; i++)
	{
		if(vet[i].nf>maior)
		{
		   maior = vet[i].nf;	
		   pos = i;
		}
		
	}

	cout<<"Vencedor: "<<vet[pos].nome;
	
	return 0;
}

/*
Exercicio 02: Números da sote
#include <iostream>
#include <iomanip>
#include <locale> 

using namespace std;

int main()
{
	struct dados
	{
		int num;
	};
	
	dados vet[10];
	
	int quant, soma=0;
	cin>>quant;
	
	for(int i=0; i<quant; i++)
	{
		cin>>vet[i].num;
	}
	
	for(int i=0; i<quant; i++)
	{
		if(vet[i].num%2 == 0)
		{
		   soma += vet[i].num;
		}
	}

	cout<<soma;
	
	return 0;
}

Exercicio 03: Simples
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale> 

using namespace std;

int main()
{
	struct dados
	{
		char nome[50], nasc[10];
		char sexo;
	};
	
	dados vet[100];
	
	//teste executado para atender duas pessoas
	for(int i=0; i<2; i++)
	{
		cin.getline(vet[i].nome, 50);
		cin.getline(vet[i].nasc, 10);
		cin>>vet[i].sexo;
	}
	
	for(int i=0; i<2; i++)
	{
		cout<<vet[i].nome<<endl;
		cout<<vet[i].nasc<<endl;
		cout<<vet[i].sexo<<endl;
	}
	
	return 0;
}
*/