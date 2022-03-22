#include <iostream>
#include <tuple>
#include <vector>

template <typename... Ts>
double tuple_sum(const std::tuple<Ts...>& tpl) {

	std::apply([](auto&&... args){((std::cout<< args << '\n'), ...);}, tpl);

	return 6.66;
}

int main() {
	auto tpl = std::make_tuple(3.14, 42, 'a', "Hello", "World", std::vector<int>{1, 2, 3});

	std::cout << tuple_sum(tpl) << '\n';

	return 0;
}
