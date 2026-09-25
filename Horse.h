#ifndef HORSE_H
#define HORSE_H

class Horse {
	private:
		int position = 0;
		int index = 0;
		int trackLength = 15;
	public:
		Horse();
		Horse(int index, int trackLength);
		void setPosition(int num);
		void setIndex(int num);
		void setTrackLength(int num);
		void advance();
		void printLane();
		bool isWinner();
};

#endif
