#include "Cartas.h"
#include <iostream>
#include <string>

std::string Cartas::get_nome(){
	return nome;
}

std::string Cartas::get_tipo(){
	return tipo;
}
void Cartas::set_nome(std::string nome){
	this-> nome = nome;
}
void Cartas::set_tipo(std::string tipo){
	this-> tipo = tipo;
}