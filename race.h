#include <iostream>
#include <string>
#include "horse.h"

class Race {
	private:
		const int TRACK_LENGTH = 15;
		const static int NUM_HORSES = 5;
		Horse::horses[NUM_HORSES];
	public:
		Race();
		void start();
};
