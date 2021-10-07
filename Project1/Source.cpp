#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(1600, 900), "SFML Works!");
	
	Texture texture;
	texture.loadFromFile("C:\\Users\\visua\\Downloads\\EIFjcl4U8AAtBMN.jpg");
	Sprite sprite1(texture);
	
	double h = 45.0;


	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		window.clear(Color::White);
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();


			if (Keyboard::isKeyPressed(Keyboard::Left))
			{
				sprite1.move(-1, 0);
			}
			if (Keyboard::isKeyPressed(Keyboard::Up))
			{
				sprite1.move(0, -1);
			}
			if (Keyboard::isKeyPressed(Keyboard::Right))
			{
				sprite1.move(1, 0);
			}
			if (Keyboard::isKeyPressed(Keyboard::Down))
			{
				sprite1.move(0, 1);
			}
		}
		window.draw(sprite1);
		// ��������� ����	
		window.display();
	}
	return 0;
}