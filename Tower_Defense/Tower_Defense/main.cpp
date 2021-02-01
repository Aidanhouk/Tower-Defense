// � ��������� consts.h ����� ��������� ��������� �������

#include "globals.h"
#include "menu.h"
#include "mainGame.h"
#include "results.h"

// �������� ����
bool gameSpeed;
// �����?
bool pause;
// ��������� ����
int result;
// ����� ������� ������
int level;
// �� ����� ����� ����������� ����
int waveLevel;
// ���-�� �����
int money;
// ����
Field * field;
// ����
sf::RenderWindow * window;

int main()
{
	// ������� ����?
	bool exitGame{ 0 };

	while (1) {
		// ���������� ��������� ����
		result = 0; waveLevel = 0;

		// ����� ������
		menu(exitGame);
		if (exitGame) {
			break;
		}

		// �������� ����
		mainGame();

		// ���������
		results(exitGame);
		if (exitGame) {
			break;
		}
	}

	return 0;
}