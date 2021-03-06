#include "lastEnemy.h"

#include "globals.h"
#include "beam.h"
#include "roadCell.h"

LastEnemy::~LastEnemy()
{
	for (auto & var : m_beams) {
		delete var;
	}
}

void LastEnemy::createEffects()
{
	for (auto & var : m_beams) {
		int xDirection;
		int yDirection;
		switch (m_direction)
		{
		case 1:
			xDirection = 0;
			yDirection = -1;
			break;
		case 2:
			xDirection = 1;
			yDirection = 0;
			break;
		case 3:
			xDirection = 0;
			yDirection = 1;
			break;
		case 4:
			xDirection = -1;
			yDirection = 0;
			break;
		}
		double xVector{ xDirection * m_distance };
		double yVector{ yDirection * m_distance };
		int angle{ rand() % 360 };
		double distanceFromEnemy{ rand() % (int)(W * 1.5) + (double)(W) };
		double length{ rand() % 30 + 10.f };
		sf::RectangleShape *beamRect = new sf::RectangleShape(sf::Vector2f(length, 2));
		double _cos{ cos(angle * 3.14159265 / 180.0) };
		double _sin{ sin(angle * 3.14159265 / 180.0) };
		double xPos{ (m_position->getCoordinates().second + 0.5) * W + xVector };
		double yPos{ (m_position->getCoordinates().first + 0.5) * W + yVector };
		(*beamRect).setPosition(xPos + _cos * distanceFromEnemy, yPos - _sin * distanceFromEnemy);
		(*beamRect).rotate(-angle);

		double _cos1{ cos(-angle * 3.14159265 / 180.0) };
		double _sin1{ sin(-angle * 3.14159265 / 180.0) };
		var = new Beam(_cos1 * length, _sin1 * length, (beamRect->getPosition().x - xPos) * 0.7, (beamRect->getPosition().y - yPos) * 0.7, beamRect);
	}
}

void LastEnemy::moveEffects()
{
	for (auto & var : m_beams) {
		int xDirection;
		int yDirection;
		switch (m_direction)
		{
		case 1:
			xDirection = 0;
			yDirection = -1;
			break;
		case 2:
			xDirection = 1;
			yDirection = 0;
			break;
		case 3:
			xDirection = 0;
			yDirection = 1;
			break;
		case 4:
			xDirection = -1;
			yDirection = 0;
			break;
		}
		// ������������ ������ � �����������
		(*var).getBeamRect()->move(xDirection * m_speed, yDirection * m_speed);
		// ��� ������ ��������� �����
		var->beamsGetCloser();
	}
}

void LastEnemy::drawEffects()
{
	for (auto & var : m_beams) {
		(*window).draw(*var->getBeamRect());
	}
}