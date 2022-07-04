#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//Exercício 04: (ainda erro)
double fat(int x)
{
	double fator = 1;
	for(int i=2; i<=x; i++)
		fator = fator * i;
		
	return fator;
}

double SOMA(int X, int N)
{
	double f = 1;
	
	for(int i=0; i<N; i++)
	{
		int k = 2;
		
		f += pow(X, k)/fat(k);
		
		k++;
	}
	
	return f;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x, N;
	
	cout<<"Valor de x: ";
	cin>>x;
	
	cout<<"Qtos termos (2-10): ";
	do{
		cin>>N;
	}while(N<2 || N>=10);
	
	cout<<"F(x) = "<<SOMA(x, N);
	
	return 0;
}

/*
//Exercício 01:
#include <iostream>
#include <iomanip>

using namespace std;

double converte(int x)
{
	double valor = 0;
	
	//kmph = mph * 1,60934
	valor = x * 1.60934;
	
	return valor;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double x, c;
	
	do{
		cin>>x;
	}while(x<=0);
	
	c = converte(x);
	
	cout<<fixed<<setprecision(1)<<c<<endl;
	
	return 0;
}

//Exercício 02:
#include <iostream>
#include <iomanip>

using namespace std;

double fat(int x)
{
	double fator = 1;
	for(int i=2; i<=x; i++)
		fator = fator * i;
		
	return fator;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	
	do{
		cin>>N;	
	}while(N<0);
	
	cout<<fat(N);
	
	return 0;
}

//Exercício 03:
#include <iostream>
#include <iomanip>

using namespace std;

double fat(int x)
{
	double fator = 1;
	for(int i=2; i<=x; i++)
		fator = fator * i;
		
	return fator;
}

double combina(int X, int Y)
{
	double c;
	
	c = fat(X)/(fat(X-Y) * fat(Y));
	
	return c;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int M, P;
	
	cout<<"M = ";
	cin>>M;
	
	cout<<"P = ";
	cin>>P;
	
	cout<<"C = "<<combina(M, P);
	
	return 0;
}
 */