#ifndef MONSTER_HPP
#define MONSTER_HPP
#include <SFML/Graphics.hpp>
#include <iostream>
class monster
{
    public:
        void draw(sf::RenderWindow& window, bool hatched, int chance);
        int health, happiness = 100;
        int hunger = 0;
        int chance;
        bool hatched = false;
        std::string name ="Egg";
        sf::Texture eggt,arachnafangt,creedript,cthulhujrt,kingchompt,spectrafisht;
        sf::Font font;
        sf::Text healthtext,happytext,hungertext;
        bool hatch(bool hatched, sf::RenderWindow &window);
        void stats(int health, int happiness, int hunger);
    protected:

    private:
};

#endif // MONSTER_HPP
