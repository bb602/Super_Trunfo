#ifndef Carro_H
#define Carro_H

#include <iostream>
#include <string>
#include "Cartas.h"

class Carro: public Cartas {
private:
	int cilindradas;
	int potencia;
	int velocidade;
	int peso;
	float comprimento;
	bool super_trunfo;
public:
	//GETS
	int get_cilindradas();
	int get_potencia();
	int get_velocidade();
	int get_peso();
	float get_comprimento();
	bool get_super_trunfo();

	void imprime_carta() override;

	//SETS
	void set_cilindradas(int cilindradas);
	void set_potencia(int potencia);
	void set_velocidade(int velocidade);
	void set_peso(int peso);
	void set_comprimento(float comprimento);
	void set_super_trunfo(bool super_trunfo);

};

#endif
