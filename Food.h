//
// Created by dmi3coder on 11/28/17.
//

#ifndef SNAKEPIT_FOOD_H
#define SNAKEPIT_FOOD_H


#include <SFML/Audio.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Food {
public:
    explicit Food(sf::Vector2i vector);
    void draw(sf::RenderWindow &window);

    sf::Vector2i vector;
};


#endif //SNAKEPIT_FOOD_H
