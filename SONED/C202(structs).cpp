#include <iomanip>
#include <iostream>
#include <cstring>
#include <locale> //em alguns lugares(softwares) essa biblioteca � necess�ria para utilizar o setlocale

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	struct dados
	{
		char mat[4], cond[10]; //mat = matricula
		
		double n1, n2, md;			
	};
	
	dados vet[50]; //os dados ser�o armazenados aqui
	
	//cadastro de 3 alunos
	for(i=0; i<3; i++)
	{
		cout<<"Matr�cula: ";
		cin>>vet[i].mat;
		
		cout<<"Digite as duas notas: ";
		cin>>vet[i].n1>>vet[i].n2;
		
		//calculando a m�dia das notas
		vet[i].md = (vet[i].n1 + vet[i].n2)/2;
		
		//testando as m�dias
		if(vet[i].md>=60) strcpy(vet[i].cond, "Aprovado!");
		else strcpy(vet[i].cond, "Reprovado!");
	}

	//sa�da de dados
	cout<<endl<<"Mat.\tM�dia\tSitua��o"<<endl;
	for(i=0; i<3; i++)
		cout<<vet[i].mat<<"\t"<<vet[i].md<<"\t"<<vet[i].cond<<endl;
	
	//o indice � do vetor, cond, md, mat � um CAMPO que foi criado no registro.
	
	return 0;
}