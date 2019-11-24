#ifndef Carro_H
#define Carro_H

#include <iostream>
#include <string>
#include "Cartas.h"

class Carro: public Cartas {
private:
	std::string cilindradas;
	std::string potencia;
	std::string velocidade;
	std::string peso;
	std::string comprimento;
public:
	//GETS
	std::string get_cilindradas();
	std::string get_potencia();
	std::string get_velocidade();
	std::string get_peso();
	std::string get_comprimento();

	void imprime_carta() override;

	//SETS
	void set_cilindradas(std::string cilindradas);
	void set_potencia(std::string potencia);
	void set_velocidade(std::string velocidade);
	void set_peso(std::string peso);
	void set_comprimento(std::string comprimento);

};

#endif
