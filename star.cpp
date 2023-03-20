#include "star.h"
//function definition for constructor
star::star(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}

//function definition for draw
void star::draw(sf::RenderWindow& window) {

	//leggies
	circle.setPosition(xpos + 3, ypos + 3);
	circle.setFillColor(sf::Color(sf::Color(color[0], color[1], color[2])));
	circle.setRadius(3);
	window.draw(circle); //first leg
}