#include <iomanip>
#include <iostream>

using namespace std;

//exemplo de uma função que calcula a fatorial de um número
double fat(int x)
{
	double fator = 1;
	for(int i=2; i<x; i++)
		fator = fator * i;
		
	return fator;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, p;
	double c;
	
	cout<<"Digite os valores de N e P: ";
	cin>>n>>p;
	
	c = fat(n)/(fat(p)*fat(n-p));
	
	cout<<c<<endl;
	
	return 0;
}

/*
//para usar a funçaõ abaixo do main, deve-se declarar a função em cima
#include <iomanip>
#include <iostream>
double fat(int x);

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, p;
	double c;
	
	cout<<"Digite os valores de N e P: ";
	cin>>n>>p;
	
	c = fat(n)/(fat(p)*fat(n-p));
	
	cout<<c<<endl;
	
	return 0;
}

//exemplo de uma função que calcula a fatorial de um número abaixo do main
double fat(int x)
{
	double fator = 1;
	for(int i=2; i<x; i++)
		fator = fator * i;
		
	return fator;
}
*/