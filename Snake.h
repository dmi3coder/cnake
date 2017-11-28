//
// Created by dmi3coder on 11/27/17.
//

#ifndef SNAKEPIT_SNAKE_H
#define SNAKEPIT_SNAKE_H

#include <SFML/Graphics.hpp>
#include <zconf.h>
#include "config.h"
#include "cmath"
#include "Food.h"
#include <deque>

class Snake {
private:
    sf::Vector2i vector = sf::Vector2i(0, 0);
    int x_speed = 1 * blockWidth;
    int y_speed = 0;
    int length = 1;
    std::deque<sf::Vector2i> snakeTail;

public:
    void set_position(int x, int y);

    void update_speed(int x_speed, int y_speed);

    void move(sf::RenderWindow &window);


    sf::Vector2i snakePosition();

    void feed(Food &food);

};


#endif //SNAKEPIT_SNAKE_H
