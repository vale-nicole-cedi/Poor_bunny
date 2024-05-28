#ifndef pato_hpp
#define pato_hpp
#include <SFML/Graphics.hpp>
using namespace sf;
class Pato
{
public:
Texture texture;
Sprite pato;
Vector2f speed, acc;
int pts;
bool pisando;
bool derecha;
Pato();
int sumarPts();
void moverseIzq();
void moverseDer();
void brincar();
void click();
void estaEnBase();
void drawTo(RenderWindow &window);
};

#endif