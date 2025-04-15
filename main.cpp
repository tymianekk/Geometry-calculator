#include <iostream>
#include <numbers>
using namespace std;

void rectangle();
void square();
void parallelogram();
void rhombus();
void trapezoid();
void triangle();
void circle();
int shape;
bool area; // true = area, false = perimeter

const double PI = numbers::pi;

int main() {

    cout << "If you want to calculate the area, enter 1. If the perimeter, enter 0" << endl;
    cin >> area;

    cout << "Choose a shape: " << endl;
    cout << "Square - enter 1\n"
         << "Rectangle - enter 2\n"
         << "Parallelogram - enter 3\n"
         << "Rhombus - enter 4\n"
         << "Trapezoid - enter 5\n"
         << "Triangle - enter 6\n"
         << "Circle - enter 7\n";
    cin >> shape;

    switch (shape) {
        case 1:
            square();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            parallelogram();
            break;
        case 4:
            rhombus();
            break;
        case 5:
            trapezoid();
            break;
        case 6:
            triangle();
            break;
        case 7:
            circle();
            break;
        default:
            break;
    }

    return 0;
}

void square() {
    double a;

    cout << "Side length: ";
    cin >> a;

    if (area) {
        cout << "Area: " << a * a;
    } else {
        cout << "Perimeter: " << a * 4;
    }
}

void rectangle() {
    double a;
    double b;

    cout << "Length of the first side: ";
    cin >> a;
    cout << "Length of the second side: ";
    cin >> b;

    if (area) {
        cout << "Area: " << a * b;
    } else {
        cout << "Perimeter: " << 2 * (a + b);
    }
}

void parallelogram() {
    double a, h, b;

    if (area) {
        cout << "Base length: ";
        cin >> a;
        cout << "Height: ";
        cin >> h;
        cout << "Area: " << a * h;
    } else {
        cout << "Length of the first side: ";
        cin >> a;
        cout << "Length of the second side: ";
        cin >> b;
        cout << "Perimeter: " << 2 * (a + b);
    }
}

void rhombus() {
    double e, f, a;

    if (area) {
        cout << "Length of the first diagonal: ";
        cin >> e;
        cout << "Length of the second diagonal: ";
        cin >> f;
        cout << "Area: " << (e * f) / 2;
    } else {
        cout << "Side length: ";
        cin >> a;
        cout << "Perimeter: " << a * 4;
    }
}

void trapezoid() {
    double a, b, c, d, h;

    if (area) {
        cout << "Length of the first base: ";
        cin >> a;
        cout << "Length of the second base: ";
        cin >> b;
        cout << "Height: ";
        cin >> h;
        cout << "Area: " << ((a + b) * h) / 2;
    } else {
        cout << "Length of the first side: ";
        cin >> a;
        cout << "Length of the second side: ";
        cin >> b;
        cout << "Length of the third side: ";
        cin >> c;
        cout << "Length of the fourth side: ";
        cin >> d;
        cout << "Perimeter: " << a + b + c + d;
    }
}

void triangle() {
    double a, b, c, h;

    if (area) {
        cout << "Base length: ";
        cin >> a;
        cout << "Height: ";
        cin >> h;
        cout << "Area: " << (a * h) / 2;
    } else {
        cout << "Length of the first side: ";
        cin >> a;
        cout << "Length of the second side: ";
        cin >> b;
        cout << "Length of the third side: ";
        cin >> c;
        cout << "Perimeter: " << a + b + c;
    }
}

void circle() {
    double r;

    cout << "Radius: ";
    cin >> r;

    if (area) {
        cout << "Area: " << PI * r * r;
    } else {
        cout << "Perimeter: " << 2 * PI * r;
    }
}