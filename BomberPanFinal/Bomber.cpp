#include "SFML/Graphics.hpp"
#include "Menu.h"
#include "jugador.h"
#include <iostream> 

using namespace std;
using namespace sf;

int main(int argc, char* args[])
{
	srand(time(NULL()));  /// Generador de semilla nueva
	Controladora* Menu1;
	Menu1= new Controladora ( 850,  800, "Bomber Pan");

	return 0;
}

