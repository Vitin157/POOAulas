//incluindo 3 bibliotecas
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	//declarando variaveis
	bool sair = false;
	string jog1, jog2;
	int vida1 = 10, vida2 = 10;
	int dado6, dano;
	int A1 = 3, A2 = 3, D1 = 2, D2 = 2;
	
	//Recebe o nome dos personagens 1 e 2
	cout << "Digite o nome do jogador 1: " << endl;
	cin >> jog1;
	cout << "Digite o nome do jogador 2: " << endl;
	cin >> jog2;
	//Enquanto for falso, vai continuar rodando
	while (sair == false)
	{
		//Imprime em tela os personagens e seus poderes
		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Ataque: " << A1 << "          " << "Ataque: " << A2 << endl;
		cout << "Defesa: " << D1 << "          " << "Defesa: " << D2 << endl;
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl;
		//da um pause no programa
		system("pause");

		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0));
		// jogador 1 jogando, vai gerar um numero aleatorio de 1 a 6
		dado6 = rand() % 6 + 1;
		//Se o numero for maior que 4, irá dizer que acertou o personagem 2
		if (dado6 > 4)
		{
			dano = A1 - D2;
			vida2 = vida2 - dano;
			cout << jog1 << " Acertou" << endl;
			cin.get();
		}
		//Se o numero for menor ou igual a 4, irá dizer que errou o personagem 2
		else if (dado6 <= 4)
		{
			cout << jog1 << " Errou " << endl;
			cin.get();
		}

		// jogador 2 jogando, vai gerar outro numero aleatorio de 1 a 6
		dado6 = rand() % 6 + 1;
		//Se o numero for maior que 4, irá dizer que acertou o personagem 1
		if (dado6 > 4)
		{
			dano = A2 - D1;
			vida1 = vida1 - dano;
			//imprime na tela que acertou o alvo
			cout << jog2 << " Acertou " << endl;;
			cin.get();
		}
		//Se o numero for menor ou igual a 4, irá dizer que errou o personagem 1
		else if (dado6 <= 4)
		{
			//imprime na tela que errou o alvo
			cout << jog2 << " Errou " << endl;
			cin.get();
		}
		//ira limpar a tela
		system("cls");
		
		//o jogador que tiver com a vida menor ou igua l a 0 ira sair
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}
	//se a vida do jogador 1 for maior que 0 ele ganha a partida
	if (vida1 > 0)
		//Mostra se o jogador 1 venceu
		cout << jog1 << " Jog1 Venceu!" << endl;
	//ja se a vida do jogador 2 for maior que 0 ele ganha a partida
	else if (vida2 > 0)
		//Mostra se o jogador 2 venceu
		cout << jog2 << " Jog2 Venceu!" << endl;
	//Se a vida dos dois jogadores forem menores que 0, os dois perdem
	else if (vida1 > 0 || vida2 > 0)
		//Mostra se os dois perderam
		cout << " Os dois perderam" << endl;
	return 0;
}