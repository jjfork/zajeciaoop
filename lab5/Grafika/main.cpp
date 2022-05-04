#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 600), "SFML window");

    // Load a sprite to display
    sf::Texture texture;
    sf::Texture background;

    if (!texture.loadFromFile("cb.bmp"))
        return EXIT_FAILURE;

    if (!background.loadFromFile("background.png"))
        return EXIT_FAILURE;

    sf::Sprite sprite(texture);
    sf::Sprite backgroundSprite(background);

    backgroundSprite.setOrigin(backgroundSprite.getGlobalBounds().width / 2,
    backgroundSprite.getGlobalBounds().height / 2
    );

    backgroundSprite.setPosition(app.getSize().x / 2, app.getSize().y / 2);

    sf::Vector2i mousePosition;

    sf::Text napis;
    sf::Font font;
    napis.setCharacterSize(24);
    napis.setColor(sf::Color::Red);
    napis.setOutlineColor(sf::Color::Black);
    napis.setString("Jakis napis");
    napis.setPosition(app.getSize().x / 2, app.getSize().y / 2);

    if (!font.loadFromFile("arial.ttf"))
        return EXIT_FAILURE;

    napis.setOrigin(napis.getGlobalBounds().width / 2,
    napis.getGlobalBounds().height / 2
    );

    napis.setFont(font);

	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                app.close();
        }

        // Clear screen
        app.clear();

        mousePosition = sf::Mouse::getPosition(app);
        std::cout << "Mouse position x :" << mousePosition.x;
        std::cout << " y :" << mousePosition.y << std::endl;

//        if(mousePosition.x < 0)
//        {
//            sf::Mouse::setPosition({0, 0}, app);
//        }

        // Draw the sprite
        app.draw(backgroundSprite);
        app.draw(napis);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}
