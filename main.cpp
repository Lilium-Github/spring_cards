#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include<SFML/Graphics.hpp>
#include "birb.h"
#include "star.h"
#include <vector>

using namespace std;

int main() {
	srand(time(NULL));

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!

	vector<birb> birbs;

	for (int i = 0; i < 7; i++) {
		birb newBirb(100 + (90 * i), (rand() % 600) + 100, birbColor);
		birbs.push_back(newBirb);
	}

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (1) {//GAME LOOP OMG
		window.clear(sf::Color(0, 0, 0));

		for (int i = 0; i < birbs.size(); i++) {
			birbs[i].draw(window);
			if(rand() % 100 < 3){
				birbs[i].fly();
			}
		}

		window.display();
	}
}


