#include <map>
#include <array>
#include <iostream>
#include <type_traits>
#include "A.h"

template<bool b>
using enforce = std::integral_constant<bool,b>;

constexpr int A::size;
constexpr std::array<Field,A::size> A::arr;

int main(int argc, char *argv[])
{
	std::cout << A::arr.size() << std::endl;
	for (auto a : A::arr) {
		std::cout << "a: " << a.name() << std::endl;
	}
	return 0;
}
