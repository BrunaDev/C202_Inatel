#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	// char vet[8];
	// 
	// for(int i=0; i<8; i++)
	// {
	// 	cin>>vet[i];
	// }
	// 
	// for(int i=7; i<=0; i++)
	// {
	// 	cout<<vet[i];
	// }
	
	char nome[50], nome1[50], nome2[50];
	
	cin.getline(nome, 50);
	cin.getline(nome1, 50);
	
	cout<<"Tamanho do nome 1: "<<strlen(nome)<<endl;
	cout<<"Tamanho do nome 2: "<<strlen(nome1)<<endl;
	
	if(strcpy(nome, nome1) == 0)
	{
		cout<<"Os nomes sao iguais"<<endl;
	}
	else
	{
		cout<<"Os nomes nao sao iguais"<<endl;
	}
	
	cout<<endl;
	
	strcpy(nome2, nome1);
	cout<<"Nome 3: "<<nome2<<endl;
	
	return 0;
}

/*
//string d e char d[50], ambos tem função de strings
	
	char nome[50];
	
	nome[0] = 'p';
	nome[1] = 'e';
	nome[2] = 'd';
	nome[3] = 'r';
	nome[4] = 'o';
	nome[5] = '\0';
	
	cout<<nome<<endl;
	
	char nome1[50] = {'p', 'e', 'd', 'r', 'o'};
	
	cout<<nome1<<endl;
	
	char nome2[50];
	
	cin.getline(nome2, 50);
	
	cout<<nome2<<endl;
	----------------------------------------------------
	//mostra o tamanho do nome digitado - quantos caracteres
	char nome[50];
	int tam;
	
	cin.getline(nome, 50);
	
	tam = strlen(nome);
	
	cout<<tam<<endl;
	
	for(int i=0; i<tam; i++)
	{
		cout<<nome[i]<<endl;
	}
	----------------------------------------------------
	char nome[50], nome1[50];
	
	cin>>nome>>nome1;
	
	//comparação de string
	if(strcmp(nome, nome1) == 0)
	{
		cout<<"iguais"<<endl;
	}
	else
	{
		cout<<"nao iguais"<<endl;
	}
	
	----------------------------------------------------
	char nome[50], nome1[50];
	
	cin>>nome>>nome1;
	//em nomes diferentes a saida varia de -1 e 1 dependendo da ordem alfabetica dos nomes
	cout<<strcmp(nome, nome1)<<endl;
	
	----------------------------------------------------
	char nome[50], nome1[50];
	
	cin.getline(nome, 50);
	cout<<"Antes do strcpy: "<<nome1<<endl;
	
	cin.getline(nome1, 50);
	cout<<"Depois do strcpy: "<<nome1<<endl;
*/