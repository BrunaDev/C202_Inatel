//Corrigindo quest�es da prova: (n�o deu para pegar tudo, ele passa muito r�pido
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int n;
	double x, cont=0, numAnterior, soma=0;

	for(int i=0; i<n; i++)
	{
		cin>>x;
		
		if(i==0)
		{
			numAnterior = x;
		}
	}
}

/*
Quest�o 01 (n�o peguei tudo): 
 */
/*
Quest�o 02:

	int x=0, y=0;
	int n, quant;
	char d;
	
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cin>>d;
		cin>>quant;
		
		if(d == 'V')
		{
			y += quant;
		}
		if(d == 'H')
		{
			h += quant;
		}
	}	
	
	cout<<"Y = "<<y<<endl;
	cout<<"X = "<<x<<endl;
	
Quest�o 03:

	double salario, id, bonus;
	char nome[50];
	
	cin>>id;
	cin.ignore();
	cin.getline(nome, 50);
	cin>>salario;
	cin>>bonus;
	
	if(salario < bonus)
	{
		bonus = salario;
	}
	
	cout<<fixed<<setprecision(2);
	cour<<nome<<endl;
	cout<<"Salario = "<<salario + bonus*0.2<<endl;
*/