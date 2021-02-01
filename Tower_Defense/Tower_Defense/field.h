#pragma once

#include <SFML/Graphics.hpp>

class RoadCell;
class FieldCell;
class Tower;

// ����� ����
class Field
{
private:
	// �������/�����
	int m_level;
	// ����
	FieldCell **m_field;
	// ��������� �� ��������� ������ ������ (�� �����)
	RoadCell *m_startCell{ nullptr };
	// ��������� �� �������� ������ ������
	RoadCell *m_finishCell{ nullptr };
	// �������� ������
	sf::Texture *m_roadTexture;
	// �������� ������
	sf::Texture *m_finishLineTexture;
public:
	Field();
	~Field();

	// �������� ������ � ������ �� �����������
	void addRoadCell(int i, int j);
	// ������� ������ ��� ��������
	void makeRoad();
	// ������ ������
	void paintRoad();
	// ��������� ��������� ���������
	void drawRange(int i, int j);

	void addTowerOnCell(int i, int j, Tower * tower);
	void removeTowerFromCell(int i, int j) { addTowerOnCell(i, j, nullptr); }
	Tower * getTowerOnCell(int i, int j);
	int getCellValue(int i, int j) const;
	void setCellValue(int i, int j, int typeOfCell);
	RoadCell * getStartPos() { return m_startCell; }
	RoadCell * getFinishPos() { return m_finishCell; }
};