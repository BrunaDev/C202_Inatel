//Exercicio 04: TERMINAR
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void elemento (double vet[], int n, double &maior, double &menor)
{
	//cálculos
	for(int i=0; i<n; i++)
	{
		if(vet[i]>maior) maior = vet[i];
		else if(vet[i]<menor) menor = vet[i];
	}

	return;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	double vet[10], maior, menor;
	
	cout<<"Quantos elementos (1 a 10): ";
	cin>>n;
	
	cout<<"Digite os elementos: ";
	for(int i=0; i<n; i++)
	{
		cin>>vet[i];
	}
	
	menor = vet[0];
	maior = vet[0];
	
	elemento(vet, n, maior, menor);
	
	cout<<"Maior elemento = "<<maior;
	cout<<endl<<"Menor elemento = "<<menor;
	
	return 0;
}

/*
//Exercicio 01:
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void ptomd (double x1, double y1, double x2, double y2, double &x3, double &y3)
{
	x3 = (x1 + x2)/2;
	y3 = (y1 + y2)/2;
	
	return;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double x1, y1, x2, y2, xm, ym;
	
	cout<<"Entre com as coordenadas (x,y) do ponto P1: ";
	cin>>x1>>y1;
	
	cout<<"Entre com as coordenadas (x,y) do ponto P2: ";
	cin>>x2>>y2;
	
	ptomd(x1, y1, x2, y2, xm,ym);
	
	cout<<"Coordenadas do ponto médio: M( "<<xm<<" , "<<ym<<" )";
	return 0;
}

--------------------------------------------------------------------------->>
//Exercicio 02:
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void FUN (double x, double &xs, double &xc, double &xt)
{
	//cálculos
	xs = (exp(x) - exp(-x))/2; //exp retorna "e" elevado a "x"
	xc = (exp(x) + exp(-x))/2;
	xt = xs/xc;
	
	return;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double x, xs, xc, xt;
	
	cout<<"Valor de x: ";
	cin>>x;
	
	FUN(x, xs, xc, xt);
	
	cout<<"senh(x) = "<<xs<<endl;
	cout<<"cosh(x) = "<<xc<<endl;
	cout<<"tanh(x) = "<<xt<<endl;
	return 0;
}
--------------------------------------------------------------------------->>
//Exercicio 03:
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void converte (int x, int &hora, int &min, int &seg)
{
	//cálculos
	hora = x/3600;
	min = (x%3600)/60;
	seg = x%60;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x, xh, xm, xs;
	
	cout<<"Quantidade em segundos: ";
	cin>>x;
	
	converte(x, xh, xm, xs);
	
	cout<<xh<<"h "<<xm<<"min "<<xs<<"seg"<<endl;
	return 0;
}

--------------------------------------------------------------------------->>
//Exercicio 04: TERMINAR CALCULO
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void elemento (double vet[i], int n, double &maior, double &menor)
{
	//cálculos
	for(int i=0; i<n; i++)
	{
		if(vet[i]>maior) maior = vet[i];
		else if(vet[i]>menor) menor = vet[i];
	}

	return;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, vet[10], maior = 0, menor = -9999;
	
	cout<<"Quantos elementos (1 a 10): ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Digite os elementos: ";
		cin>>vet[i];
	}
	
	elemento(vet[i], n, maior, menor);
	
	cout<<"Maior elemento = "<<maior;
	cout<<"Menor elemento = "<<menor;
	
	return 0;
}
*/