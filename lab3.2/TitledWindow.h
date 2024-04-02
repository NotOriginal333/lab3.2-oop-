#pragma once
#include "Window.h"
class TitledWindow :
    public Window
{
private:
    string title;
public:
    TitledWindow() : Window(), title("") {};

    TitledWindow(int w, int h, const string& t) : Window(w, h), title(t) {}

    TitledWindow(const TitledWindow& other) : Window(other), title(other.title) {}

    void setTitle(const string& t) {
        title = t;
    }

    string getTitle() const {
        return title;
    }

    void display() const;

    operator string() const;

    friend ostream& operator<<(ostream& os, const TitledWindow& window);

    friend istream& operator>>(istream& is, TitledWindow& window);

    TitledWindow& operator=(const TitledWindow& other);
};

