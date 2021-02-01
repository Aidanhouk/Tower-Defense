#pragma once

#include <SFML/Graphics.hpp>

#include "consts.h"

class RoadCell;
class BlocksControl;

// ����� ����� �� ����
class BlockOnField
{
private:
	// ��� �����
	int m_type;
	// �������� �����
	int m_hp;
	// ��������� �� ������� �����
	sf::Texture * m_blockTexture;
	// �������� �� ������, �������������� �����
	BlocksControl * m_blocksControl;
	// ������ � ����������� �� ������, �� ������� ��������� ����, ���� - 2
	RoadCell * m_roadCells[2]{ nullptr };
public:
	BlockOnField(int type, sf::Texture * blocksTextures[FIELD_BLOCKS_COUNT], BlocksControl * blocksControl);
	~BlockOnField() {}

	// ��������� �����
	void drawBlock();
	// ��������� �����
	void getDamage(int dmg);
	// ��������� ����� ��������
	void drawHPBar();
	// �������� ������ � m_roadCells
	void addCell(RoadCell * cell) { m_roadCells[0] = cell; }
	// �������� 2 ������ � m_roadCells
	void addCell2(RoadCell * cell) { m_roadCells[1] = cell; }
	// 1 ������ �� �������, ��������� ����
	RoadCell * getCell() { return m_roadCells[0]; }
	// 2 ������ �� �������, ��������� ����
	RoadCell * getCell2() { return m_roadCells[1]; }

	int getType() const { return m_type; }
	int getHP() const { return m_hp; }
};