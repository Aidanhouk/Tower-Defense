#pragma once

#include <SFML/Graphics.hpp>

class Field;

// скорость игры
extern bool gameSpeed;
// пауза?
extern bool pause;
// закрыть игру?
extern bool exitGame;
// сюда запишем результат игры 0 - закрыл игру, 1 - прошел игру, 2 - проиграл
extern int result;
// какой уровень выбран?
extern int level;
// на какой волне закончилась игра?
extern int waveLevel;
// кол-во денег
extern int money;
// поле
extern Field * field;
// окно
extern sf::RenderWindow * window;