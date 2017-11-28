//
// Created by dmi3coder on 11/28/17.
//

#include <SFML/Graphics/RectangleShape.hpp>
#include "Food.h"
#include "config.h"

Food::Food(sf::Vector2i vector) {
    this->vector = sf::Vector2i(vector.x * blockWidth, vector.y * blockWidth);
}

void Food::draw(sf::RenderWindow &window) {
    sf::RectangleShape shape(sf::Vector2f(blockWidth,blockWidth));
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(vector.x % screenWidth, vector.y % screenHeight);
    window.draw(shape);
}
