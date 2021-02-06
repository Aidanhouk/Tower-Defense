#pragma once

#include "enemy.h"

class Beam;

// ����� ���������� �����
class LastEnemy : public Enemy
{
private:
	// ���� ��� ��������
	Beam *m_beams[100];
public:
	// ����������� �������� �����
	LastEnemy(Enemy * enemy)
		: Enemy(*enemy) {}
	virtual ~LastEnemy();

	// �������� �����
	void createEffects();
	// ������������ �����
	void moveEffects();
	// ��������� �����
	void drawEffects();
};