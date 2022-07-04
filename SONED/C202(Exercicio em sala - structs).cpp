//Exercicio 01
#include <iomanip>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	
	struct dados
	{
		char nome[50], tipo[30];
		
		int idade;			
	};
	
	dados vet[100];
	
	//Entrada de dados
	do{
		cout<<"Quantos animais ser�o registrados? ";
		cin>>n;
	}while(n<0 || n>100);
	
	for(i=0; i<n; i++)
	{
		cout<<endl<<"Nome: ";
		cin.ignore();
		cin.getline(vet[i].nome, 50);
		
		cout<<"Ra�a: ";
		cin.getline(vet[i].tipo, 30);
		
		cout<<"Idade (em anos): ";
		cin>>vet[i].idade;
	}


	//Sa�da de dados
	cout<<endl<<"Nome(s)\tRa�a(s)\tIdade(s)"<<endl;
	for(i=0; i<n; i++)
		cout<<vet[i].nome<<"\t"<<vet[i].tipo<<"\t"<<vet[i].idade<<endl;
	
	return 0;
}

/*
//Exercicio 02:
#include <iomanip>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, op, j;
	
	struct dados
	{
		char nome[80], cpf[11], cpf1[11];
		
		int idade;			
	};
	
	dados vet[200];
	
//Entrada de dados
	do{
	    cout<<"Quantos participantes ser�o registrados? ";
        cin>>n;
	}while(n<0 || n>200);
	
	for(i=0; i<n; i++)
	{
	   	cout<<endl<<"Nome: ";
	   	cin.ignore();
		cin.getline(vet[i].nome, 80);
		
	   	cout<<"CPF: ";
		cin>>vet[i].cpf;
		
		do{
			cout<<"Idade (em anos): ";
			cin>>vet[i].idade;
		}while(vet[i].idade<10 || vet[i].idade>80);
	}


	//Escolha de sa�da de dados
		
	do{
		cout<<endl;
		cout<<"Op��o 1: obter dados de um determinado participante"<<endl;
		cout<<"Op��o 2: obter dados de todos os participantes"<<endl;
		cout<<"Op��o 3: finalizar programa"<<endl;
	
		cout<<endl<<"Op��o: ";
		cin>>op;
		
		if(op == 1)
		{
	   		cin.ignore();
	   		cout<<endl<<"Digite o CPF da pessoa desejada: ";
	   		cin>>vet[i].cpf1;
		
	   		for(j=0; j<n; j++)
			{
				cout<<"Nome\tCPF\tIdade"<<endl;
				if(strcmp(vet[i].cpf, vet[i].cpf1)==0)
				//L�gica da escoha
			}
		}
	
		if(op == 2)
		{
	   		cout<<"Nome\tCPF\tIdade"<<endl;
			for(i=0; i<n; i++)
		   	cout<<vet[i].nome<<"\t"<<vet[i].cpf<<"\t"<<vet[i].idade;
		}
	
		if(op == 3)
			return 0;
			
		cout<<endl;
				
	}while(op != 3);	
}
	
---------------------------------------------------------------->>>
//Exercicio 03
#include <iomanip>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	struct festa
	{
		char nome[40];
		double pg, pp; //pg = por��o grande; pp =  por��o pequena
	};
	
	festa vet[50];
	
	double somaPG, somaPP, medPG, medPP;
	
	int n;
	cout<<"Informe a quantidade de barracas participantes: ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cout<<endl<<"Nome da barraca "<<i+1<<": ";
		cin.getline(vet[i].nome, 40);
		
		cout<<"Pre�o da por��o grande (R$): ";
		cin>>vet[i].pg;
		
		cout<<"Pre�o da por��o pequena (R$): ";
		cin>>vet[i].pp;
		
		somaPG += vet[i].pg;
		somaPP += vet[i].pp;
	}
	
	medPG = somaPG/n;
	medPP = somaPP/n;
	
	cout<<endl<<"O pre�o m�dio das por��es grandes � R$"<<medPG<<endl;
	cout<<"A(s) barraca(s) que possui(em) pre�o abaixo desse pre�o m�dio � (s�o):";
	for(int i=0; i<n; i++)
	{
		if(vet[i].pg < medPG)
		{
			cout<<vet[i].nome<<" "; 	
		}
	}
	
	cout<<endl<<"O pre�o m�dio das por��es pequenas � R$"<<medPP<<endl;
	cout<<"A(s) barraca(s) que possui(em) pre�o abaixo desse pre�o m�dio � (s�o):";
	for(int i=0; i<n; i++)
	{
		if(vet[i].pp < medPP)
		{
			cout<<vet[i].nome<<" ";
		}
	}
	return 0;
}

---------------------------------------------------------------->>>
//Exercicio 04:
#include <iomanip>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int op, n;
	
	struct fuc
	{
		char nome[60];
		int membros;
		char estilo;
	};
	
	cout<<"N�mero estimado de bandas: ";
	cin>>n;
	
	fuc vet[n];
	
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cout<<endl<<"Nome da banda "<<i+1<<": ";
		cin.getline(vet[i].nome, 60);
		
		cout<<"Numero de integrantes: ";
		cin>>vet[i].membros;
		
		cout<<"Estilo musical ('R' para rock e 'P' para pop): ";
		cin>>vet[i].estilo;
	}
	
	do{
		cout<<endl;
		cout<<"Menu de op��es "<<endl;
		cout<<"Op��o 1: Todas as bandas"<<endl;
		cout<<"Op��o 2: Por estilo"<<endl;
		cout<<"Op��o 3: Sair"<<endl;
		do{
			cout<<endl<<"Op��o: ";
			cin>>op;	
		}while(op<1 || op>3);
		
		if(op == 1)
		{
			cout<<"Nome\tInt.\tEstilo"<<endl;
			for(int i=0; i<n; i++)
			{
				cout<<vet[i].nome<<"\t"<<vet[i].membros<<"\t"<<vet[i].estilo<<endl;
			}
		}
		else if(op == 2)
		{
			cout<<"Nome\tInt.\tEstilo"<<endl;
			//logica da escolha
		}
		else if(op == 3)
		{
			return 0;
		}
	}while(op != 3);
	
	return 0;
}
*/