#include <iostream>
#include <string>
#include <stack>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <thread>

#include "Aviao.h"
#include "Cartas.h"
#include "CartasAviao.h"

const int num_cartas = 4;
std::stack<Aviao> stack_1;
std::stack<Aviao> stack_2;
int player_atual = 1;

Aviao carta[4];
void cartas_aviao();

void embaralhar_cartas() {
    srand(time(0));
    std::random_shuffle(&carta[0], &carta[4]);
    std::cout << ">>> Cartas Embaralhadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void inicializar_pilhas() {
    for (int i = 0; i < num_cartas / 2; i++){
        stack_1.push(carta[i]);
    }
    for (int i = num_cartas / 2; i < num_cartas; i++){
        stack_2.push(carta[i]);
    }

    std::cout << ">>> Pilhas de Cartas Montadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

int main() {

	cartas_aviao();
	embaralhar_cartas();
	inicializar_pilhas();

    int rodada = 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    while(!stack_1.empty() && !stack_2.empty()) {

        system("clear");
        std::cout << std::endl << ">>> Placar <<<" << std::endl;
        std::cout << "P1 - " << stack_1.size() << " Cartas" << " x " << stack_2.size() << " Cartas - " << "P2"<< std::endl;
        std::cout << "Rodada: " << rodada++ << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        if (player_atual == 1)
            jogada_player(&stack_1, &stack_2);
        else
            jogada_player(&stack_2, &stack_1);

        std::this_thread::sleep_for(std::chrono::milliseconds(5500));
    }

    if (stack_1.empty())
        std::cout << std::endl << "FIM DE JOGO - PLAYER 2 VENCEU!!!" << std::endl << std::endl;
    else
        std::cout << std::endl << "FIM DE JOGO - PLAYER 1 VENCEU!!!" << std::endl << std::endl;

    std::cout << "Total de Rodadas: " << rodada;

	return 0;
}

void cartas_aviao() {
    carta[0].set_nome("Cessna Citation X");
    carta[0].set_tipo("A1");
    carta[0].set_peso(16193);
    carta[0].set_velocidade(945);
    carta[0].set_altitude_voo(13636);
    carta[0].set_comprimento(22.01);
    carta[0].set_altura(5.76);
    carta[0].set_super_trunfo(false);

    carta[1].set_nome("Canadair Global Express");
    carta[1].set_tipo("A2");
    carta[1].set_peso(41275);
    carta[1].set_velocidade(880);
    carta[1].set_altitude_voo(15500);
    carta[1].set_comprimento(30.20);
    carta[1].set_altura(7.50);
    carta[1].set_super_trunfo(false);

    carta[2].set_nome("Bombardier CRJ 700");
    carta[2].set_tipo("A3");
    carta[2].set_peso(32885);
    carta[2].set_velocidade(785);
    carta[2].set_altitude_voo(10600);
    carta[2].set_comprimento(32.41);
    carta[2].set_altura(7.32);
    carta[2].set_super_trunfo(false);

    carta[3].set_nome("Boeing 757-300");
    carta[3].set_tipo("A4");
    carta[3].set_peso(122472);
    carta[3].set_velocidade(800);
    carta[3].set_altitude_voo(11200);
    carta[3].set_comprimento(54.50);
    carta[3].set_altura(13.60);
    carta[3].set_super_trunfo(false);
}