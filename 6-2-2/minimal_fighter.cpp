#include <iostream>
#include "minimal_fighter.h"

MinimalFighter::MinimalFighter()
	:mHp(0), mPower(0), mStatus(Invalid) {}

MinimalFighter::MinimalFighter(int _hp, int _power)
	: mHp(_hp), mPower(_power) {
	if (_hp > 0)
		mStatus = Alive;
	else
		mStatus = Dead;
}

int MinimalFighter::hp() const {
	return mHp;
}

int MinimalFighter::power() const {
	return mPower;
}

FighterStatus MinimalFighter::status() const {
	return mStatus;
}

void MinimalFighter::setHp(int _hp) {
	mHp = _hp;
}

void MinimalFighter::hit(MinimalFighter* _enemy) {
	mHp -= _enemy->power();
	_enemy->mHp -= mPower;
	this->UpdateStatus();
	_enemy->UpdateStatus();
}

void MinimalFighter::attack(MinimalFighter* _target) {
	_target->mHp -= mPower;
	mPower = 0;
	_target->UpdateStatus();
}

void MinimalFighter::fight(MinimalFighter* _enemy) {
	while (mStatus != Dead && _enemy->status() != Dead) {
		hit(_enemy);
	}
}

void MinimalFighter::ShowStatus(MinimalFighter* _target) {
	if (status() == Dead)
		std::cout << "DEAD";
	else {
		std::cout << "H" << hp() << ", " << "P" << power();
	}
	std::cout << " / ";
	if (_target->status() == Dead)
		std::cout << "DEAD";
	else {
		std::cout << "H" << _target->hp() << ", " << "P" << _target->power();
	}
	std::cout << std::endl;
}

void MinimalFighter::UpdateStatus() {
	if (mHp <= 0)
		mStatus = Dead;
}
