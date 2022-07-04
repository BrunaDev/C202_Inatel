//Exercicios no moodle - Algoritmos I - Turma D
//ExSala 04

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double x, fx, fat = 1;
	int n, a=1, b=2;;
	
	cout<<"Entre com o valor de x: "<<endl;
	cin>>x;
	
	cout<<"Entre com o número de termos: "<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=2; j<=b; j++)//fatorial
		{
			fat = fat*j;
		}
		fx += pow(x, a)/fat;
		a = a + 2;
		b = b + 2;
	}
	
	cout<<fixed<<setprecision(6)<<"F(x)= "<<fx<<endl;

	return 0;
}

/*Exercicio 01
	int n;
	double soma;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		double x;
		
		cin>>x;
		
		soma += x;
	}
	cout<<"A soma dos números é "<<soma<<endl;
---------------------------------------------------------
Exercicio 02
    int n;
	double soma;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		double x;
		
		cin>>x;
		
		soma += x;
	}
	cout<<fixed<<setprecision(1)<<"A média dos números é "<<soma/n<<endl;
--------------------------------------------------------
Exercicio 03
	int n, x, maior=0, menor=0;
	
	cout<<"Quantas pessoas?"<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Digite a idade: "<<endl;
		cin>>x;
		
		if(x>=21)
			maior++;
		else
			menor++;
	}
	cout<<maior<<" pessoa(s) tem mais, ou igual, 21 anos. Totalizando "<<(100*maior)/n<<"%."<<endl;
	cout<<menor<<" pessoa(s) tem menos que 21 anos. Totalizando "<<(100*menor)/n<<"%."<<endl;
--------------------------------------------------------------
Exercicio 04
	int n, x, y;
	int cont1=0;
	
	cout<<"Quantos funcionários?"<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Digite sua idade: "<<endl;
		cin>>x;
		
		cout<<"Digite seu tempo de serviço: "<<endl;
		cin>>y;
		
		if(x>=60 && y>=25){
			cout<<"O funcionário está qualificado..."<<endl;
			cont1++;
		}
		else if(x>=65 || y>=30){
			cout<<"O funcionário está qualificado..."<<endl;
			cont1++;
		}
		else{
			cout<<"O funcionário ainda não está qualificado..."<<endl;
		}
			
	}
	cout<<"O número de funcionarios habilitados é: "<<cont1<<endl;	
---------------------------------------------------------------
Exercicio 05
	int n, x;
	int cont1=0, cont2=0, cont3=0;
	
	cout<<"Quantos pessoas?"<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"P1) Sua impressão em relação ao Inatel, passados os dois primeiros meses é:"<<endl;
		cout<<"(1)–Melhor que imaginava"<<endl;
		cout<<"(2)–Pior que imaginava"<<endl;
		cout<<"(3)–Dentro do que que imaginava"<<endl;
		cin>>x;
		
		if(x==1){
			cont1++;
		}
		else if(x==2){
			cont2++;
		}
		else{
			cont3++;
		}
			
	}
	cout<<cont1<<" pessoa(s) escolheram a opção 1."<<endl;
	cout<<cont2<<" pessoa(s) escolheram a opção 2."<<endl;
	cout<<cont3<<" pessoa(s) escolheram a opção 3."<<endl;
--------------------------------------------------------------
Exercicio 06
	float x, fx;
	
	cout<<"Entre com o valor de x: "<<endl;
	cin>>x;
	
	for(int i=0; i<10; i++)
	{
		fx += pow(x, i);
	}
	
	cout<<"F(x)="<<fx<<endl;
---------------------------------------------------------------
Exercicio 07
	float x, fx, f;
	int sub;
	
	cout<<"Entre com o valor de x: "<<endl;
	cin>>x;
	
	for(int i=0; i<50; i++)
	{
		fx += pow(x, i);
		sub = 50 - i;
		
		f = fx/sub;
	}
	
	cout<<"F(x)="<<f<<endl;
---------------------------------------------------------------
*/