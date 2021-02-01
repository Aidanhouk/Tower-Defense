#pragma once

#include <SFML/Graphics.hpp>

#include "consts.h"

class Missiles;
class Tower;

// �����, �������������� ��� �����
class TowersControl
{
private:
	// ��� �����
	std::vector<Tower*> m_towersList;
	// ������� �����
	sf::Texture* m_towersTextures[TOWERS_COUNT]{ nullptr };
	// �������� �����
	sf::Texture* m_buffsTextures[4];
public:
	TowersControl();
	~TowersControl();

	// ��������� �����
	void addTower(int i, int j, int type);
	// ���������� ��� �����
	void drawAllTowers();
	// ����� ��������
	void towersShoot(Missiles &missiles);
	// �������� ��������� ����� ��� ��������
	void markTowerToDelete(int i, int j);
	// ������� ����� � ���� + ������� �������� �� ���������
	int deleteTower(int i, int j);
	// �������� ���� �����
	void changeTowersDamage();
	// ���������, ���� �� ����� �����-����
	void checkTowersForBuffs();
};