#include "Vector2D.h"


int main(int argc, char *argv[])
{
	Vector2D vec = Vector2D(1, 2);

	std::cout << vec.getX() << std::endl;
	std::cout << vec.getY() << std::endl;
}