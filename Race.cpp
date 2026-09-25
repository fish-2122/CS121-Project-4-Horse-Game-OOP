#include <iostream>
#include <string>
#include "Race.h"

Race::Race() {
	for (int i = 0; i < NUM_HORSES; i++) {
		Race::horses[i].setIndex = i;
	}
}

Race::start() {
	for (int i = 0; i < NUM_HORSES; i++) {
		Race::horses[i].printLane();
	}
	std::cout << std::endl;
	bool keepGoing = true;
	while (keepGoing) {
		bool isThereAWinner = false;
		
		for (int i = 0; i < NUM_HORSES; i++) {
			if (isThereAWinner == false) {
				Race::horses[i].advance();
			}

			for (int i = 0; i < NUM_HORSES; i++) {
				Race::horses[i].printLane();
			}

			if (Race::horses[i].isWinner() == true) {
				isThereAWinner = true;
				keepGoing = false;
			}
		}
	}
}
