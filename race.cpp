#include <iostream>
#include "race.h"
#include "horse.h"

int main(){
	Horse h;
	h.init(1, 15);
	
	void Race::start(){
		bool keepGoing = true;
		while (keepGoing){
			h.advance();
			h.printLane();
			if (h.isWinner()){
				keepGoing = false;
			}
		}
	}
