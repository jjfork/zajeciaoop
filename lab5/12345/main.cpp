#include <SFML/Graphics.hpp>
#include "Button.h"


int main()
{
    // Create the main window
    sf::RenderWindow *app = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML window");

    // Load a sprite to display
    sf::Font menuFont;
    if (!menuFont.loadFromFile("arial.ttf"))
        return EXIT_FAILURE;

    Button *MenuButton_SideWindow1 = new Button(400, 300, 200, 120, "Przycisk1", menuFont);
    Button *MenuButton_SideWindow2 = new Button(100, 300, 200, 120, "Przycisk2", menuFont);


	// Start the game loop
    while (app->isOpen())
    {
        // Process events
        sf::Event event;
        while (app->pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app->close();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
        app->close();
        }

        // Clear screen
        app->clear();

        // Draw the sprite
        MenuButton_SideWindow1->update(sf::Mouse::getPosition(*app));
        MenuButton_SideWindow2->update(sf::Mouse::getPosition(*app));
        MenuButton_SideWindow1->render(*app);
        MenuButton_SideWindow2->render(*app);

        // Update the window
        app->display();
    }

    return EXIT_SUCCESS;
}
