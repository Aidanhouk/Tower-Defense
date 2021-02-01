#pragma once

class Enemy;
class Beam;

// ����� ����� ���������� �����
class LastEnemy
{
private:
	// ��������� �� �������� �����
	Enemy * m_baseEnemy;
	// ���� ��� ��������
	Beam *m_beams[100];
public:
	LastEnemy(Enemy * enemy)
		: m_baseEnemy{ enemy } {}
	~LastEnemy() {}

	// �������� �����
	void createEffects();
	// ������������ �����
	void moveEffects();
	// ��������� �����
	void drawEffects();
	// ������������ ������ ��� ����
	void deleteEffects();
};