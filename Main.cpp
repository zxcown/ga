#include <SFML/Graphics.hpp>

using namespace sf;
const float roket1 = 700;
const float roket2 = 50;
const float r2 = 250;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode (800, 600), "SFML Works!");
	window.setFramerateLimit(60);
	CircleShape c1(10.f);
	RectangleShape l (Vector2f(20, 80));
	RectangleShape r(Vector2f(20, 80));
    c1.move((800 - 2 * 10) / 2, (600 - 2 * 10) / 2);
	l.setPosition(roket1, 300);
	r.setPosition(roket2, 300);
	c1.setFillColor(Color(20, 217, 30));
	r.setFillColor(Color::Red); 
	l.setFillColor(Color( 3, 252, 219 ));
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.clear();
		window.draw(l);
		c1.move(2, 2);
		window.draw(r);
		window.draw(c1);
		window.display();
	}

	return 0;
}