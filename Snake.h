//
// Created by dmi3coder on 11/27/17.
//

#ifndef SNAKEPIT_SNAKE_H
#define SNAKEPIT_SNAKE_H

#include <SFML/Graphics.hpp>
#include <zconf.h>
#include "config.h"
#include "cmath"

class Snake {
private:
    int x = 0, y = 0;
    int x_speed = 1*blockWidth;
    int y_speed = 0;
    int length = 0;

public:
    void set_position(int x, int y);
    void update_speed(int x_speed, int y_speed);
    void move(sf::RenderWindow &window);

};


#endif //SNAKEPIT_SNAKE_H
