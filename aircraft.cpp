//
// Created by ishan on 11/2/18.
//

#include "aircraft.hpp"

Aircraft::Aircraft(Aircraft::Type type) : type(type) {
}

void Aircraft::drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(sprite, states);
}

