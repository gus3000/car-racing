//
// Created by gus3000 on 25/06/2020.
//

#include "fenetre.hpp"

Fenetre::Fenetre() : sf::RenderWindow(sf::VideoMode(1600, 900), "This is car racing !") {

}

void Fenetre::run() {
    while (isOpen()) {
        sf::Event event{};
        while (pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                close();
            //TODO gérer les évènements clavier ici

        }

        draw(car);
        display();
    }
}
