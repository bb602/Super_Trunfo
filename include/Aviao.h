#ifndef Aviao_H
#define Aviao_H

#include <iostream>
#include "Cartas.h"

class Aviao : public Cartas {
private:
	int peso;
	int velocidade;
	int altitude_voo;
	float comprimento;
	float altura;
public:
	//GETS
	int get_peso();
	int get_velocidade();
	int get_altitude_voo();
	float get_comprimento();
	float get_altura();

	void imprime_carta () override;

	//SETS
	void set_peso(int peso);
	void set_velocidade(int velocidade);
	void set_altitude_voo(int altitude_voo);
	void set_comprimento(float comprimento);
	void set_altura(float altura);

};

#endif
