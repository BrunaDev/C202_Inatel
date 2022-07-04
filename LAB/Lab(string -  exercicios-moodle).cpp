#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	char nome[50];
	int mat;
	double n1, n2;
	char exit[] = "SAIR";
	
	cin.getline(nome, 50); //entra com o nome

	cin>>mat; //entra com a matricula
		
	cin>>n1>>n2;
	
	return 0;
}

/*
>>Exercicio 01: Vogais
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	char text[50];
	int cont=0;
	
	cin.getline(text, 50);
	
	for(int i=0; i<strlen(text); i++)
	{
		if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
		{
			cont ++;
			if(text[i] == 'a') text[i] = 'A';
			if(text[i] == 'e') text[i] = 'E';
			if(text[i] == 'i') text[i] = 'I';
			if(text[i] == 'o') text[i] = 'O';
			if(text[i] == 'u') text[i] = 'U';
		}
	}
	
	//saida do texto editado
	cout<<text<<endl;
	//número de vogais
	cout<<cont<<endl;
}
	
>>Exercicio 4: Textos ao Contrário
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	char text[50];
	
	cin.getline(text, 50);
	
	for(int i=strlen(text)-1; i>=0; i--)
	{
		cout<<text[i];
	}
	
	return 0;	
}

//Exercicio 03 e 04: Alunos (II)


*/