#include "jugador.h"

jugador::jugador()
 {
	   texturachef = new Texture;
	   texturachef->loadFromFile("Chefsprite.png");
	   spritechef = new Sprite(*texturachef);
	   spritechef->setScale(40.f / spritechef->getTexture()->getSize().x, 60.f / spritechef->getTexture()->getSize().y);
	   spritechef->setPosition(50, 50);
	   
 }

 Sprite jugador::getspritechef()
{
	 return *spritechef;
}

 Sprite jugador::getposition()
 {
	 spritechef->getPosition();
	 return *spritechef;
 }
 
 void jugador::setpositionup()
 {
	 spritechef->setPosition(spritechef->getPosition().x, spritechef->getPosition().y - 2);
 }

 void jugador::setpositiondown()
 {
	 spritechef->setPosition(spritechef->getPosition().x, spritechef->getPosition().y + 2);
 }

 void jugador::setpositionleft()
 {
	 spritechef->setPosition(spritechef->getPosition().x-2, spritechef->getPosition().y);
 }

 void jugador::setpositionright()
 {
	 spritechef->setPosition(spritechef->getPosition().x+2, spritechef->getPosition().y);
 }