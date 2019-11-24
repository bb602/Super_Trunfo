#ifndef Aviao_H
#define Aviao_H

#include <iostream>
#include <string>
#include "Cartas.h"

class Aviao : public Cartas {
private:
	std::string peso;
	std::string velocidade;
	std::string altitude_voo;
	std::string comprimento;
	std::string altura;
public:
	//GETS
	std::string get_peso();
	std::string get_velocidade();
	std::string get_altitude_voo();
	std::string get_comprimento();
	std::string get_altura();

	void imprime_carta () override;

	//SETS
	void set_peso(std::string peso);
	void set_velocidade(std::string velocidade);
	void set_altitude_voo(std::string altitude_voo);
	void set_comprimento(std::string comprimento);
	void set_altura(std::string altura);

};

#endif
