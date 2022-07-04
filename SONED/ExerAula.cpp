//Aula de hoje: for - comando de repetição
//para somar de um em um: i++
//para somar de dois em dois: i = i+2 e assim sucetivamente
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, qtt, forca;
	double soma, media;
	char x[50];
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cin.getline(x,50);
		cin>>qtt>>forca;
		
		soma += qtt;
		media += forca;
	}
	cout<<"Total de Pokebolas = "<<soma<<endl;
	cout<<fixed<<setprecision(2)<<"Media de forca = "<<media/n<<endl;
}
/*
	for (int i=0; i<10; i++) //crescente
	{
		cout<<i<<endl;
	}
	for (int i=10; i>0; i--) //decrescente
	{
		cout<<i<<endl;
	}
	----------------------------------------------------
	if(i%2 != 0) //numeros impares dentro do intervalo
		{
			cout<<i<<endl;
		}
	if(i%2 == 0) //numeros pares dentro do intervalo
	{
			cout<<i<<endl;
	}
	-----------------------------------------------------
	int n, x;
	int soma=0;
	
	cin>>n; //quantidade de repetição
	
	for (int i=0; i<n; i++) //crescente
	{
		cin>>x;
		
		soma += x;
		
		cout<<"Valor da soma "<<soma<<endl;
	}
	------------------------------------------------
    int x;
	int pos = 0;
	double soma;
	
	for(int i=0; i<10; i++)
	{
		cin>>x;
		if(x>=0)
		{
			pos = pos + 1;
		}
		soma += x;
	}
    cout<<"Positivos = "<<pos<<endl;
    cout<<fixed<<setprecision(2)<<"Media = "<<soma/10<<endl;
    
    ------------------------------------------------------
    float numero;
    vector<float> num;
    int cont, maximo, minimo, n;
    
    cin>>n;
    
    for(int i=0; i<n; i++) {
       cin >> numero;
       num.push_back(numero);
       cont++;
    }

    cout << "Maior: " << *max_element(num.begin(), num.end()) << endl;
    cout << "Menor: " << *min_element(num.begin(), num.end()) << endl;
	---------------------------------------------------------
		double cal, x;
	
	for(int i=0; i<10; i++)
	{
		cin>>x;
		
		cal += x;
	}
	cout<<fixed<<setprecision(2)<<cal/10<<endl;
	*/