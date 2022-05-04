#include <string>
#include "Button.h"

Button::Button(float x, float y, float width, float height, std::string words) {
    //shape related stuff
    shape.setPositon(x, y);
    shape.setFillColor(sf::Color::Red);
    shape.setSize(sf::Vector2f(width, height));
//        shape.SetSize({width, height});

//Text related stuff
//load font
//        if(!font.loadFromFile("arial.tff"));
//       return EXIT_FAILURE;
    font = nFont;
    this->words = words;
    text.setFont(font);
    text.setString(words);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setPosition(
            shape.getPosition().x + (shape.getGlobalBounds().width / 2) - (text.getGlobalBounds().width / 2),
            shape.getPosition().y + (shape.getGlobalBounds().height / 2) - (text.getGlobalBounds().height / 2)
    );

}

Button::~Button() {

}

void Button::render(sf::RenderWindos &window) {
    window.draw(shape);
    window.draw(text);
}

void Button::update(sf::Vector2i mousePosition) {
    shape.setFillColor(sf::Color::Red);

    if (shape.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
        shape.setFillColor(sf::Color::Blue);
    }

    if ()

}


#endif //LABY6_BUTTON_H
