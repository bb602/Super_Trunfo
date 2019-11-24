#include "Aviao.h"
#include <iostream>
#include <string>

std::string Aviao::get_peso(){
	return peso;
}

std::string Aviao::get_velocidade(){
	return velocidade;
}

std::string Aviao::get_altitude_voo(){
	return altitude_voo;
}

std::string Aviao::get_comprimento(){
	return comprimento;
}

std::string Aviao::get_altura(){
	return altura;
}

void Aviao::imprime_carta (){
	std::cout << "##########CARTA##########" << std::endl;
	std::cout << "Nome: " << get_nome() << std::endl;
	std::cout << "Tipo: " << get_tipo() << std::endl << std::endl;
	std::cout << "1 Peso: " << get_peso() << " kg" << std::endl;
	std::cout << "2 Velocidade: " << get_velocidade() << " km/h" << std::endl;
	std::cout << "3 Altitude Voo: " << get_altitude_voo() << " m" << std::endl;
	std::cout << "4 Comprimento: " << get_comprimento() << " m" << std::endl;
	std::cout << "5 Altura: " << get_altura() << " m" << std::endl;
	std::cout << "#########################" << std::endl << std::endl;
}

void Aviao::set_peso(std::string peso){
	this-> peso = peso;
}

void Aviao::set_velocidade(std::string velocidade){
	this-> velocidade = velocidade;
}

void Aviao::set_altitude_voo(std::string altitude_voo){
	this-> altitude_voo = altitude_voo;
}

void Aviao::set_comprimento(std::string comprimento){
	this-> comprimento = comprimento;
}

void Aviao::set_altura(std::string altura){
	this-> altura = altura;
}
