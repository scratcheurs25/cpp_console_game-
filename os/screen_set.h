#include <iostream>
#include <string>
#include <list>
#include <iterator>
//120,30
class screen_os {
public:
	static void set_screen(std::string carateur);
	static void make_sprite(std::list<std::string> sprite, int w, int h, int x, int y);
};

void screen_os::set_screen(std::string carateur) {
	for (int i = 0;i < 29;i++) {
		for (int j = 0;j < 120;j++) {
			std_os::add_sentence(carateur);
		}
		std_os::add_sentence("\n");
	}
}
void screen_os::make_sprite(std::list<std::string> sprite, int w,int h,int x,int y) {
	auto it = sprite.begin();
	std_os::add_sentence(std_os::set_pos(x, y));
	for (int i = 0;i < h;i++) {
		for (int j = 0;j < w;j++) {
			std::string element = *it;
			std_os::add_sentence(element);
			std::advance(it, 1);
		}
		std_os::add_sentence(std_os::set_pos(x, y + 1));
		y += 1;
	}
}