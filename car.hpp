//
// Created by gus3000 on 25/06/2020.
//

#ifndef CAR_RACING_CAR_HPP
#define CAR_RACING_CAR_HPP

#include <SFML/Graphics.hpp>

class Car : public sf::Drawable {
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    //TODO ajouter les propriétés nécessaires ici

public:
    //TODO ajouter les méthodes nécessaires ici
};


#endif //CAR_RACING_CAR_HPP
