#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	double x, y, a, b;
	//entrada
	cin>>x>>y;
	 a=sqrt(x-y);
     b=sqrt(x+y);
     
	//condi��es
	if(a != 0 && b != 0)
	{
		cout << "O poss�vel valor de z �:" << a/b << endl;
	}
	else
		cout << "C�lculo imposs�vel."<< endl;
} //Quando � apenas uma condi��o n�o precisa de chaves


