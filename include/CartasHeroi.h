#ifndef CARTASHEROI_H_
#define CARTASHEROI_H_

#include <iostream>
#include <string>
#include <stack>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <thread>

#include "Cartas.h"
#include "Heroi.h"

//Alteração na pilha do baralho
void inverte_pilhaH(std::stack<Heroi> *pilha);

//Compara cartas
int compara_cartasH(Heroi carta1, Heroi carta2, std::string atributo);

//Possibilita a jogada do player
void jogada_playerH(std::stack<Heroi> *pilha_jogador, std::stack<Heroi> *pilha_adversario);

//
bool valida_atributoH(std::string atributo);

#endif
