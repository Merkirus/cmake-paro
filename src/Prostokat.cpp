#include "Prostokat.hpp"

Prostokat::Prostokat() {}

Prostokat::Prostokat(int x, int y) : x{x}, y{y} {}

int Prostokat::getArea() {
	return x*y;
}