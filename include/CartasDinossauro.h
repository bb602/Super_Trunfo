#ifndef CartasDinossauro_h
#define CartasDinossauro_h

#include <iostream>
#include <string>
#include <stack>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <thread>

#include "Cartas.h"
#include "Dinossauro.h"

//Alteração na pilha do baralho
void inverte_pilhaD(std::stack<Dinossauro> *pilha);

//Compara cartas
int compara_cartasD(Dinossauro carta1, Dinossauro carta2, std::string atributo);

//Possibilita a jogada do player
void jogada_playerD(std::stack<Dinossauro> *pilha_jogador, std::stack<Dinossauro> *pilha_adversario);

//
bool valida_atributoD(std::string atributo);

#endif
