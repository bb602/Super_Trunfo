#ifndef Heroi_H
#define Heroi_H

#include <iostream>
#include "Cartas.h"

class Heroi: public Cartas {
private:
	std::string velocidade;
	std::string inteligencia;
	std::string agilidade;
	std::string forca;
	std::string habilidade;
public:
	//GETS
	std::string get_velocidade();
	std::string get_inteligencia();
	std::string get_agilidade();
	std::string get_forca();
	std::string get_habilidade();

	void imprime_carta() override;

	//SETS
	void set_velocidade(std::string velocidade);
	void set_inteligencia(std::string inteligencia);
	void set_agilidade(std::string agilidade);
	void set_forca(std::string forca);
	void set_habilidade(std::string habilidade);
	
};

#endif
