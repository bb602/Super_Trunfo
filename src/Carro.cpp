#include "Carro.h"
#include <iostream>
#include <string>

int Carro::get_cilindradas(){
	return cilindradas;
}

int Carro::get_potencia(){
	return potencia;
}

int Carro::get_velocidade(){
	return velocidade;
}

int Carro::get_peso(){
	return peso;
}

float Carro::get_comprimento(){
	return comprimento;
}

void Carro::imprime_carta(){
	std::cout << "##########CARTA##########" << std::endl;
	std::cout << "# Nome: " << get_nome() << std::endl;
	std::cout << "# Tipo: " << get_tipo() << std::endl << std::endl;
	std::cout << "# 1 Cilindradas: " << get_cilindradas() << std::endl;
	std::cout << "# 2 Potência: " << get_potencia() << std::endl;
	std::cout << "# 3 Velocidade: " << get_velocidade() << std::endl;
	std::cout << "# 4 Peso: " << get_peso() << std::endl;
	std::cout << "# 5 Comprimento: " << get_comprimento() << std::endl;
	std::cout << "#########################" << std::endl << std::endl;
}

void Carro::set_cilindradas(int cilindradas){
	this-> cilindradas = cilindradas;
}

void Carro::set_potencia(int potencia){
	this-> potencia = potencia;
}

void Carro::set_velocidade(int velocidade){
	this-> velocidade = velocidade;
}

void Carro::set_peso(int peso){
	this-> peso = peso;
}

void Carro::set_comprimento(float comprimento){
	this-> comprimento = comprimento;
}
