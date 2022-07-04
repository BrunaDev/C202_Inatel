#include <iostream>
#include <iomanip>

using namespace std;

void media(double x, double y)
{
}

int main()
{
	return 0;
}
/*
---------------------------VOLUME
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double volume(int raio)
{
	double V;
	
	V = 4.0/3.0*3.14*pow(raio,3);
	
	return V;
}

int main()
{
	int raio;
	
	do{
		cin>>raio;
	}while(raio<=0);
	
	cout<<fixed<<setprecision(2)<<volume(raio);
	
	return 0;
}

---------------------------Tabuada
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double tabuada(int n)
{
	for(int i=1; i<=10; i++)
	{
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}

int main()
{
	int n;
	
	cin>>n;
	
	tabuada(n);
	
	return 0;
}

---------------------------Potência
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int eleva(int x, int y)
{
	int resultado;
	
	resultado = pow(x, y);
	
	return resultado;
}

int main()
{
	int x, y;
	
	cin>>x>>y;
	
	cout<<eleva(x, y);
	
	return 0;
}

---------------------------Primo
#include <iostream>

using namespace std;

bool primo (int x)
{	
	int cont = 0;
	
	for(int i=1; i<=x; i++)
	{
		if(x%i == 0)
		{
			cont++;
		}
	}
	
			if(cont == 2)
		{
			return true;	
		}	
		else
		{
			return false;
		}
}

int main()
{
	int x;
	
	cin>>x; 
	
	if(primo(x))
	{
		cout<<"Primo"<<endl;
	}
	else
	{
		cout<<"Not"<<endl;
	}
	
	return 0;
}
*/