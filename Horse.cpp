#include <iostream>
#include <string>
#include <random>
#include "Horse.h"

Horse::Horse() {
	Horse::position = 0;
	Horse::index = 0;
	Horse::trackLength = 15;
}

Horse::Horse(int index, int trackLength) {
	Horse::index = index;
	Horse::trackLength = trackLength;
}

void Horse::setPosition(int num) {
	Horse::position = num;
}

void Horse::setIndex(int num) {
	Horse::index = num;
}

void Horse::setTrackLength(int num) {
	Horse::trackLength = num;
}

void Horse::advance() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distr(0, 1);
	int randNum = distr(gen);
	Horse::position += randNum;
}

void Horse::printLane() {
	char array[Horse::trackLength];
	for (int i = 0; i < Horse::trackLength; i++) {
		array[i] = '*';
	}
	array[Horse::position] = Horse::index + '0';
	
	std::cout << "[ ";
	for (int i = 0; i < Horse::trackLength; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << "]" << std::endl;
}

bool Horse::isWinner() {
	bool retVal = false;
	if (Horse::position >= Horse::trackLength) {
		retVal = true;
	}
	return retVal;
}
