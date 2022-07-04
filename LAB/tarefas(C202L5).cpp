#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	char C;
    double X, Y;
    
    cin>>C>>X>>Y;
    
    switch(C)
	{
	case '+':
		cout<<fixed<<setprecision(1)<<pow(Y, 2)+2<<endl;
		break;
	case '-':
		cout<<fixed<<setprecision(1)<<X-Y<<endl;
		break;
	case '*':
		cout<<fixed<<setprecision(1)<<2*(X-Y)<<endl;
		break;
	case '/':
		cout<<fixed<<setprecision(1)<<X/5<<endl;
		break;
	default:
		cout<<"Codigo invalido!"<<endl;
		break;
	}
}