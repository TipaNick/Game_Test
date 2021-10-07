#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(1600, 900), "SFML Works!");
	
	Texture texture;
	texture.loadFromFile("C:\\Users\\visua\\Downloads\\EIFjcl4U8AAtBMN.jpg");
	Sprite sprite1(texture);
	
	double h = 45.0;


	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		window.clear(Color::White);
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
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
		// Отрисовка окна	
		window.display();
	}
	return 0;
}