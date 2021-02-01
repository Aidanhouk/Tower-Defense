#pragma once

class EnemiesWave;

// ���������� static ����������
void setToDefault();

// ���������� �����, ����� ��� ���������� ������ �����
void resetTimeToSpawn();

// ������� ���� ��������� ���-�� � ������������ ���������� �������

// ������� ����. �����
void spawnNextEnemyCycle(EnemiesWave &enemiesWave);
// ������� ����� �������
void waveBreakCycle(EnemiesWave &enemiesWave, bool &endOfGame, bool &endOfWave);