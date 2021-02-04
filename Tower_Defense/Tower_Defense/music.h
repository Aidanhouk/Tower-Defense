#pragma once

#include <SFML/Audio.hpp>

class Music
{
private:
	sf::Music * winningSong;
	sf::Music * songs[4];
public:
	Music();
	~Music();
	void playMusic();
};