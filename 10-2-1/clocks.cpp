#include "clocks.h"

Clock::Clock(int hour, int minute, int second, double driftPerSecond)
	:_clockTime(hour, minute, second, 1), _driftPerSecond(driftPerSecond), _totalDrift(0) {
	// Do Nothing
}

void Clock::reset() {
	_clockTime.reset();
}

void Clock::tick() {
	_clockTime.increment();
	_totalDrift += _driftPerSecond;
}

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond)
	: Clock(hour, minute, second, driftPerSecond) {
	// Do Nothing
}

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond)
	: Clock(hour, minute, second, driftPerSecond) {
	// Do Nothing
}

DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond)
	: Clock(hour, minute, second, driftPerSecond) {
	// Do Nothing
}

QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond)
	: Clock(hour, minute, second, driftPerSecond) {
	// Do Nothing
}

SundialClock::SundialClock(int hour, int minute, int second)
	: NaturalClock(hour, minute, second, 0.0) {
	// Do Nothing
}

void SundialClock::displayTime() {
	_clockTime.display();
	std::cout << std::endl;
}

CuckooClock::CuckooClock(int hour, int minute, int second)
	: MechanicalClock(hour, minute, second, 0.000694444) {
	// Do Nothing
}

void CuckooClock::displayTime() {
	_clockTime.display();
	std::cout << std::endl;
}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second)
	:MechanicalClock(hour, minute, second, 0.000347222) {
	// Do Nothing
}
void GrandFatherClock::displayTime() {
	_clockTime.display();
	std::cout << std::endl;
}

WristClock::WristClock(int hour, int minute, int second)
	:DigitalClock(hour, minute, second, 0.000034722){
	// Do Nothing
}
void WristClock::displayTime() {
	_clockTime.display();
	std::cout << std::endl;
}

AtomicClock::AtomicClock(int hour, int minute, int second)
	:QuantumClock(hour, minute, second, 0.0) {
	// Do Nothing
}
void AtomicClock::displayTime() {
	_clockTime.display();
	std::cout << std::endl;
}
