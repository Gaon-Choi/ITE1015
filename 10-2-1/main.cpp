#include <iostream>
#include <vector>
#include "clocks.h"
#include "clock_time.h"

int main(void) {
	std::vector<Clock*> vec = {
		new SundialClock(0,0,0),
		new CuckooClock(0,0,0),
		new GrandFatherClock(0,0,0),
		new WristClock(0,0,0),
		new AtomicClock(0,0,0)
	};

	int second;
	std::cin >> second;

	std::cout << "Reported clock times after resetting:" << std::endl;
	for (auto elem : vec) {
		elem->reset();
		elem->displayTime();
	}

	std::cout << "\nRunning the clocks..." << std::endl;
	for (int i = 0; i < second; ++i)
		for (auto elem : vec)
			elem->tick();
	
	std::cout << "\nReported clock times after running" << std::endl;
	for (auto elem : vec)
		elem->displayTime();
	return 0;
}
