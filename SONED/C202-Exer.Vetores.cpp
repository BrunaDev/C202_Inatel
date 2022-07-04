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

	
/*
EXERCÍCIOS LISTA (EM SALA)
O1
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double X[10], media;
	int N, i, soma=0;
	
	do{
		cout<<"Quantos elementos? (<=10) ";
		cin>>N;
	}while(N<1 || N>10);
	
	for(i=0; i<N; i++)
	{
		cin>>X[i];
		
		soma += X[i];
	}
	
	media = soma/N;
	
	cout<<"Média dos elementos: "<<media<<endl;
	cout<<"Elementos maiores que a média: "<<endl;
	for(i=0; i<N; i++)
	{
		if(X[i]>media){
			cout<<X[i]<<" - "<<i<<endl;
		}	
	}
	cout<<"Elementos menores que a média: "<<endl;
	for(i=0; i<N; i++)
	{
		if(X[i]<media){
			cout<<X[i]<<" - "<<i<<endl;
		}	
	}
}
------------------------------------------------------------------->>>
02
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double VET[10], POS[10], NEG[10];
	int i, j=0, k=0, N;
	int cont1=0, cont2=0;
	
	do{
		cout<<"Quantos elementos? (<=10) ";
		cin>>N;
	}while(N<1 || N>10);
	
	for(i=0; i<N; i++)
	{
		cin>>VET[i];
	}
	
	for(i=0; i<N; i++)
	{
		if(VET[i]>=0)
		{
			POS[j]=VET[i];
			j++;
			
			cont1++;
		}
		else if(VET[i]<0)
		{
			NEG[k]=VET[i];
			k++;
			
			cont2++;
		}
	}
	
	cout<<"Elementos do vetor POS: ";
	for(j=0; j<cont1; j++)
	{
		cout<<POS[j]<<" ";
	}
	cout<<endl;
	cout<<"Elementos do vetor NEG: ";
	for(k=0; k<cont2; k++)
	{
		cout<<NEG[k]<<" ";
	}
}
------------------------------------------------------------------->>>
03
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

>>>> outro modo de fazer o vetor D
for(i=0; i<5; i++)
{
	VetD[k] = VetA[i];
	k++;
	VetD[k] = VetB[i];
	k++;
}

------------------------------------------------------------------->>>
04
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
*/