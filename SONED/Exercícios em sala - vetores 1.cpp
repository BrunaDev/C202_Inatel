//Exercicio da lista - nº03
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double A[5], B[5], C[10], D[10];
	int i=0, j=0, k=0;
	
	cout<<"Entre com os valores do vetor A: "<<endl;
	for(i=0; i<5; i++)
	{
		cin>>A[i];
	}
	
	cout<<"Entre com os valores do vetor B: "<<endl;
	for(i=0; i<5; i++)
	{
		cin>>B[i];
	}
	
	for(i=0; i<10; i++)
	{
		if(i<5) C[i] = A[i];
		else if(i>=5) C[i] = B[i-5];
	}
	cout<<"Valores do vetor C: ";
	for(i=0; i<10; i++)
	{
		cout<<C[i]<<" ";
	}
	
	cout<<endl;
	
	for(i=0; i<10; i++)
	{
		if(i%2 == 0)
		{
			D[i] = A[j];
			j++;
		}
		else 
		{
			D[i] = B[k];
			k++;
		}
	}
	cout<<"Valores do vetor D: ";
	for(i=0; i<10; i++)
	{
		cout<<D[i]<<" ";
	}
}