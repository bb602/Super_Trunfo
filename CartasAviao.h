#ifndef CartasAviao_h
#define CartasAviao_h
#include <iostream>
#include <string>

#include "Cartas.h"
#include "Aviao.h"

Aviao carta[4];

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

#endif
