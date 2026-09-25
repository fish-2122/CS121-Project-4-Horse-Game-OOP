#ifndef RACE_H
#define RACE_H
#include "Horse.h"

class Race {
	private:
		int NUM_HORSES = 5;
		int TRACK_LENGTH = 15;
		Horse horses[5];
	public:
		Race();
		void start();
};

#endif
