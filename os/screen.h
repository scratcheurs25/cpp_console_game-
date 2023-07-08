#include <iostream>
#include <string>

class std_os {
public:
	static void delete_screen();
	static void add_sentence(std::string c);
	static std::string input();
	static std::string input_text(std::string text);
	static std::string set_pos(int x,int y);
};
void std_os::delete_screen() {
	std::cout << "\033[2J\033[H";
}
void std_os::add_sentence(std::string c) {
	std::cout << c;
}

std::string std_os::input() {
	std::string input;
	std::getline(std::cin, input);
	return input;
}

std::string std_os::input_text(std::string text) {
	std_os::add_sentence(text);
	return std_os::input();
}
std::string std_os::set_pos(int x,int y) {
	return "\x1b[" + std::to_string(y) + ";" + std::to_string(x) + "H";
}