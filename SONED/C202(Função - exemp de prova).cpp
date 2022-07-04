#include <iostream>
#include <iomanip>
//Exemplo, questão de prova antiga, dado em sala. Função com passagem por referência.
using namespace std;

void converte(double &x, double &y, double &z, double ro, double te, double fi);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double x, y, z, ro, te, fi;
	//Entrada das coordenadas esféricas
	cout<<"Coordenadas esféricas: "<<endl;
	cin>>ro>>te>>fi;
	//chama a função - passagem por referência
	converte(x, y, z, ro, te, fi);
	//saída das coordenadas retangulares
	cout<<"Coordenadas esféricas: "<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"P("<<x<<" ; "<<y<<" ; "<<z<<")"<<endl;
	
	return 0;
}
void converte(double &x, double &y, double &z, double ro, double te, double fi)
{
	x = ro * sin(fi*3.1415/180)*cos(te*3.1415/180); //cálculo do ro
	y = ro * sin(fi*3.1415/180)*sin(te*3.1415/180); //cálculo do ro
	z = ro * cos(fi*3.1415/180); //cálculo do ro
	
	return;
}


