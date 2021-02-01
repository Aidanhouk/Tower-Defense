#pragma once

#include <SFML/Graphics.hpp>

// ������� ��� ���������� ����� � ����� � ���� �����
class Beam
{
private:
	// �������� ����
	float m_beamSpeed{ 0.1f };
	// ����� ���� �� ���� x � y
	double m_beamXVector, m_beamYVector;
	// ����������� ��������� �� ������ �� ���� x � y
	double m_xVector, m_yVector;
	// ������� �������� �� ��� x
	double m_xDistanceMade{ 0 };
	// ��������� ��������������� ����
	sf::RectangleShape *m_beamRect;
public:
	Beam(double xBV, double yBV, double xVector, double yVector, sf::RectangleShape * beamRect);
	~Beam() { delete m_beamRect; }

	// ���� ����������
	void beamsGetCloser();

	sf::RectangleShape *getBeamRect() { return m_beamRect; }
};