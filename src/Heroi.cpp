#include "Heroi.h"
#include <iostream>
#include <string>

std::string Heroi::get_velocidade(){
	return velocidade;
}

std::string Heroi::get_inteligencia(){
	return inteligencia;
}

std::string Heroi::get_agilidade(){
	return agilidade;
}

std::string Heroi::get_forca(){
	return forca;
}

std::string Heroi::get_habilidade(){
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

void Heroi::set_velocidade(std::string velocidade){
	this-> velocidade = velocidade;
}

void Heroi::set_inteligencia(std::string inteligencia){
	this-> inteligencia = inteligencia;
}

void Heroi::set_agilidade(std::string agilidade){
	this-> agilidade = agilidade;
}

void Heroi::set_forca(std::string forca){
	this-> forca = forca;
}

void Heroi::set_habilidade(std::string habilidade){
	this-> habilidade = habilidade;
}
