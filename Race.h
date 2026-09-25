#ifndef RACE_H
#define RACE_H

class Race {
	private:
		int NUM_HORSES = 5;
		int TRACK_LENGTH = 15;
	public:
		Horse horses[5];
		Race();
		void start();
};

#endif
