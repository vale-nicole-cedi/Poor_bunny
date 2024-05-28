#include "bolas.hpp"
#include <iostream>
using namespace std;
Bolas::Bolas()
{
    if(!this->bola.loadFromFile("ball_spikes.png"))
    {
        cout << "Error al cargar imagen" << endl;
    }
    this->spriteBola.setTexture(this->bola);
    this->speed=Vector2f(6.f,6.f);
}
void Bolas::drawTo(RenderWindow &window)
{
    window.draw(this->spriteBola);
}
void Bolas::update()
{
 if (this->spriteBola.getPosition().x + this->spriteBola.getLocalBounds().getSize().x > 1000 || this->spriteBola.getPosition().x < 0)
    {
        this->speed.x *= -1;
    }
    if (this->spriteBola.getPosition().y + this->spriteBola.getLocalBounds().getSize().y > 450 || spriteBola.getPosition().y < 0)
    {
        this->speed.y *= -1;
    }
    this->spriteBola.move(this->speed);
}