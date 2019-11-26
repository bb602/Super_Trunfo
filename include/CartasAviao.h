#ifndef CartasAviao_H
#define CartasAviao_H

#include <iostream>
#include <string>
#include <stack>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <thread>

#include "Cartas.h"
#include "Aviao.h"

//Alteração na pilha do baralho
void inverte_pilha(std::stack<Aviao> *pilha);

//Compara cartas
int compara_cartas(Aviao carta1, Aviao carta2, std::string atributo);

//Possibilita a jogada do player
void jogada_player(std::stack<Aviao> *pilha_jogador, std::stack<Aviao> *pilha_adversario);

//
bool valida_atributo(std::string atributo);

#endif