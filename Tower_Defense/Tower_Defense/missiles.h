#pragma once

#include <vector>

class Enemy;
class Tower;

// ����� �������� �� �������
class Missiles
{
private:
	// ������ ��������, ��������� �� ����� + ��������� �� �����, � �������� ��� ������ �������
	std::vector<std::pair<Tower*, Enemy*>*> missilesVector;
public:
	Missiles() {}
	~Missiles() {}

	// ������������ ��� �������
	void drawMissiles();
	// ��������� ������ � ������ ��������
	void addMissile(std::pair<Tower*, Enemy*> * missile) { missilesVector.push_back(missile); }
	// ������� ������ ��������
	void deleteMissiles();
};
