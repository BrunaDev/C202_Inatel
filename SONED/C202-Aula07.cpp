//Estrutura de repeti��o - for
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
		cout<<"Op��es: 1 p/ sim; 2 p/ n�o "<<endl;
		cin>>op;
		
		if(op==1)
		    cont1++;
	    else
	    	cont2++;
	}
	cout<<"Op��o 1: "<<cont1<<" com "<<(100.*cont1)/n<<"%"<<endl;
	cout<<"Op��o 2: "<<cont2<<" com "<<(100.*cont2)/n<<"%"<<endl;
	
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
	
	cout<<"De quantos alunos voc� gostaria de calcular a m�dia? "<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Entre com as notas da prova 1 e da prova 2: "<<endl;
		cin>>n1>>n2;
		
		int med = (n1+n2)/2;
		
		if(med>=50)
		    cout<<"M�dia: "<<med<<" - Aprovado"<<endl;
	    else
	    	cout<<"M�dia: "<<med<<" - Reprovado"<<endl;
	}
	----------------------------------------------------------------------------
	
	
*/