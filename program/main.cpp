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

const int num_cartas = 32;
int player_atual = 1;

std::stack<Aviao> stack_1;
std::stack<Aviao> stack_2;
Aviao carta[32];

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

    carta[4].set_nome("Boeing 757-300");
    carta[4].set_tipo("A4");
    carta[4].set_peso(122472);
    carta[4].set_velocidade(800);
    carta[4].set_altitude_voo(11200);
    carta[4].set_comprimento(54.50);
    carta[4].set_altura(13.60);
    carta[4].set_super_trunfo(false);

    carta[5].set_nome("Boeing 757-300");
    carta[5].set_tipo("A4");
    carta[5].set_peso(122472);
    carta[5].set_velocidade(800);
    carta[5].set_altitude_voo(11200);
    carta[5].set_comprimento(54.50);
    carta[5].set_altura(13.60);
    carta[5].set_super_trunfo(false);

    carta[6].set_nome("Boeing 757-300");
    carta[6].set_tipo("A4");
    carta[6].set_peso(122472);
    carta[6].set_velocidade(800);
    carta[6].set_altitude_voo(11200);
    carta[6].set_comprimento(54.50);
    carta[6].set_altura(13.60);
    carta[6].set_super_trunfo(false);

    carta[7].set_nome("Boeing 757-300");
    carta[7].set_tipo("A4");
    carta[7].set_peso(122472);
    carta[7].set_velocidade(800);
    carta[7].set_altitude_voo(11200);
    carta[7].set_comprimento(54.50);
    carta[7].set_altura(13.60);
    carta[7].set_super_trunfo(false);

        carta[0].set_nome("Cessna Citation X");
    carta[8].set_tipo("A1");
    carta[8].set_peso(16193);
    carta[8].set_velocidade(945);
    carta[8].set_altitude_voo(13636);
    carta[8].set_comprimento(22.01);
    carta[8].set_altura(5.76);
    carta[8].set_super_trunfo(false);

    carta[9].set_nome("Canadair Global Express");
    carta[9].set_tipo("A2");
    carta[9].set_peso(41275);
    carta[9].set_velocidade(880);
    carta[9].set_altitude_voo(15500);
    carta[9].set_comprimento(30.20);
    carta[9].set_altura(7.50);
    carta[9].set_super_trunfo(false);

    carta[10].set_nome("Bombardier CRJ 700");
    carta[10].set_tipo("A3");
    carta[10].set_peso(32885);
    carta[10].set_velocidade(785);
    carta[10].set_altitude_voo(10600);
    carta[10].set_comprimento(32.41);
    carta[10].set_altura(7.32);
    carta[10].set_super_trunfo(false);

    carta[11].set_nome("Boeing 757-300");
    carta[11].set_tipo("A4");
    carta[11].set_peso(122472);
    carta[11].set_velocidade(800);
    carta[11].set_altitude_voo(11200);
    carta[11].set_comprimento(54.50);
    carta[11].set_altura(13.60);
    carta[11].set_super_trunfo(false);

    carta[12].set_nome("Boeing 757-300");
    carta[12].set_tipo("A4");
    carta[12].set_peso(122472);
    carta[12].set_velocidade(800);
    carta[12].set_altitude_voo(11200);
    carta[12].set_comprimento(54.50);
    carta[12].set_altura(13.60);
    carta[12].set_super_trunfo(false);

    carta[13].set_nome("Boeing 757-300");
    carta[13].set_tipo("A4");
    carta[13].set_peso(122472);
    carta[13].set_velocidade(800);
    carta[13].set_altitude_voo(11200);
    carta[13].set_comprimento(54.50);
    carta[13].set_altura(13.60);
    carta[13].set_super_trunfo(false);

    carta[14].set_nome("Boeing 757-300");
    carta[14].set_tipo("A4");
    carta[14].set_peso(122472);
    carta[14].set_velocidade(800);
    carta[14].set_altitude_voo(11200);
    carta[14].set_comprimento(54.50);
    carta[14].set_altura(13.60);
    carta[14].set_super_trunfo(false);

    carta[15].set_nome("Boeing 757-300");
    carta[15].set_tipo("A4");
    carta[15].set_peso(122472);
    carta[15].set_velocidade(800);
    carta[15].set_altitude_voo(11200);
    carta[15].set_comprimento(54.50);
    carta[15].set_altura(13.60);
    carta[15].set_super_trunfo(false);

    carta[16].set_nome("Cessna Citation X");
    carta[16].set_tipo("A1");
    carta[16].set_peso(16193);
    carta[16].set_velocidade(945);
    carta[16].set_altitude_voo(13636);
    carta[16].set_comprimento(22.01);
    carta[16].set_altura(5.76);
    carta[16].set_super_trunfo(false);

    carta[17].set_nome("Canadair Global Express");
    carta[17].set_tipo("A2");
    carta[17].set_peso(41275);
    carta[17].set_velocidade(880);
    carta[17].set_altitude_voo(15500);
    carta[17].set_comprimento(30.20);
    carta[17].set_altura(7.50);
    carta[17].set_super_trunfo(false);

    carta[18].set_nome("Bombardier CRJ 700");
    carta[18].set_tipo("A3");
    carta[18].set_peso(32885);
    carta[18].set_velocidade(785);
    carta[18].set_altitude_voo(10600);
    carta[18].set_comprimento(32.41);
    carta[18].set_altura(7.32);
    carta[18].set_super_trunfo(false);

    carta[19].set_nome("Boeing 757-300");
    carta[19].set_tipo("A4");
    carta[19].set_peso(122472);
    carta[19].set_velocidade(800);
    carta[19].set_altitude_voo(11200);
    carta[19].set_comprimento(54.50);
    carta[19].set_altura(13.60);
    carta[19].set_super_trunfo(false);

    carta[20].set_nome("Boeing 757-300");
    carta[20].set_tipo("A4");
    carta[20].set_peso(122472);
    carta[20].set_velocidade(800);
    carta[20].set_altitude_voo(11200);
    carta[20].set_comprimento(54.50);
    carta[20].set_altura(13.60);
    carta[20].set_super_trunfo(false);

    carta[21].set_nome("Boeing 757-300");
    carta[21].set_tipo("A4");
    carta[21].set_peso(122472);
    carta[21].set_velocidade(800);
    carta[21].set_altitude_voo(11200);
    carta[21].set_comprimento(54.50);
    carta[21].set_altura(13.60);
    carta[21].set_super_trunfo(false);

    carta[22].set_nome("Boeing 757-300");
    carta[22].set_tipo("A4");
    carta[22].set_peso(122472);
    carta[22].set_velocidade(800);
    carta[22].set_altitude_voo(11200);
    carta[22].set_comprimento(54.50);
    carta[22].set_altura(13.60);
    carta[22].set_super_trunfo(false);

    carta[23].set_nome("Boeing 757-300");
    carta[23].set_tipo("A4");
    carta[23].set_peso(122472);
    carta[23].set_velocidade(800);
    carta[23].set_altitude_voo(11200);
    carta[23].set_comprimento(54.50);
    carta[23].set_altura(13.60);
    carta[23].set_super_trunfo(false);

    carta[24].set_nome("Cessna Citation X");
    carta[24].set_tipo("A1");
    carta[24].set_peso(16193);
    carta[24].set_velocidade(945);
    carta[24].set_altitude_voo(13636);
    carta[24].set_comprimento(22.01);
    carta[24].set_altura(5.76);
    carta[24].set_super_trunfo(false);

    carta[25].set_nome("Canadair Global Express");
    carta[25].set_tipo("A2");
    carta[25].set_peso(41275);
    carta[25].set_velocidade(880);
    carta[25].set_altitude_voo(15500);
    carta[25].set_comprimento(30.20);
    carta[25].set_altura(7.50);
    carta[25].set_super_trunfo(false);

    carta[26].set_nome("Bombardier CRJ 700");
    carta[26].set_tipo("A3");
    carta[26].set_peso(32885);
    carta[26].set_velocidade(785);
    carta[26].set_altitude_voo(10600);
    carta[26].set_comprimento(32.41);
    carta[26].set_altura(7.32);
    carta[26].set_super_trunfo(false);

    carta[27].set_nome("Boeing 757-300");
    carta[27].set_tipo("A4");
    carta[27].set_peso(122472);
    carta[27].set_velocidade(800);
    carta[27].set_altitude_voo(11200);
    carta[27].set_comprimento(54.50);
    carta[27].set_altura(13.60);
    carta[27].set_super_trunfo(false);

    carta[28].set_nome("Boeing 757-300");
    carta[28].set_tipo("A4");
    carta[28].set_peso(122472);
    carta[28].set_velocidade(800);
    carta[28].set_altitude_voo(11200);
    carta[28].set_comprimento(54.50);
    carta[28].set_altura(13.60);
    carta[28].set_super_trunfo(false);

    carta[29].set_nome("Boeing 757-300");
    carta[29].set_tipo("A4");
    carta[29].set_peso(122472);
    carta[29].set_velocidade(800);
    carta[29].set_altitude_voo(11200);
    carta[29].set_comprimento(54.50);
    carta[29].set_altura(13.60);
    carta[29].set_super_trunfo(false);

    carta[30].set_nome("Boeing 757-300");
    carta[30].set_tipo("A4");
    carta[30].set_peso(122472);
    carta[30].set_velocidade(800);
    carta[30].set_altitude_voo(11200);
    carta[30].set_comprimento(54.50);
    carta[30].set_altura(13.60);
    carta[30].set_super_trunfo(false);

    carta[31].set_nome("Boeing 757-300");
    carta[31].set_tipo("A4");
    carta[31].set_peso(122472);
    carta[31].set_velocidade(800);
    carta[31].set_altitude_voo(11200);
    carta[31].set_comprimento(54.50);
    carta[31].set_altura(13.60);
    carta[31].set_super_trunfo(false);
}

void embaralhar_cartas() {
    srand(time(0));
    std::random_shuffle(&carta[0], &carta[31]);
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

void jogar() {
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
}

int main() {

    int x = 0;
    std::cout << "Escolha o seu baralho: " << std::endl;
    std::cout << "1 - Baralho Aviao" << std::endl;
    std::cout << "2 - Baralho Carro" << std::endl;
    std::cout << "3 - Baralho Dinossauro" << std::endl;
    std::cout << "4 - Baralho Heroi" << std::endl;
    std::cin >> x;

    switch(x){
    case 1:
        std::cout << "Super Trunfo Aviao!" << std::endl;

        cartas_aviao();
        embaralhar_cartas();
        inicializar_pilhas();
        jogar();

        break;
    case 2:
        std::cout << "Super Trunfo Carro!" << std::endl;
        break;
    case 3:
        std::cout << "Super Trunfo Dinossauro!" << std::endl;
        break;
    case 4:
        std::cout << "Super Trunfo Heroi!" << std::endl;
        break;
    default:
        std::cout << "Opcao invalida!" << std::endl;
        break;
    }
    
	return 0;
}
