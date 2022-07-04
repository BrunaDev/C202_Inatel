//Exercicio da lista - nº04
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double X[10];
	int i=0, N, A;
	
	do{
		cout<<"Quantos elementos? (<=10) ";
		cin>>N;
	}while(N<1 || N>10);
	
	cout<<"Entre com os valores do vetor: ";
	for(i=0; i<N; i++)
	{
		cin>>X[i];
	}
	
	for(int J=N-1; J>0; J--)
	{
		for(i=0; i<J; i++)
		{
			if(X[i]>X[i+1])
			{
				A=X[i];
				X[i] = X[i+1];
				X[i+1] = A;
			}
		}
	}
	cout<<endl;
	cout<<"Os valores em ordem crescente são: ";
	for(i=0; i<N; i++)
	{
		cout<<X[i]<<" ";
	}
}