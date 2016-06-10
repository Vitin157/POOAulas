#include <iostream> //inclui 3 Bibliotecas
#include <string>
#include <ctime>

using namespace std;
//declarando variavel
void imprimir_espacos(int total);

int main(int argc, char* args[])
{
	bool sair = false; //Falso ou verdadeiro
	string pil1; 
	string pil2; 
	
	int rodada = 0, rodada2 = 0;
	int total_espacos = 10; 

    //Recebe o nome dos pilotos 1 e 2 e salva na variavel
	cout << "Nome do primeiro piloto:" << endl; 
	cin >> pil1; 
	cout << "Nome do segundo piloto:" << endl;  
	cin >> pil2; 

	//Enquanto for falso vai continuar rodando
	while (sair == false) 
	{
		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0)); 
		total_espacos = rand() % 3 + 1; //ira gerar um numero aleatorio para o jogador 1
		rodada = rodada + total_espacos; //a rodada atual vai ser substituida pela soma da rodada anterior mais o numero de espaços 

		//Imprime os carros, o nome do competidor 1, a largada e a chegada
		cout << "Largada                                                                      Chegada" << endl;
		cout << "Piloto: " << pil1 << endl;//Mostrara o nome do piloto 1
		
		imprimir_espacos(rodada); //Imprime a quantidade de espaços
		cout << "   _  " << endl;
		
		imprimir_espacos(rodada);
		//Imprime em tela o carro do piloto 1
		cout << " -Lo=o> " << endl;
		cout << "_               _" << endl;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		total_espacos = rand() % 3 + 1;//ira gerar outro numero alearorio para o jogador 2
		rodada2 = rodada2 + total_espacos;//a rodada atual vai ser substituida pela soma da rodada anterior mais o numero de espaços
		//Imprime os carros, o nome do competidor 2, a largada e a chegada
		cout << "Largada                                                                      Chegada" << endl;
		cout << "Piloto: " << pil2 << endl;//Mostrara o nome do piloto 2
		imprimir_espacos(rodada2);//Imprime a quantidade de espaços
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -Lo=o> " << endl; //Imprime em tela o carro do piloto 2
		cout << "_               _" << endl;

		cout << "Deseja jogar novamente ? (Aperte Enter)" << endl; //Se o jogadores quiserem continuar o jogo 


		system("pause");//Pausa o jogo

		system("cls"); //Ira limpar toda a tela 

		//Quando os carros chegarem na 20° rodada vao parar
		if (rodada >= 20 || rodada2 >= 20)  
		{
			sair = true;
		}
		else //Se nao chegarem ira limpar a tela

			system("cls"); // limpa a tela 



	}
    //Se o piloto 1 chegar em 20 antes do outro competidor ele ganha
	if (rodada = 20) 
		cout << pil1 << "Ganhou o piloto 1. Parabens" << endl;
	//Se o piloto 2 chegar em 20 antes do outro competidor ele ganha
	else if (rodada2 = 20) 
		cout << pil2 << "Ganhou o oiloto 2. Parabens" << endl;
	//Se os dois chegarem igual, ira dar empate
	else
		cout << "Os dois empataram" << endl; 
		
		cout << "Fim de jogo" << endl;  


	system("pause"); //Ira pausar novamente

	return 0; 
}

void imprimir_espacos(int total)  
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) //For com qntd_atual

	{
		cout << " ";
	}
}
