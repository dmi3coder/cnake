//
// Created by dmi3coder on 11/27/17.
//

#include "Snake.h"

void Snake::update_speed(int x_speed, int y_speed) {
    Snake::x_speed = x_speed*blockWidth;
    Snake::y_speed = y_speed*blockWidth;
}

void Snake::move(sf::RenderWindow &window) {
    printf("%d, %d, %d\n",x, y, x_speed);
    Snake::x += Snake::x_speed;
    Snake::y += Snake::y_speed;
    sf::RectangleShape shape(sf::Vector2f(blockWidth,blockWidth));
    shape.setPosition(x % screenWidth,y % screenHeight);
    window.draw(shape);
}

void Snake::set_position(int x, int y) {
    Snake::x = x;
    Snake::y = y;
}
