#include <iostream>
#include <cmath>
#include <iomanip>

//fabs(x) = |x|
using namespace std;

int main()
{
	double x, y, z;
	
	cin>>x>>y>>z;
	
	if()
	{
		
	}
	else
	{
		cout<<"Erro de entrada"<<endl;
	}
}



/*Exercicio 01
int main ()
{
	double t;
	
	cin>>t;
	
	if(t<=1 && t>=-1)
	{
		cout<<"x(t)="<<1-fabs(t)<<endl;
	}
	else
	{
		cout<<"x(t)=0"<<endl;
	}
	
	return 0;	
}*/
/*Exercicio 02
int main()
{
	double x, y;
	
	cin>>x>>y;
	
	if(x>y)
	{
		cout<<"f(x,y)="<<pow(x,2)-pow(y,2)+2*x*y<<endl;	
	}
	else if(x==y)
	{
		cout<<"f(x,y)="<<2*x*y+x+y<<endl;	
	}
	else if(x<y)
	{
		cout<<"f(x,y)="<<pow(y,2)+pow(x,2)+2*x*y<<endl;	
	}
	
	return 0;
}*/
/*Exercicio 03
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double preco;
	int qtt;
	
	cin>>qtt>>preco;
	
	if(qtt==0)
	{
		cout<<fixed<<setprecision(2)<<"R$ "<<preco-(preco*0.10)<<endl;
		cout<<"Sofreu diminuição"<<endl;
	}
	else if(qtt>0 && qtt<500)
	{
		cout<<fixed<<setprecision(2)<<"R$ "<<preco<<endl;
		cout<<"Sem reajuste de preço"<<endl;
	}
	else if(qtt>=500 && qtt<1000)
	{
		cout<<fixed<<setprecision(2)<<"R$ "<<preco*1.10<<endl;
		cout<<"Sofreu aumento"<<endl;
	}
	else if(qtt>=1000)
	{
		cout<<fixed<<setprecision(2)<<"R$ "<<preco*1.15<<endl;
		cout<<"Sofreu aumento"<<endl;
	}
	else
	{
		cout<<"Erro de entrada"<<endl;
	}
	
	return 0;
}*/