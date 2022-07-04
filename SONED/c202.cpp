#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	double x, y, a, b;
	//entrada
	cin>>x>>y;
	 a=sqrt(x-y);
     b=sqrt(x+y);
     
	//condições
	if(a != 0 && b != 0)
	{
		cout << "O possível valor de z é:" << a/b << endl;
	}
	else
		cout << "Cálculo impossível."<< endl;
} //Quando é apenas uma condição não precisa de chaves


