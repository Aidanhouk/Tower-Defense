#pragma once

#include <SFML/Graphics.hpp>

class Field;

// ���� ������� ��������� ���� 0 - ������ ����, 1 - ������ ����, 2 - ��������
extern int result;
// ����� ������� ������?
extern int level;
// �� ����� ����� ����������� ����?
extern int waveLevel;
// �������� ����
extern bool gameSpeed;
// �����?
extern bool pause;
// ���-�� �����
extern int money;
// ����
extern Field * field;
// ����
extern sf::RenderWindow * window;