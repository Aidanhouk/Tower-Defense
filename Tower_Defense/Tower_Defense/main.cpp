#include <thread>

#include "globals.h"
#include "menu.h"
#include "mainGame.h"
#include "results.h"
#include "music.h"

// скорость игры
bool gameSpeed;
// пауза?
bool pause;
// закрыть игру?
bool exitGame{ 0 };
// результат игры
int result;
// какой уровень выбран
int level;
// на какой волне закончилась игра
int waveLevel;
// кол-во денег
int money;
// поле
Field * field;
// окно
sf::RenderWindow * window;

int main()
{
	Music music;
	std::thread musicThread(&Music::playMusic, &music);
	
	while (1) {
		// сбрасываем параметры игры
		result = 0; waveLevel = 0;

		// выбор уровня
		menu(exitGame);
		if (exitGame) {
			break;
		}

		// основная игра
		mainGame();

		// результат
		results(exitGame);
		if (exitGame) {
			break;
		}
	}
	musicThread.join();

	return 0;
}