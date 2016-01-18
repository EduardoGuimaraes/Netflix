#include <iostream>
#include <string>

class Episodio{
	string nome;
	double duracao;
	int likes;
	int dislikes;
	int classificacao;
};

class Temporada{
	int ordem;//eg. Temprada1, Temporada 2
	int numeroEpi;
	Episodio[numeroEpi] Eps;
};

class Serie{
	string nome;
	string genero;
	int favs;
	int NumeroTemp;
	Temporada[NumeroTemp] Temps;
};
