#include <grrlib.h>



class Player {
public:

    float x, y;
    float velX, velY;
    float speed = 7;
    float rotation;
    GRRLIB_texImg texture;

    void init();
    void draw();
    void update();
    bool alive = TRUE;

};