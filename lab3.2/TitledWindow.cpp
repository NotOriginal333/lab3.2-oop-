#include "TitledWindow.h"

void TitledWindow::display() const {
    cout << "Titled Window: " << title << ", width = " << width << ", height = " << height << endl;
}

TitledWindow::operator string() const {
    stringstream ss;
    ss << "Titled Window: " << title << ", width = " << width << ", height = " << height;
    return ss.str();
}

ostream& operator<<(ostream& os, const TitledWindow& window) {
    os << "Titled Window: " << window.title << ", width = " << window.width << ", height = " << window.height;
    return os;
}

istream& operator>>(istream& is, TitledWindow& window) {
    cout << "Enter title: ";
    getline(is >> ws, window.title);
    cout << "Enter width: ";
    is >> window.width;
    cout << "Enter height: ";
    is >> window.height;
    return is;
}

TitledWindow& TitledWindow::operator=(const TitledWindow& other) {
    if (this != &other) {
        Window::operator=(other);
        title = other.title;
    }
    return *this;
}