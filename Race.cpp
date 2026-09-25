#include <iostream>
#include <string>
#include "Race.h"

Race::Race() {
	
}

Race::start() {
	for (int i = 0; i < NUM_HORSES; i++) {
		Race::horses[i].printLane();
	}
	std::cout << std::endl;
	bool keepGoing = true;
	while (keepGoing) {
		bool isThereAWinner = false;
		
		for (int horse = 0; horse < NUM_HORSES; horse++) {
			
		}

		if (isThereAWinner) {
			keepGoing = false;
		}
	}
}
