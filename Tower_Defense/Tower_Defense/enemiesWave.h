#pragma once

#include <SFML/Graphics.hpp>

#include "consts.h"

class Enemy;
class RoadCell;
class LastEnemy;

// �����, ����������� ������ �����������
class EnemiesWave
{
private:
	// ���� ������� �����
	const int m_maxWave;
	// ��������� �� ���������� �����
	LastEnemy * lastEnemy{ nullptr };
	// ������� �����
	int m_waveLevel;
	// �������� ��������
	int m_enemiesLeft;
	// ��� ������� � �����
	std::vector<Enemy*> m_enemiesList;
	// ������� ������
	sf::Texture* m_enemiesTextures[ENEMIES_COUNT]{ nullptr };
public:
	// ��������� �������, � �������� �������� ���� � ��������� ������� �����
	EnemiesWave(int startWave, int maxWave);
	~EnemiesWave();

	// ��������� ���������� �������
	void spawnNextEnemy(RoadCell * cellToSpawn);
	// ������� ������ �� �����
	void cleanWave();
	// ������� ���� �����
	void nextWave();
	// ��������� ���� ������
	void drawAllEnemies();
	// �������� ������, ���� ���������� 1, �� ����� ��������
	bool moveAllEnemies();
	// ��������� ����-�� ����������� �� 1
	void reduceEnemiesLeft() { --m_enemiesLeft; }
	// �������� �������� ������������ ������
	void changeEnemiesSpeed();
	// �������� ���� ������
	void changeEnemiesDamage();
	// ������������ ������� � ����� �����
	void drawLastEnemyEffects();

	int getLevel() const { return m_waveLevel; }
	int getMaxLevel() const { return m_maxWave; }
	int getEnemiesLeft() const { return m_enemiesLeft; }
};