#pragma once

#include "enemy.h"

class Beam;

// класс последнего врага
class LastEnemy : public Enemy
{
private:
	// лучи для эффектов
	Beam *m_beams[100];
public:
	// конструктор копирует врага
	LastEnemy(Enemy * enemy)
		: Enemy(*enemy) {}
	virtual ~LastEnemy();

	// создание лучей
	void createEffects();
	// передвижение лучей
	void moveEffects();
	// отрисовка лучей
	void drawEffects();
};