#include "cycleFuncions.h"

#include "globals.h"
#include "enemiesWave.h"
#include "field.h"

// ���������� ��� ��������� ������� ����� ������� ���������� �������
static sf::Clock startNextEnemy;
static sf::Clock endNextEnemy;
static float spawnBreakTimeSummary;

void resetTimeToSpawn() 
{
	startNextEnemy.restart();
}

void spawnNextEnemyCycle(EnemiesWave &enemiesWave)
{
	endNextEnemy.restart();
	float time{ startNextEnemy.getElapsedTime().asSeconds() - endNextEnemy.getElapsedTime().asSeconds() };
	spawnBreakTimeSummary += time * (1 + 2 * gameSpeed);
	// ���� ������ 1 ���, ��������� ���� �����
	if (spawnBreakTimeSummary > 1) {
		enemiesWave.spawnNextEnemy((*field).getStartPos());
		spawnBreakTimeSummary = 0;
	}
	startNextEnemy.restart();
 }

// ������� ����� �������?
static bool _break{ 0 };
// ���������� ��� ��������� ������� ����� �������
static sf::Clock startWave;
static sf::Clock endWave;

void waveBreakCycle(EnemiesWave &enemiesWave, bool &endOfGame, bool &endOfWave)
{
	// ���� ����� �����������, ��������� ������ ��� ��������
	if (!_break) {
		enemiesWave.cleanWave();
		_break = 1;
		// ���� ����� ������ ���� �������, ���� �������������
		if (enemiesWave.getLevel() == enemiesWave.getMaxLevel()) {
			result = 1;
			endOfGame = 1;
			return;
		}
		startWave.restart();
	}
	// ���� �������
	if (_break) {
		endWave.restart();
		float time{ startWave.getElapsedTime().asSeconds() - endWave.getElapsedTime().asSeconds() };
		// ���� ������ 3 ���, �������� ��������� �����
		if (time > 3 * (1 - (float)gameSpeed / 1.5)) {
			enemiesWave.nextWave();
			endOfWave = 0;
			_break = 0;
		}
	}
}

void setToDefault()
{
	pause = 1;
	gameSpeed = 0;
	spawnBreakTimeSummary = 0;
	startNextEnemy.restart();
}