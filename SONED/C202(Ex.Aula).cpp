#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Portuguese");
	//Exercício 02
	double A, B;
	char x;
	
	cin>>A>>B>>x;
	
	switch(x)
	{
	case '+': cout<<fixed<<setprecision(1)<<A+B<<endl;
		break;
	case '-': cout<<fixed<<setprecision(1)<<A-B<<endl;
		break;
	case '*': cout<<fixed<<setprecision(1)<<A*B<<endl;
		break;
	case '/': cout<<fixed<<setprecision(1)<<A/B<<endl;
		break;
	default: cout<<"Opção inválida"<<endl;
		break;
	}
}

//para armazenar nome, use char [10] - exemplo

/*Exercício 01
	double A, B, C;
	int x;
	
	cin>>A>>B>>C>>x;
	
	switch(x)
	{
	case 1: cout<<fixed<<setprecision(1)<<(A*5+B*3+C*2)/10<<endl;
		break;
	case 2: cout<<fixed<<setprecision(1)<<(A+B+C)/3<<endl;
		break;
	default: cout<<"Opção inválida"<<endl;
		break;
	}*/