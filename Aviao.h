#ifndef Aviao_H
#define Aviao_H

#include <iostream>
#include <string>
#include "Cartas.h"

class Aviao : public Cartas {
private:
	int peso;
	int velocidade;
	int altitude_voo;
	float comprimento;
	float altura;
	bool super_trunfo;
public:
	//GETS
	int get_peso();
	int get_velocidade();
	int get_altitude_voo();
	float get_comprimento();
	float get_altura();
	bool get_super_trunfo();

	void imprime_carta () override;

	//SETS
	void set_peso(int peso);
	void set_velocidade(int velocidade);
	void set_altitude_voo(int altitude_voo);
	void set_comprimento(float comprimento);
	void set_altura(float altura);
	void set_super_trunfo(bool super_trunfo);

};

#endif