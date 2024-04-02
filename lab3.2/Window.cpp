#include "Window.h"

void Window::display() const {
    cout << "Window: width = " << width << ", height = " << height << endl;
}

Window::operator string() const {
    stringstream ss;
    ss << "Window: width = " << width << ", height = " << height;
    return ss.str();
}

ostream& operator<<(ostream& os, const Window& window) {
    os << "Window: width = " << window.width << ", height = " << window.height;
    return os;
}

istream& operator>>(istream& is, Window& window) {
    cout << "Enter width: ";
    is >> window.width;
    cout << "Enter height: ";
    is >> window.height;
    return is;
}

Window& Window::operator=(const Window& other) {
    if (this != &other) {
        width = other.width;
        height = other.height;
    }
    return *this;
}