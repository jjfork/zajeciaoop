#include "Button.h"

Button::Button(float x, float y, float width, float height, std::string words, sf::Font nFont)
{
    shape.setPosition(x,y);
    shape.setFillColor(sf::Color::Red);
    shape.setSize(sf::Vector2f(width, height));

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

Button::~Button()
{
    //dtor
}

void Button::render(sf::RenderWindow& window)
{
      window.draw(shape);
      window.draw(text);
}

void Button::update(sf::Vector2i mousePosition)
{
    shape.setFillColor(sf::Color::Red);

    if(shape.getGlobalBounds().contains(mousePosition.x, mousePosition.y)){
        shape.setFillColor(sf::Color::Blue);
    };

}

