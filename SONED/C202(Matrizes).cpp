#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
	//Execrcício 06
	//declaração das variáveis 
	double A[5][5], B[5][5], C[5][5];  
	
	//matrizes 5x5 no máximo
	int i, j, linhaA, colunaA, linhaB, colunaB;
	
	//entrada da matriz A
	do{
		cout<<"Núm. linhas da matriz A (1 a 5): ";
		cin>>linhaA;
	}while(linhaA<1 || linhaA>5);
	
	do{
		cout<<"Núm. colunas da matriz A (1 a 5): ";
		cin>>colunaA;
	}while(colunaA<1 || colunaA>5);
	
	cout<<"Entre com os elementos de A: ";
	
	for( i=0; i<linhaA; i++)
		for( j=0; j<colunaA; j++)
			cin>>A[i][j];
		
    //entrada da matriz B
	do{
		cout<<endl<<"Núm. linhas da matriz B (1 a 5): ";
		cin>>linhaB;
	}while(linhaB<1 || linhaB>5);
	
	do{
		cout<<"Núm. colunas da matriz B (1 a 5): ";
		cin>>colunaB;
	}while(colunaB<1 || colunaB>5);
	
	cout<<"Entre com os elementos de B: ";
	
	for( i=0; i<linhaB; i++)
		for( j=0; j<colunaB; j++)cin>>B[i][j];
		
	//mostra a matriz A
	cout<<endl<<"Matriz A:";
	for( i=0; i<linhaA; i++){
		cout<<endl; 
		//próxima linha
		for( j=0; j<colunaA; j++)
			cout<<"\t"<<A[i][j];
	}
	
	//mostra a matriz B
	cout<<endl<<"Matriz B:";
	for( i=0; i<linhaB; i++){
		cout<<endl; 
		//próxima linha
		for( j=0; j<colunaB; j++)
			cout<<"\t"<<B[i][j];
	}
	
	//Teste de existência da matriz C e cálculo de C
	if(linhaA==linhaB && colunaA==colunaB){
		//soma as matrizes
		for( i=0; i<linhaA; i++)
			for( j=0; j<colunaA; j++)
	 	    	C[i][j]=A[i][j]+B[i][j];
	 	    
		 //mostra a matriz C
		 cout<<endl<<"Matriz C:";
		 for( i=0; i<linhaA; i++){
		 	 cout<<endl; 
             //próxima linha
			 for( j=0; j<colunaA; j++)
			 	 cout<<"\t"<<C[i][j];
		  }
	}
	else cout<<endl<<"Impossível somar as matrizes!";
	//final do programa
	cout<<endl;
	
	return 0;
} 

/*
Execícios feitos em sala:
	//Execrcício 04
	double A[3][3];
	int i, j;
	
	//ler os dados da matriz
	cout<<"Digite os 9 elementos da matriz A: "<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<endl;
	//mostrar os dados da matriz
	cout<<"Elementos da matriz A: "<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	
//Execrcício 05
	double A[3][3];
	int i, j, s;
	
	//ler os dados da matriz
	cout<<"Digite os elementos da matriz A: "<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"A["<<i<<"]["<<j<<"] = ";
			cin>>A[i][j];
		}
	}
	cout<<endl;
	
	//mostrar os dados da matriz
	cout<<"Elementos da matriz A: "<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	//soma das linhas da matriz
	for(i=0; i<3; i++)
	{
		s=0;
		for(j=0; j<3; j++)
		{
			s += A[i][j];
			//outro modo: s[i] = s[i] + A[i][j]; (double s[3] = {0}; inicializa todas as vezes como zero.
		}
		cout<<"Soma linha "<<i<<" : "<<s<<endl;
	}
    cout<<endl;
    
    //mostrar a diagonal principal da matriz
    cout<<"Diagonal princial: ";
    for(i=0; i<3; i++)
		cout<<A[i][i]<<"\t"; 
	
	cout<<endl;
    
	//mostrar a diagonal secundária da matriz
    cout<<"Diagonal secundaria: ";
    for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i+j == 3-1) cout<<A[i][j]<<"\t";;
		}
	}
*/