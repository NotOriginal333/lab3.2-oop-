#include "TitledWindow.h"

Window createWindow(int w, int h) {
    return Window(w, h);
}

int main() {
    Window baseWindow(100, 200);
    TitledWindow titledWindow(300, 400, "My Titled Window");

    cout << "Base Window: " << baseWindow << endl;
    cout << "Titled Window: " << titledWindow << endl;

    TitledWindow newTitledWindow;
    cin >> newTitledWindow;
    cout << "New Titled Window: " << newTitledWindow << endl;

    cout << "Create window: " << createWindow(1, 5) << endl;

    return 0;
}