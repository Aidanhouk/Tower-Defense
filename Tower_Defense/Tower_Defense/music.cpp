#include "music.h"

#include <ctime>

#include "globals.h"

Music::Music()
{
	winningSong = new sf::Music;
	winningSong->openFromFile("music/winningSong.ogg");
	winningSong->setVolume(50);
	for (int i = 0; i < 4; ++i) {
		songs[i] = new sf::Music;
		songs[i]->openFromFile("music/song" + std::to_string(i + 1) + ".ogg");
		songs[i]->setVolume(20);
	}
}

Music::~Music()
{
	delete winningSong;
	for (auto & var : songs) {
		delete var;
	}
}

void Music::playMusic()
{
	srand(time(0)); rand();
	// пока игрок не закрыл игру, треки меняются
	while (!exitGame) {
		sf::Music *song{ songs[rand() % 4] };
		song->play();
		while (result != 1 && !exitGame) {
			if (song->getStatus() == sf::Music::Stopped) {
				song = songs[rand() % 4];
				song->play();
			}
		}
		song->stop();

		if (exitGame) {
			break;
		}
		else {
			winningSong->play();
			while (result == 1 && !exitGame) {
				if (winningSong->getStatus() == sf::Music::Stopped) {
					winningSong->play();
				}
			}
			winningSong->stop();
		}
	}
}