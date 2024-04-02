#pragma once
#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

class Window {
protected:
    int width;
    int height;
public:
    Window() : width(0), height(0) {};

    Window(int w, int h) : width(w), height(h) {
        if (w < 0 || h < 0) {
            cerr << "Error: Invalid window dimensions!" << endl;
            exit(1);
        }
    }

    Window(const Window& other) : width(other.width), height(other.height) {}

    ~Window() {};

    void setWidth(int w) {
        if (w >= 0)
            width = w;
        else
            cerr << "Error: Invalid width!" << endl;
    }

    void setHeight(int h) {
        if (h >= 0)
            height = h;
        else
            cerr << "Error: Invalid height!" << endl;
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    void display() const;

    operator string() const;

    friend ostream& operator<<(ostream& os, const Window& window);

    friend istream& operator>>(istream& is, Window& window);

    Window& operator=(const Window& other);
};
