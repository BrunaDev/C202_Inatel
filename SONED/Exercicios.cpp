#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	
	for(i=1; i<=9; i=i+2)
	{
		for(j=7; j>=5; j--)
		{
			cout<<"I="<<i<<" J="<<j<<endl;
		}
	}
	
	return 0;
}

/*
Exercício 01
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double s = 0;
	int j=1, sinal=1;
	
	for(int i=1; i<=50; i++)
	{
		s = s + 1/pow(j, 3)*sinal;
		
		j = j + 2;
		
		sinal = sinal * (-1);
	}	
	cout<<cbrt(s*32);;
	
	return 0;
}
-------------------------------------------------------------
Exercicio 02
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int cont=0;
	int sb=6800, sj=9500;
	
	do{
		cont++;
		sb += 0.0225*sb; //2,25% = 153
		sj += 0.009*sj; //0,9% = 85.5
	}while(sb<sj);
	
	cout<<"A população de São Bartolomeu possui "<<sb<<" habitantes e a população de São José possui "<<sj<<endl;
	cout<<"São Bartolomeu passou São José após "<<cont<<" ano(s)";
	return 0;
}
---------------------------------------------------------------
Exercicio 03
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	double larg, comp, potencia, soma, area;
	
	cout<<"Quantos cômodos serão? ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Entre com a largura do cômodo (m²): ";
		cin>>larg;
		
		cout<<"Entre com o comprimento do cômodo (m²): ";
		cin>>comp;
		
		area = larg*comp;
		
		potencia = area * 18;
		
		cout<<"Para uma área de "<<area<<"m² será necessária uma potência de "<<potencia<<"W"<<endl;
		
		soma += potencia;
	}
	
	cout<<"A potência total necessária  na casa será de "<<soma<<"W";
	return 0;
}
--------------------------------------------------------------
Exercicio 04 - funciona? boa pergunta
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char op;
	int cidade, nota, idade;
	int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;
	int maior=999, menor=-999;
	
	do
	{
		cout<<"Qual a sua cidade de origem? "<<endl;
		cout<<"(1) Santa Rita do Sapucaí (2)outra"<<endl;
		do
		{
			cin>>cidade;
			if(cidade == 1)
				cont1++;
			else if (cidade == 2)
				cont2++;
		}while(0<=cidade || cidade>=3);
		
		cout<<"Qual a sua nota para a feira? "<<endl;
		cout<<"(1) Boa (2)Muito boa"<<endl;
		do
		{
			cin>>nota;
			if(nota == 1)
				cont3++;
			else if (nota == 2)
				cont4++;
		}while(nota<=0 || nota>=3);
		
		
		cout<<"Qual a sua idade? ";
		cin>>idade;
		if(idade>maior)
		{
			maior = idade;
		}
		if(idade<menor)
		{
			menor = idade;
		}
		
		cout<<"Iniciar próxima pesquisa? (S/N)";
		cin>>op;
		
		cont5++;
		
	}while(op == 'S');
	
	cout<<(cont1*100)/cont5<<" são de Santa Rita do Sapucaí e "<<(cont2*100)/cont5<<" são de outra cidade."<<endl;
	cout<<(cont3*100)/cont5<<" escolheram a opção 'Boa' e "<<(cont4*100)/cont5<<" escolheram a opção 'Muito boa'."<<endl;
	cout<<"A pessoa mais velha da feira tinha "<<maior<<" anos e a mais nova tinha "<<menor<<" anos";
	
	return 0;
}
---------------------------------------------------------------
Exercicio 05
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	string codigo;
	char consumo, fonte, flag;
	int cont=0, cont1=0, cont2=0, cont3=0, cont4=0;
	
	do 
	{
		cout<<"Informe seu código (4 caracteres): ";
		cin>>codigo;
		
		cout<<"Informe seu tipo de consumo: R(residencial) ou C(comercial) ";
		cin>>consumo;
		if(consumo == 'R')
			cont1++;
		if(consumo == 'C')
			cont2++;
		
		cout<<"Informe a fonte de energética usada: E(elétrica), S(solar) ou O(outras) ";
		cin>>fonte;
		if(fonte == 'E')
			cont3++;
		if(consumo == 'S')
			cont4++;
		
		cont++;
		
		cout<<"Deseja iniciar outra pesquisa?(S/N) ";
		cin>>flag;
		
	}while(flag=='S');
	
	cout<<"Foram entrevistados "<<cont<<" consumidores."<<endl;
	cout<<(cont1*100)/cont<<"% de pessoas usam o consumo tipo R e "<<(cont2*100)/cont<<"% usam o tipo C."<<endl;
 	cout<<(cont3*100)/cont<<"% de comercios usam energia elétrica e "<<(cont4*100)/cont<<"% usam fonte solar"<<endl;
	
	return 0;
}
*/