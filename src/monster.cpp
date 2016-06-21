#include "monster.hpp"
#include <cmath>


void monster::draw(sf::RenderWindow& window, bool hatched, int chance)
{sf::Text nametext;
    nametext.setFont(font);
    font.loadFromFile("pics/sansation.ttf");
    eggt.loadFromFile("pics/egg.png");
    arachnafangt.loadFromFile("pics/arachnafang.png");
    creedript.loadFromFile("pics/creedrip.png");
    cthulhujrt.loadFromFile("pics/cthulhujr.png");
    kingchompt.loadFromFile("pics/kingchomp.png");
    spectrafisht.loadFromFile("pics/spectrafish.png");
    sf::Sprite monster;
    monster.setTexture(eggt);

    if(hatched == true){

        switch(chance){
    case 0:
        monster.setTexture(arachnafangt);
        name = "Arachnafang";
        break;
    case 1:
        monster.setTexture(creedript);
        name = "Creedrip";
        break;
    case 2:
        monster.setTexture(cthulhujrt);
        name = "Cthulhu Jr.";
        break;
    case 3:
        monster.setTexture(kingchompt);
        name = "King Chomp";
        break;
    case 4:
        monster.setTexture(spectrafisht);
        name ="Spectrafish";
        break;




        }




    }

    nametext.setString(name);
window.draw(nametext);
monster.setPosition(400,100);
  window.draw(monster);

}

bool monster::hatch(bool hatched, sf::RenderWindow&window){
sf::Text hatchtext;
hatchtext.setFont(font);
hatchtext.setPosition(400,400);
if(!hatched){

hatchtext.setString("Click to hatch");

}

window.draw(hatchtext);
}




