#include <iomanip>
#include <iostream>

using namespace std;
//A primeira linha é composta por um número inteiro(N) 
//representando o tamanho do vetor. A segunda linha é 
//composta por N números inteiros que serão guardados no
//vetor.
int main()
{
    int N, maior=9999, menor=-9999, i;
    
    cin>>N;
    
    int X[N];
    
    for(i=0; i<N; i++)
    {
        cin>>X[i];
    }
    
    for(i=0; i<N; i++)
    {
        if(X[i]>menor)
		{
			menor=X[i];
		}
    }
    for(i=0; i<N; i++)
    {
        if(X[i]<maior)
		{
			maior=X[i];
		}
    }
    
    //cout<<"Pos Menor: "<<j<<endl;
    cout<<"Valor Menor: "<<menor<<endl;
    //cout<<"Pos Maior: "<<k<<endl;
    cout<<"Valor Maior: "<<maior<<endl;
	return 0;
}

/**
 Exemplo 01:
 #include <iomanip>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nome[50];
	int tamanho;
	
	cin.getline(nome, 50);
	
	tamanho = strlen(nome);//só pega o tamanho da palavra
	
	for	(int i=0; i<tamanho; i++)
	{
		cout<<nome[i]<<endl;
	}
	return 0;
}

Exemplo 02:
#include <iomanip>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int x[5];
	int n;
	
	cin>>n;
	
	for	(int i=0; i<n; i++)
	{
		cin>>x[i];
	}
	for	(int i=0; i<n; i++)
	{
		cout<<x[i]<<endl;
	}
	return 0;
}

Exercício:
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int x[8];
	
	for(int i =0; i<8; i++)
	{
		cin>>x[i];
	}
	
	for (int i=7; i>=0; i--)
	{
		cout<<x[i]<<endl;
	}
	
	return 0;
}
 */