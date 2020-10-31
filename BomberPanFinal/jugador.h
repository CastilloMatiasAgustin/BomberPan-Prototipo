#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;

class jugador
{
public:
	jugador();
	Sprite getspritechef();
	void eventosjugador();
	Sprite getposition();
	void setpositionup();
	void setpositiondown();
    void setpositionleft();
	void setpositionright();
	~jugador();

protected:
	Texture* texturachef;
	Sprite* spritechef;
};

