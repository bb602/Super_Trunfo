#include "Menu.h"
#include <iostream>

void Menu(int x){
	switch(x){
	case 1:
		std::cout << "Super Trunfo Aviao!" << std::endl;
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
	case 5:
		std::cout << "Super Trunfo Regras!" << std::endl;
		std::cout << "1. Observe em cada carta qual valor vence em cada rodada: o maior ou o menor" << std::endl;
		std::cout << "2. Para iniciar, escolha entre as informações da sua carta, aquela que você julga ter o valor capaz de vencer as cartas dos seus adversários." << std::endl;
		std::cout << "3. Se você vencer - as cartas dos outros jogadores irão para trás do seu monte de cartas e você continua escolhendo a informação da sua próxima carta." << std::endl;
		std::cout << "4. Se outro jogador vencer - as cartas irão para trás do monte de cartas dele e a vez de escolher passa para ele." << std::endl;
		std::cout << "5. Em caso de empate - as cartas irão para o monte e as próximas cartas - sua e dos seus adversários - aparecem. Uma nova disputa é feita sendo que o jogador que escolheu as cartas que empataram deve escolher novamente." << std::endl;
		std::cout << "6. Existe entre as cartas uma carta SUPER TRUNFO. Esta carta vence todas as cartas do baralho independentemente do valor de suas características. Ela perde apenas para as cartas que tenham a letra A (1A, 2A, 3A, etc), marcado na parte superior de cada uma." << std::endl;
		std::cout << "7. Quando a carta SUPER TRUNFO aparecer, a comparação será automática com as cartas dos adversários." << std::endl;
		std::cout << "8. O jogo termina quando um dos jogadores ganhar todas as cartas do baralho." << std::endl << std::endl;
		break;
	default:
		std::cout << "Opcao invalida!" << std::endl;
		break;
	}
}
