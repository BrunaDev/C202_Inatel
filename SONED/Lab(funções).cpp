#include <iostream>

using namespace std;

bool primo (int n)
{	
	int cont = 0;
	
	for(int i=1; i<=n; i++)
	{
		if(n%i == 0)
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
	int n;
	
	cin>>n; 
	
	if(primo(n))
	{
		cout<<n<<" eh primo"<<endl;
	}
	else
	{
		cout<<n<<" nao eh primo"<<endl;
	}
	
	return 0;
}

/*
Exemplos de função:

//Passagem por cópia

#include <iostream>

using namespace std;

int soma (int a, int b)
{
	return a+b;
}

int main()
{
	cout<<soma(5, 9)<<endl;
	
	return 0;
}

-------------------------------------------------------------->
#include <iostream>

using namespace std;

int soma (int a, int b)
{
	return a+b;
}

int main()
{
	int x, y;
	
	cin>>x>>y;
	
	cout<<soma(x, y)<<endl;
	
	return 0;
}

-------------------------------------------------------------->
#include <iostream>

using namespace std;

int mostravetor (int x[], int tamanho)
{
	for(int i=0; i<tamanho; i++)
	{
		cout<<x[i]<<endl;
	}
}

int main()
{
	int x[10], n;
	
	cout<<"Tamanho do vetor: ";
	cin>>n; 
	
	for(int i=0; i<n; i++)
	{
		cin>>x[i];
	}
	
	mostravetor(x, n);
	
	return 0;
}

------------------------------------------------------>>> Número menor
Exercicios em sala:
#include <iostream>

using namespace std;

int maior (int a, int b)
{	
	if(a<b) return a;
	else return b;	
}

int main()
{
	int x, y;
	
	cin>>x>>y; 
	
	cout<<maior(x, y);
	
	return 0;
}

------------------------------------------------------>>> Média de notas
#include <iostream>

using namespace std;

void media (float n1, float n1, float n1)
{	
	float soma = (n1 + n2 + n3);
	cout<<soma/3.0;
}

int main()
{
	float n1, n2, n3;
	
	cin>>n1>>n2>>n3; 
	
	media(n1, n2, n3);
	
	return 0;
}
*/