//
// Created by dmi3coder on 11/27/17.
//

#include "Snake.h"
#include "eog_exception.h"

void Snake::update_speed(int x_speed, int y_speed) {
    Snake::x_speed = x_speed*blockWidth;
    Snake::y_speed = y_speed*blockWidth;
}

void Snake::move(sf::RenderWindow &window) {
    printf("%d, %d, %d\n",vector.x, vector.y, x_speed);
    vector.x += Snake::x_speed;
    vector.y += Snake::y_speed;
    if(snakeTail.size() > length) snakeTail.pop_back();
    for (int i = 0; i < snakeTail.size(); ++i) {
        sf::Vector2i taileeVector = snakeTail[i];
	if(taileeVector == vector) {
	    throw eog_exception();
	}
        sf::RectangleShape shape(sf::Vector2f(blockWidth,blockWidth));
        shape.setPosition(taileeVector.x % screenWidth,taileeVector.y % screenHeight);
        window.draw(shape);
    }
    sf::RectangleShape shape(sf::Vector2f(blockWidth,blockWidth));
    shape.setPosition(vector.x % screenWidth,vector.y % screenHeight);
    snakeTail.push_front(vector);
    window.draw(shape);
}

void Snake::set_position(int x, int y) {
    vector.x = x;
    vector.y = y;
}

int Snake::snakeLength() {
    return length;
}

sf::Vector2i Snake::snakePosition() {
    return vector;
}

void Snake::feed(Food &food) {
    length += 10;
}
