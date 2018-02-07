#pragma once

enum class Presence {
	UNDEF, MAND, OPT
};

//template<std::size_t N>
//constexpr bool verify(const char (&in)[N]) { return  static_assert(N < 2, "string cannot be empty"), 1; }


class Field {
	private:
		Presence p;
		const char * n;
		std::size_t  nn;

	public:
		template<std::size_t N>
		constexpr Field(Presence p, const char (&in)[N]) 
			: p(p), n(in), nn(N-1) {
				static_assert(N > 1, "aaaa");
			}
		constexpr const char * name() const {return n; }
};

class A {
	public:
	constexpr static int size = 2;
	constexpr static std::array<Field, size> arr = { {
		{Presence::MAND, "AAA"},
		{Presence::OPT, "BBB"},
	} };
};

