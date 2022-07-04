#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
	char nome[50];
	double nota, soma;
	int mat;
};

int main()
{
	dados vet[100];
	int n, j, menor = 0, pos;
	double med, soma;
	
	cin>>n>>j;
	
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cin.getline(vet[i].nome, 50);
		cin>>vet[i].mat>>vet[i].nota;
		
		if( i ==0)
		{
			menor = vet[i].nota;
			pos = i;
		}
		
		if(vet[i].nota<menor)
		{
			menor = vet[i].nota;
			pos = i;
		}
		
		soma += vet[i].nota;
	}
	
	cout<<fixed<<setprecision(2);
	cout<<"Media: "<<soma/n<<endl;
	cout<<vet[pos].nome<<endl;
	cout<<vet[j-1].nome<<" "<<vet[j-1].mat<<" "<<vet[j-1].nota<<endl;
	
	return 0;
}