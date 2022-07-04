//não faz cópia e sim informa/passa o endereço da memória solicitada
#include <iostream>
#include <cmath>

using namespace std;
//Elevado
void circun(int x, int y, int &res)
{
	res = 1;
	
	for(int i=0; i<y; i++)
	{
		res = res*x;
	}
}

int main()
{
	int x, y, resultado;
	cin>>x>>y;
	
	circun(x, y, resultado);
	
	cout<<resultado;
	
	return 0;
}

/*
#include <iostream>

using namespace std;

//Fatorial
void fat(int x, int &res)
{
	res = 1;
	for(int i=1; i<= x; i++)
	{
		res = res*i;
	}
}

int main()
{
	int k, resultado;
	cin>>k;
	
	fat(k, resultado);
	
	cout<<resultado;
	
	return 0;
}
---------------------------------------------------
#include <iostream>

using namespace std;
//circunferencia
void circun(int x, double &res)
{
	res = x*x*3.14;
}

int main()
{
	int raio;
	double resultado;
	cin>>raio;
	
	circun(raio, resultado);
	
	cout<<resultado;
	
	return 0;
}
*/