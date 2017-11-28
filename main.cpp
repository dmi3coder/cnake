#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#include <random>
#include "Snake.h"
#include "config.h"
#include "Food.h"
#include "eog_exception.h"

using namespace std;

int cell_rand() {
    return (rand() % static_cast<int>(32 + 1));
}

int main() {
    std::random_device rd;     // only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
    std::uniform_int_distribution<int> uni(0,32);

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "SFML Snake", sf::Style::Close, settings);

    sf::Vector2f windowCenter = sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f);

    Food food(sf::Vector2i(10,10));
    Snake snake;
    snake.set_position(10*blockWidth, 20 * blockWidth);
    window.setFramerateLimit(10);
    while (window.isOpen()) {
        window.clear();
        sf::Event event;
        try {
            snake.move(window);
        } catch(eog_exception &e) {
            break;
        }
        food.draw(window);
        if(snake.snakePosition() == food.vector) {
            snake.feed(food);
            food = Food(sf::Vector2i(cell_rand(),cell_rand()));
        }
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed){
                int new_x = 0, new_y = 0;
                switch(event.key.code) {
                    case sf::Keyboard::A:
                    case sf::Keyboard::Left:
                        new_x = -1; new_y = 0;
                        break;
                    case sf::Keyboard::D:
                    case sf::Keyboard::Right:
                        new_x = 1; new_y = 0;
                        break;
                    case sf::Keyboard::W:
                    case sf::Keyboard::Up:
                        new_x = 0; new_y = -1;
                        break;
                    case sf::Keyboard::S:
                    case sf::Keyboard::Down:
                        new_x = 0; new_y = 1;
                        break;
                }
                snake.update_speed(new_x,new_y);
            }
        }
        window.display();

    }
    return 0;
}