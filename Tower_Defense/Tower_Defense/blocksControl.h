#pragma once

#include <SFML/Graphics.hpp>

#include "consts.h"

class BlockOnField;

// �����, ���������� �� �������� ������ �� ����
class BlocksControl
{
private:
	// ��� ����� �� ����
	std::vector<BlockOnField*> m_blocks;
	// ������� ������
	sf::Texture* m_blocksTextures[FIELD_BLOCKS_COUNT]{ nullptr };
public:
	BlocksControl();
	~BlocksControl();

	// ��������� ���� �� ������
	bool placeBlockOnField(int y, int x, int blockType);
	// ���������� ��� �����
	void drawAllBlocks();
	// ������� ����
	void removeBlock(BlockOnField * block);
	// ������� ���� � ���� + ������� �������� ��� ���������
	int deleteBlock(int i, int j);
};