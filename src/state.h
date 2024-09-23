



class State {
public:
    void changeState(int state);
    void init();
    void update();
    void draw();
    int currentState = 2; //0= game should close, 1= game init / main menu, 2= in game

};