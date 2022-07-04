#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//Exercicio 02 - BONUS - fazer
	int N, X=-999, i, cont=0;
	
	cin>>N;
	
	int A[N];
		
	for(i=0; i<N; i++)
	{
	   cin>>A[i];
	}
	cin>>X;
	
	for(i=0; i<N; i++)
	{
       if(A[i]==X) cont++;
	}
	
	if(cont>0) cout<<"Valor pertence ao vetor";
	else cout<<"Valor nao pertence ao vetor";	
	
	return 0;
}

/*
	//Exercicio 4 do slide:
	double vet[5], soma=0, media;
	int i, ma=0, me=0, ig=0;
	
	cout<<"Digite os 5 números: ";
	for(i=0; i<5; i++)
	{
		cin>>vet[i];
		soma += vet[i];	
	}
	
	media = soma/5;
	
	for(i=0; i<5; i++)
	{
		if(vet[i]>media) ma++;
		else if(vet[i]<media) me++;
		else ig++;		
	}

	cout<<"Média dos elementos: "<<media<<endl;
	cout<<"Elementos maiores que a média: "<<ma<<endl;
	cout<<"Elementos menores que a média: "<<me<<endl;
	cout<<"Elementos iguais a média: "<<ig<<endl;
	
	
Exercicio 01:
	int vet[5], i, a=0;
	
	cout<<"Digite os 5 números: ";
	for(i=0; i<5; i++)
	{
		cin>>vet[i];
		
		if(vet[i]==0)
		{
			cout<<"0 na posição: "<<i<<"\t"<<endl; //flag
			a = 1;
		}
	}
	if(a==0) cout<<"Nenhum elemento zero no vetor.";
*/