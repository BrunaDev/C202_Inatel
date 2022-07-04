#include <cmath>
#include <iomanip>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char mat[10][30];
	double nc[10], ne[10], nf[10], temp[2];
	double maior = -1;
	int i, n;
	
	do{
		cout<<"Números de equipes (1-10)? ";
		cin>>n;
	}while(n<1 || n>10);
	
	for(i=0; i<n; i++)
	{
		cin.ignore();
		cout<<endl<<"Equipe.: ";
		cin.getline(mat[i], 30);
		
		do{
			cout<<"Tentativas certas: ";
			cin>>nc[i];
		}while(nc[i]<0 || nc[i]>8);
		
		do{
			cout<<"Tentativas erradas: ";
			cin>>ne[i];
		}while(ne[i]<0 || ne[i]>8);
		
		cout<<"Tempo gasto (min): ";
		cin>>temp[i];
		
		nf[i] = (5*nc[i])-(2*ne[i])+1/temp[i];
	}
	
	//listagem final
	cout<<endl<<"Listagem final:"<<endl;
	for(i=0; i<n; i++) cout<<mat[i]<<" - "<<nf[i]<<" ptos."<<endl;	
	
	cout<<endl;
	
	//maior pontuação e equipe vencedora
	for(i=0; i<n; i++) if(nf[i]>maior)	maior = nf[i];

	cout<<"Maior pontuação: "<<maior<<" ptos."<<endl;

	cout<<"Equipe(s) vencedora(s): ";
	for(i=0; i<n; i++)
	{
		if(maior == nf[i])
			cout<<mat[i]<<"\t";
	}
	
	return 0;
}