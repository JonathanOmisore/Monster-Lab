#include "game.hpp"
#include "monster.hpp"
#include <cmath>
void game::run(){

window.create(sf::VideoMode(800, 600), "Monster Lab");
monster monster;

    const int seed = time(0);
        srand(seed);
        int chance = rand()%5;
while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
            {


                window.close();
            }
            if(
               event.type == sf::Event::MouseButtonPressed)
                monster.hatched = true;



        }

        // Clear screen
        window.clear(sf::Color::Blue);
bool hatched = monster.hatched;
        // Draw the sprite
        monster.draw(window,hatched, chance);
        monster.hatch(hatched,window);
        // Update the window
        window.display();
    }



}
