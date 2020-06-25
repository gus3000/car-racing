//
// Created by gus3000 on 25/06/2020.
//

#ifndef RATTRAPAGES_FENETRE_HPP
#define RATTRAPAGES_FENETRE_HPP


#include <SFML/Graphics.hpp>
#include "car.hpp"

class Fenetre : public sf::RenderWindow {
protected:
    Car car;

public:
    Fenetre();
    void run();
};


#endif //RATTRAPAGES_FENETRE_HPP
