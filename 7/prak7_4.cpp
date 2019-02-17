#include <string>
using namespace std;
class Screen {
    protected:
        int height;
        int width;
        int resolution;
};

class Keyboard {
    protected:
        int count_of_keys;
};

class Notebook : public Screen, public Keyboard {
    public:
        string mark;
        Notebook(string m) {
            mark = m;
            height = 720;
            width = 1280;
            resolution = 720;
            count_of_keys = 40;
        }
};

class Phone : public Screen, public Keyboard {
    public:
        string mark;
        Phone(string m, bool isSensorPhone) {
            mark = m;
            height = 600;
            width = 150;
            resolution = 720;
            if (isSensorPhone) {
                count_of_keys = NULL;
            } else {
                count_of_keys = 13;
            }
        }
};

class Computer : public Screen, public Keyboard {
    public:
        Computer() {
            height = 720;
            width = 1280;
            resolution = 720;
            count_of_keys = 40;
        }
};
