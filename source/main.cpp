#include <SFML/Graphics.hpp>
#include "tools/print_status.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "EXAMPLE GAME");

    window.setPosition(sf::Vector2i(sf::VideoMode::getDesktopMode().width * 0.5 - window.getSize().x * 0.5,
                       sf::VideoMode::getDesktopMode().height * 0.5 - window.getSize().y * 0.5));

    print_status::info("Initialized.");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(255, 255, 255));

        window.display();
    }

    print_status::info("Successfully quit the game.");

    return 0;
}

