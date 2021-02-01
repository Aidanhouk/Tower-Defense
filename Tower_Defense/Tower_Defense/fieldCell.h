#pragma once

class Tower;

// ����� ������ ����
class FieldCell
{
private:
	// ��� ��������� �� ������
	// 1.������. 2.������. 3.�����. 4.����/����.
	int m_typeOfCell{ 0 };
	// ����� �� ������
	Tower * m_towerOnCell{ nullptr };
	// ���������� ������ �� ����
	std::pair<int, int> m_position;
public:
	FieldCell() {}
	~FieldCell() {}

	void operator=(int typeOfCell) { m_typeOfCell = typeOfCell; }
	bool operator==(int typeOfCell) { return m_typeOfCell == typeOfCell; }

	Tower * getTowerOnCell() { return m_towerOnCell; }
	void setTowerOnCell(Tower * tower) { m_towerOnCell = tower; }
	int getTypeOfCell() const { return m_typeOfCell; }
	void setTypeOfCell(int type) { m_typeOfCell = type; }
	std::pair<int, int> &getPosition() { return m_position; }
	void setPosition(int i, int j) { m_position.first = i; m_position.second = j; }
};