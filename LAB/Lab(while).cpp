#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N, i=1;
	double S = 0;
	
	cin>>N;
	
	do{
		for( i=N; i<=100; i++)
		{
			S = S + 1/i;
		}
	}while(i<=N);

	cout<<fixed<<setprecision(4)<<S<<endl;

	
	return 0;
}

/*
Exercicio 01
		int n, idade, i=0;
		char nome[50], op;
		double cont1=0,cont2=0;
		
		cout<<"Quantas pessoas?"<<endl;
		cin>>n;
		
		while(i<n)
		{
			cin.ignore();
			cout<<"Qual seu nome? ";
			cin.getline(nome,50);
			
			cout<<"Qual sua idade? ";
			cin>>idade;
			
			cin.ignore();
			
			cout<<"Possui casa propria?(S/N) ";
			cin>>op;
			
			if (idade>=18 && op == 'S')
			{
				cont1++;
			}
			else if(op=='N')
			{
				cont2++;
			}
			i++;
		}
		
		cout<<cont1<<" pessoa(s) com 18 anos ou mais tem casa propria"<<endl;
		cout<<(100*cont2)/n<<"% de pessoas nao possuem casa propria"<<endl;

----------------------------------------------------------------
Até -1
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
		int n = 0;
		double soma;
		
		while(n!=-1)
		{
			soma += n;
			cin>>n;
		}
		
		cout<<soma;

	return 0;
}
----------------------------------------------------------------
Fazendo uma média
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
		int n=0, cont=-1;
		double soma;
		
		while(n>=0)
		{
			cont++;
			soma += n;
			cin>>n;
		}
		
		cout<<fixed<<setprecision(2)<<soma/cont;

	return 0;
}
----------------------------------------------------------------
Flag - deu pau
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int S=0, contM=0, contH=0, menor=9999;
	double N=0, soma;
	
	while(N != -1) //não tô sabendo parar nesse trem
	{
		cin>>N>>S;

		if(S==1){
		  	contH++;
		}
		else if(S==2)
		{
			soma += N;
			contM++;
		}
		if(N<menor){
			menor = N;
		}
		
	}
	cout<<contH<<" Hom."<<endl;
	cout<<"Menor altura: "<<menor<<endl;
	cout<<fixed<<setprecision(2)<<"Média: "<<soma/contM<<endl;
	return 0;
}
----------------------------------------------------------------
La major
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
		int n, cont=0, idade;
		int maior = -999999999;
		
		cin>>n;
		
		while(cont != n)
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
		}
		
		cout<<maior;

	return 0;
}
----------------------------------------------------------------
Repetição conhecida
contador (--) para o numero de baixo, que vai ser o 
numero definido por N. Nesse caso, usar um soma += s dentro
do while, para ir somando toda conta que fizer.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() //deu pau
{
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	double soma, S;
	
	cin>>N;
	
	while(1)
	{
		for(int i=N; i<1000; i--)
		{
			S = S + 1/i;
		}
	}
	
	cout<<1+soma<<endl;
	

	return 0;
}


*/