#ifndef Dinossauro_H
#define Dinossauro_H

#include <iostream>
#include "Cartas.h"

class Dinossauro: public Cartas {
private:
	float altura;
	float peso;
	float comprimento;
	int viveu_ha;
	bool super_trunfo;
public:
	//GETS
	float get_altura();
	float get_peso();
	float get_comprimento();
	int get_viveu_ha();
	bool get_super_trunfo();
	
	void imprime_carta() override;

	//SETS
	void set_altura(float altura);
	void set_peso(float peso);
	void set_comprimento(float comprimento);
	void set_viveu_ha(int viveu_ha);
	void set_super_trunfo(bool super_trunfo);

};

#endif
