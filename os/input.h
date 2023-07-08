#include <iostream>
class input {
private:
    static std::string cinput;
public:
	static void set_input(std::string text);
	static std::string get_input();
	static void delete_input();
};

std::string input::cinput = "";

void input::set_input(std::string text) {
	input::cinput = text;
}
std::string input::get_input() {
	return input::cinput;
}

void input::delete_input() {
	input::cinput = "";
}

class input_acction {
public:
	static bool mouse_mouve();
};

bool input_acction::mouse_mouve() {
	if (input::get_input() == "d" || input::get_input() == "q" || input::get_input() == "z"  || input::get_input() == "s") {
		return true;
	}
	else {
		return false;
	}
}
