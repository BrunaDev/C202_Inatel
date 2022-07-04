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