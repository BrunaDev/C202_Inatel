//Estrutura de repetição - for
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, op;
	double cont1, cont2;

	cout<<"Quantas pessoas?"<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Opções: 1 p/ sim; 2 p/ não "<<endl;
		cin>>op;
		
		if(op==1)
		    cont1++;
	    else
	    	cont2++;
	}
	cout<<"Opção 1: "<<cont1<<" com "<<(100.*cont1)/n<<"%"<<endl;
	cout<<"Opção 2: "<<cont2<<" com "<<(100.*cont2)/n<<"%"<<endl;
	
	return 0;
}

/*
	int n1, n2, n;
	
	cout<<"De quantos alunos voce gostaria de calcular a media? "<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Entre com as notas: "<<endl;
		cin>>n1>>n2;
		
		cout<<"Media = "<<(n1+n2)/2<<endl;
	}
	----------------------------------------------------------------------------
	Exercicios em sala:
	01 e 02
		double n1, n2, n;
	
	cout<<"De quantos alunos você gostaria de calcular a média? "<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Entre com as notas da prova 1 e da prova 2: "<<endl;
		cin>>n1>>n2;
		
		int med = (n1+n2)/2;
		
		if(med>=50)
		    cout<<"Média: "<<med<<" - Aprovado"<<endl;
	    else
	    	cout<<"Média: "<<med<<" - Reprovado"<<endl;
	}
	----------------------------------------------------------------------------
	
	
*/