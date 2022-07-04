//EXERCICIO: VERIFICAR SE UM NUMERO E POSITIVO OU NEGATIVO, PAR OU IMPAR

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int x;
	
	cin>>x;
	
	if(x > 0)
	{
		if(x%2 == 0){
			cout<<"O numero escolhido e positivo e par"<<endl;
		}
		else{
			cout<<"O numero escolhido e positivo e impar"<<endl;
		}
	}
	else if(x < 0)
	{
		if(x%2 == 0){
			cout<<"O numero escolhido e negativo e par"<<endl;
		}
		else{
			cout<<"O numero escolhido e negativo e impar"<<endl;
		}
	}
	else
	{
		cout<<"o numero escolhido é nulo"<<endl;
	}
	
	return 0;
}