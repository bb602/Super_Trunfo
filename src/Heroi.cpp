#include "Heroi.h"
#include <iostream>
#include <string>

int Heroi::get_velocidade(){
	return velocidade;
}

int Heroi::get_inteligencia(){
	return inteligencia;
}

int Heroi::get_agilidade(){
	return agilidade;
}

int Heroi::get_forca(){
	return forca;
}

int Heroi::get_habilidade(){
	return habilidade;
}

void Heroi::imprime_carta(){
	std::cout << "##########CARTA##########" << std::endl;
	std::cout << "Nome: " << get_nome() << std::endl;
	std::cout << "Tipo: " << get_tipo() << std::endl << std::endl;
	std::cout << "1 Velocidade: " << get_velocidade() << std::endl;
	std::cout << "2 Inteligencia: " << get_inteligencia() << std::endl;
	std::cout << "3 Agilidade: " << get_agilidade() << std::endl;
	std::cout << "4 Força: " << get_forca() << std::endl;
	std::cout << "5 Habilidade: " << get_habilidade() << std::endl;
	std::cout << "#########################" << std::endl << std::endl;
}

void Heroi::set_velocidade(int velocidade){
	this-> velocidade = velocidade;
}

void Heroi::set_inteligencia(int inteligencia){
	this-> inteligencia = inteligencia;
}

void Heroi::set_agilidade(int agilidade){
	this-> agilidade = agilidade;
}

void Heroi::set_forca(int forca){
	this-> forca = forca;
}

void Heroi::set_habilidade(int habilidade){
	this-> habilidade = habilidade;
}
