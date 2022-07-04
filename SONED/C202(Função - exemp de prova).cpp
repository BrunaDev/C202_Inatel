#include <iostream>
#include <iomanip>
//Exemplo, quest�o de prova antiga, dado em sala. Fun��o com passagem por refer�ncia.
using namespace std;

void converte(double &x, double &y, double &z, double ro, double te, double fi);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double x, y, z, ro, te, fi;
	//Entrada das coordenadas esf�ricas
	cout<<"Coordenadas esf�ricas: "<<endl;
	cin>>ro>>te>>fi;
	//chama a fun��o - passagem por refer�ncia
	converte(x, y, z, ro, te, fi);
	//sa�da das coordenadas retangulares
	cout<<"Coordenadas esf�ricas: "<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"P("<<x<<" ; "<<y<<" ; "<<z<<")"<<endl;
	
	return 0;
}
void converte(double &x, double &y, double &z, double ro, double te, double fi)
{
	x = ro * sin(fi*3.1415/180)*cos(te*3.1415/180); //c�lculo do ro
	y = ro * sin(fi*3.1415/180)*sin(te*3.1415/180); //c�lculo do ro
	z = ro * cos(fi*3.1415/180); //c�lculo do ro
	
	return;
}


