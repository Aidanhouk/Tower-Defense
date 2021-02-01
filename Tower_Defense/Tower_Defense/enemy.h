#pragma once

#include <SFML/Graphics.hpp>

#include "consts.h"

class RoadCell;
class EnemiesWave;

// ����� ����������
class Enemy
{
protected:
	// ��� �� ����
	bool m_isAlive{ 0 };
	// ���� �� ����
	bool m_isKilled{ 0 };
	// ��� �����
	int m_type;
	// ������� �����
	int m_waveLevel;
	// ��������
	double m_hp;
	// ������� � ���� ������ �����
	int m_coins;
	// ����
	int m_dmg;
	// � ����� ������� ������ ���������
	int m_direction;
	// ��������� ������ �� ������ ������, ����� ��� ��������� � ����� ������
	double m_distance{ 0 };
	// �������� ��������
	double m_speed;
	// ��������� �� ������� �����
	sf::Texture * m_enemyTexture;
	// �� ����� ������ ���������
	RoadCell *m_position{ nullptr };
	// �����
	EnemiesWave *m_wave;
public:
	Enemy(int type, int currentWaveLevel, sf::Texture * enemyTextures[ENEMIES_COUNT], EnemiesWave * wave);
	~Enemy() {}

	// ���������� m_distance � ������ ������
	void changePosition();
	// ��������� �����
	void drawEnemy();
	// ��������� ����� ��������
	void drawHPBar();
	// ���� ���������
	void enemyMoves();
	// ���� �������� ����, ����������, ���� �� ����
	bool getDamage(int dmg);
	// �������� �������� �����
	void changeSpeed();
	// �������� ���� �����
	void changeDamage();

	RoadCell *getPositionEnemy() { return m_position; }
	void setPosition(RoadCell * position) { m_position = position; }
	
	int getDirection() const { return m_direction; }
	void setDirection(RoadCell * currentPosition);
	double getDistance() const { return m_distance; }

	int getType() const { return m_type; }
	int getCoins() const { return m_coins; }
	double getSpeed() const { return m_speed; }

	bool getIsAlive() const { return m_isAlive; }
	void setIsAlive(bool isAlive) { m_isAlive = isAlive; }
	bool getIsKilled() const { return m_isKilled; }
};