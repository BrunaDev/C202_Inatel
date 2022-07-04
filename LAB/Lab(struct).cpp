#include <iostream>
#include <iomanip>

using namespace std;

struct pessoa
{
	int idade;
	char nome[50];
	float altura;
};

int main()
{
	pessoa pessoas[20];
	int n;
	
	cin>>n;
	
	//metodo 01
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cout<<"Entre com os dados da pessoa "<<i+1<<endl;
		cout<<"Entre com o nome: ";
		cin.getline(pessoas[i].nome, 50);
		
		cout<<"Entre com a idade: ";
		cin.getline(pessoas[i].idade);
		
		cout<<"Entre com a altura: ";
		cin.getline(pessoas[i].altura);
	}
	
	//metodo 02
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cout<<"Dados da pessoa "<<i+1<<endl;
		cout<<"Nome: "<<cin.getline(pessoas[i].nome, 50)<<endl;
		cout<<"Idade: "<<cin.getline(pessoas[i].idade)<<endl;
		cout<<"Altura: "<<cin.getline(pessoas[i].altura)<<endl;
	}

	return 0;	
}