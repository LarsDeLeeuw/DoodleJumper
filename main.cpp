#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow ventana(sf::VideoMode(1920, 1080), "WerSkt!");
    sf::CircleShape circulo(400);
    circulo.setFillColor(sf::Color::Red);
    while (ventana.isOpen())
    {
        sf::Event event;
        while (ventana.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana.close();
        }
        ventana.clear();
        ventana.draw(circulo);
        ventana.display();
    }
    return 0;
}