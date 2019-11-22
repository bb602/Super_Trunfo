#include "Carro.h"
#include "Aviao.h"
#include "Heroi.h"
#include "Cartas.h"
#include "Dinossauro.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	Aviao carta1;
	carta1.set_nome("Aviao");
	carta1.set_tipo("D");
	carta1.set_peso(100);
	carta1.set_velocidade(100);
	carta1.set_altitude_voo(150);
	carta1.set_comprimento(140.15);
	carta1.set_altura(105.05);

	carta1.imprime_carta();


	return 0;
}
