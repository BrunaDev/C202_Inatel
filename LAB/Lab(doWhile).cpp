#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
		int n, cont=0, idade;
		int maior = -999999999;
		
		cin>>n;
		
		do
		{
			cin>>idade;
			if(idade>0)
			{
				cont++;
				
				if(idade>maior)
				{
					maior = idade;
				}
			}	
		}while(cont != n);
		cout<<maior;

	return 0;
}

/*
Exemplo 01:
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int nota;
	
	do{
		cout<<"Entre com uma nota entre 0 e 100: ";
		cin>>nota;
		
	}while(nota<0 || nota>100);
	
	cout<<"Nota: "<<nota<<endl;
}
-------------------------------------------------------------
Exemplo 02:
COM WHILE
int main()
{
	int mes;
	
	cout<<"Digite o numero de um mes (1-12): ";
	cin>>mes;
	
	while(mes<=0 || mes>12)
	{		
		cout<<"Digite o numero de um mes (1-12): ";
		cin>>mes;
		
	}
	
	cout<<"Mes: "<<mes<<endl;
}
COM DO WHILE
int main()
{
	int mes;
	
	do
	{
		cout<<"Digite o numero de um mes (1-12): ";
		cin>>mes;
	}while(mes<=0 || mes>12);
	
	cout<<"Mes: "<<mes<<endl;
	
	return 0;
}
-------------------------------------------------------------
Exemplo 03:
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	char op;
	int n1, n2;
	
	do
	{
		do
		{
			cout<<"Digite um numero (0-10): ";
			cin>>n1;
		}while(n1<0 || n1>10);
		
		do
		{
			cout<<"Digite outro numero (par): ";
			cin>>n2;
		}while(n2 % 2 != 0);
		
		cout<<"Soma do primeiro e do segundo numero = "<<n1+n2<<endl;
		
	   	cout<<"Deseja repetir? (S/N)"<<endl;
	   	cin>>op;
		
	}while(op == 'S');
	
	
	return 0;
}
---------------------------------------------------------------
Até -1:
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	double soma;
	
	do{
		soma += n;
		cin>>n;
	}while(n!=-1);
	
	cout<<soma;
	
	return 0;
}
---------------------------------------------------------------
Fazendo uma média:
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int n=0, cont=-1;
	double soma;
	
	do
	{
		cont++;
		soma += n;
		cin>>n;
	}while(n>=0);
	
	cout<<fixed<<setprecision(2)<<soma/cont;
	
	return 0;
}
---------------------------------------------------------------
La major:
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
		int n, cont=0, idade;
		int maior = -999999999;
		
		cin>>n;
		
		do
		{
			cin>>idade;
			if(idade>0)
			{
				cont++;
				
				if(idade>maior)
				{
					maior = idade;
				}
			}	
		}while(cont != n);
		cout<<maior;

	return 0;
}
*/
//flag - fazer um e depois outro - uma verificação por vez