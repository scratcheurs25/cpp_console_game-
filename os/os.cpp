#include <iostream>
#include <list>
#include "screen.h"
#include "input.h"
#include "screen_set.h"
//afficher l'image
// -- 
// ||
///  \
//|  |
//|  |
//|  |
//|  |
//|__|
int main() {
    screen_os screen;
    int x;
    x = 1;
    int y;
    y = 1;
    std::list<std::string> sprite = {
          " ", "_", "_", " "
        , " ", "|", "|", " "
        , "/", " ", " ", "\\"
        , "|", " ", " ", "|"
        , "|", " ", " ", "|"
        , "|", " ", " ", "|"
        , "|", " ", " ", "|"
        , "|", "_", "_", "|" };
    while (true)
    {
        screen.set_screen(" ");
        screen.make_sprite(sprite, 4, 8, x,y);
        std_os::add_sentence(std_os::set_pos(0,30));
        input::set_input(std_os::input_text("input? "));
        if (input_acction::mouse_mouve()) {
            if (input::get_input() == "d") {
                x += 1;
                input::delete_input();
            }
            else
            {
                if (input::get_input() == "q") {
                    x -= 1;
                    input::delete_input();
                }
                else
                {
                    if (input::get_input() == "z") {
                        y -= 1;
                        input::delete_input();
                    }
                    else
                    {
                        if (input::get_input() == "s") {
                            y += 1;
                            input::delete_input();
                        }
                    }
                }
            }
        }
    }
    return 0;
}
