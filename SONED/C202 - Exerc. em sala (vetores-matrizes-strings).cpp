#include <iomanip>
#include <cstring>
#include <iostream>
//biblioteca .h são as extensões antigas de c

using namespace std;

int main()
{
	//Exercicio 03 - propostok
	setlocale(LC_ALL, "Portuguese");
	
	char mat[10][30];
	double nc[10], ne[10], nf[10], temp[2];
	double maior = -1;
	int i, j, n;
	
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
	
	//saida dos dados
	//listagem final
	cout<<endl<<"Listagem final:"<<endl;
	for(i=0; i<n; i++) cout<<mat[i]<<" - "<<nf[i]<<" ptos."<<endl;	
	
	cout<<endl;
	
	//maior pontuação e equipe vencedora
	for(i=0; i<n; i++) if(nf[i]>maior)	maior = nf[i];

	cout<<"Maior pontuação: "<<maior<<" ptos."<<endl;

	//cout<<"Equipe(s) vencedora(s): ";
	//Sem ideias do que fazer para a equipe vencedora
	
	return 0;
}

/*
Exercicio 01:
#include <iomanip>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char mat[5][51]; //5 linhas, 51 caracters
	int i;
	
	//entrada
	cout<<"Digite os nomes das cidades: "<<endl;
	for(i=0; i<5; i++)
		cin.getline(mat[i], 51);//desse modo, a linha vai estar sempre mudando
	
	//saída
	cout<<"Nomes das cidades: "<<endl;
	for(i=0; i<5; i++)
		cout<<mat[i]<<endl;
	
	return 0;
}

Exercicio 02:
#include <iomanip>
#include <cstring>
#include <iostream>
//biblioteca .h são as extensões antigas de c

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char mat[5][4], cond[5][10]; //5 linhas, 4 colunas
	double n1[5], n2[5], md[5]; //colocando as notas em vetores
	int i, n;
	
	//cadastro dos alunos
	do{
		cout<<"Quantos alunos? (1-5) ";
		cin>>n;
	}while(n<1 || n>5);
	
	for(i=0; i<n; i++)
	{
		cout<<"Aluno ("<<i+1<<") - ";
		cout<<"Matric.: ";
		cin>>mat[i];
		
		do{
			cout<<"Nota 1 (0-100): ";
			cin>>n1[i];
		}while(n1[i]<0 || n1[i]>100);
		
		do{
			cout<<"Nota 2 (0-100): ";
			cin>>n2[i];
		}while(n2[i]<0 || n2[i]>100);
		
		md[i] = (n1[i]+n2[i])/2;
		
		if(md[i]>=60)
			strcpy(cond[i], "Aprovado");
		else
			strcpy(cond[i], "Reprovado");
	}
	
	//saida dos dados
	cout<<"Matric.\tMédia\tCondição"<<endl;
	for(i=0; i<n; i++)
		cout<<mat[i]<<"\t"<<md[i]<<"\t"<<cond[i]<<"\t"<<endl;
	
	return 0;
}
*/