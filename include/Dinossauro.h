#ifndef Dinossauro_H
#define Dinossauro_H

#include <iostream>
#include "Cartas.h"

class Dinossauro: public Cartas {
private:
	std::string altura;
	std::string peso;
	std::string comprimento;
	std::string viveu_ha;
public:
	//GETS
	std::string get_altura();
	std::string get_peso();
	std::string get_comprimento();
	std::string get_viveu_ha();

	void imprime_carta() override;

	//SETS
	void set_altura(float altura);
	void set_peso(float peso);
	void set_comprimento(float comprimento);
	void set_viveu_ha(int viveu_ha);

};

#endif
