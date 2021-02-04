#include <thread>

#include "globals.h"
#include "menu.h"
#include "mainGame.h"
#include "results.h"
#include "music.h"

// �������� ����
bool gameSpeed;
// �����?
bool pause;
// ������� ����?
bool exitGame{ 0 };
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
	Music music;
	std::thread musicThread(&Music::playMusic, &music);
	
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
	musicThread.join();

	return 0;
}