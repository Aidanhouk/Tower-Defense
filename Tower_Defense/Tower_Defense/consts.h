#pragma once

// ��� ��������� �� ��������

// ������ ������ ���� � ��������
const int W{ 80 };
// ���-�� ����� ����������� ���� 1
const int ENEMIES_COUNT{ 6 };
// ���-�� ����� ����� ���� 1
const int TOWERS_COUNT{ 9 };
// ���-�� ����� ������, ������� ����� ��������� �� ������ ���� 1
const int FIELD_BLOCKS_COUNT{ 3 };

// ��������� ��������� ����� �������� ��� ��������� ������� ���� � �������

// ���-�� �����
const int ROWS{ 10 };
// ���-�� ��������
const int COLS{ 11 };

// ��������� ������ ��� ������� ������
const int START_MONEY[7]{ 0, 30, 30, 30, 30, 30, 30 };

// �������� ���������������� �����
const int STOP_BLOCK_HP{ 1000 };

// ����� ������ ������� ����� ���� �����/�����/�����

// ���-�� hp � ������
const double ENEMIES_HP[ENEMIES_COUNT]{ 0,180,360,720,900,1800 };
// ���-�� �����, �������� � ������
const int ENEMIES_COINS[ENEMIES_COUNT]{ 0,2,4,5,6,10 };
// �������� ������
const double ENEMIES_SPEED[ENEMIES_COUNT]{ 0,2,1.8,1.8,2.2,2.2 };
// ���� ������
const int ENEMIES_DAMAGE[ENEMIES_COUNT]{ 0,1,1,2,2,3 };

// ��������� �����
const int TOWERS_PRICE[TOWERS_COUNT]{ 0,10,30,50,80,120,150,100,70 };
// ���� �����
const double TOWERS_DAMAGE[TOWERS_COUNT]{ 0,1,3,5,3,12,15,0,0 };

// ��������� ������ �� ����
const int BLOCKS_PRICE[FIELD_BLOCKS_COUNT]{ 0,10,20 };