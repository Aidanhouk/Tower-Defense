#pragma once

#include <SFML/Graphics.hpp>

class Field;

// �������� ����
extern bool gameSpeed;
// �����?
extern bool pause;
// ������� ����?
extern bool exitGame;
// ���� ������� ��������� ���� 0 - ������ ����, 1 - ������ ����, 2 - ��������
extern int result;
// ����� ������� ������?
extern int level;
// �� ����� ����� ����������� ����?
extern int waveLevel;
// ���-�� �����
extern int money;
// ����
extern Field * field;
// ����
extern sf::RenderWindow * window;