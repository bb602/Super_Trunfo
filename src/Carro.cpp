#include "Carro.h"
#include <iostream>
#include <string>

std::string Carro::get_cilindradas(){
	return cilindradas;
}

std::string Carro::get_potencia(){
	return potencia;
}

std::string Carro::get_velocidade(){
	return velocidade;
}

std::string Carro::get_peso(){
	return peso;
}

std::string Carro::get_comprimento(){
	return comprimento;
}

void Carro::imprime_carta(){
	std::cout << "##########CARTA##########" << std::endl;
	std::cout << "Nome: " << get_nome() << std::endl;
	std::cout << "Tipo: " << get_tipo() << std::endl << std::endl;
	std::cout << "1 Cilindradas: " << get_cilindradas() << " ccm" << std::endl;
	std::cout << "2 Potencia: " << get_potencia() << " cv" << std::endl;
	std::cout << "3 Velocidade: " << get_velocidade() << " km/h" << std::endl;
	std::cout << "4 Peso: " << get_peso() << " kg" << std::endl;
	std::cout << "5 Comprimento: " << get_comprimento() << " m" << std::endl;
	std::cout << "#########################" << std::endl << std::endl;
}

void Carro::set_cilindradas(std::string cilindradas){
	this-> cilindradas = cilindradas;
}

void Carro::set_potencia(std::string potencia){
	this-> potencia = potencia;
}

void Carro::set_velocidade(std::string velocidade){
	this-> velocidade = velocidade;
}

void Carro::set_peso(std::string peso){
	this-> peso = peso;
}

void Carro::set_comprimento(std::string comprimento){
	this-> comprimento = comprimento;
}
