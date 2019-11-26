#ifndef CartasCarro_H
#define CartasCarro_H

#include <iostream>
#include <string>
#include <stack>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <thread>

#include "Cartas.h"
#include "Carro.h"

//Alteração na pilha do baralho
void inverte_pilhaC(std::stack<Carro> *pilha);

//Compara cartas
int compara_cartasC(Carro carta1, Carro carta2, std::string atributo);

//Possibilita a jogada do player
void jogada_playerC(std::stack<Carro> *pilha_jogador, std::stack<Carro> *pilha_adversario);

//
bool valida_atributoC(std::string atributo);

#endif