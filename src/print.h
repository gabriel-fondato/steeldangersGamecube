#include <grrlib.h>

class ConsoleLine {
public:
    int lineNumber;
    char* msg;
    u8 color;
};

class Console {
public:
    void init(GRRLIB_texImg consoleFont);
    GRRLIB_texImg consoleFont;
    void draw();
    void print(char* msg);
};