#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
	int produto, idade;
	double preco, pagamento;
	string nome, cidade; //não aceita nome composto
	
	cin>>produto>>preco>>nome>>cidade>>idade>>pagamento;
	
	
	switch(produto)
	{
	case 1:
		cout<<"Queijo"<<endl;
		cout<<fixed<<setprecision(2)<<"Valor total = "<<preco<<endl;
		cout<<fixed<<setprecision(2)<<"Troco = "<<pagamento-preco<<endl;
		break;
	case 2:
		cout<<"Geleia"<<endl;
		cout<<fixed<<setprecision(2)<<"Valor total = "<<preco<<endl;
		cout<<fixed<<setprecision(2)<<"Troco = "<<pagamento-preco<<endl;
		break;
	case 3:
		cout<<"Doce"<<endl;
		cout<<fixed<<setprecision(2)<<"Valor total = "<<preco<<endl;
		cout<<fixed<<setprecision(2)<<"Troco = "<<pagamento-preco<<endl;
		break;
	case 4:
		cout<<"Refrigerante"<<endl;
		cout<<fixed<<setprecision(2)<<"Valor total = "<<preco<<endl;
		cout<<fixed<<setprecision(2)<<"Troco = "<<pagamento-preco<<endl;
		break;
	case 5:
		cout<<"Sorvete"<<endl;
		cout<<fixed<<setprecision(2)<<"Valor total = "<<preco<<endl;
		cout<<fixed<<setprecision(2)<<"Troco = "<<pagamento-preco<<endl;
		break;
	case 6:
		cout<<"Presunto cru"<<endl;
		cout<<fixed<<setprecision(2)<<"Valor total = "<<preco<<endl;
		cout<<fixed<<setprecision(2)<<"Troco = "<<pagamento-preco<<endl;
		break;
	case 7:
		cout<<"Vinho"<<endl;
		cout<<fixed<<setprecision(2)<<"Valor total = "<<preco<<endl;
		cout<<fixed<<setprecision(2)<<"Troco = "<<pagamento-preco<<endl;
		break;
	default:
		cout<<"Codigo invalido!"<<endl;
		break;
	}
}
	/*int x; //int ou char // caso character case 'm':
	
	cin>>x;
	
	switch(x)
	{
	case 1: 
		cout<<"Uma bicicleta"<<endl;
		break;
	case 2: 
		cout<<"Um carro"<<endl;
		break;
	case 3: 
		cout<<"Uma casa"<<endl;
		break;
	case 4: 
		cout<<"Barras de ouro"<<endl;
		break;
	case 5: 
		cout<<"Panelas"<<endl;
		break;
	default:
		cout<<"Numero nao premiado"<<endl;
		break;
	}*/