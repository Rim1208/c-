#include <iostream>
#include <cmath>

using namespace std;

void quadraticEquation(double a, double b, double c, double& root1, double& root2) {
    double delta = b*b - 4*a*c;

    if (delta < 0) {
        cout << " PT vo nghiem." << endl;
    } else if (delta == 0) {
        root1 = root2 = -b / (2*a);
        cout << "PT co 1 nghiem duy nhat: " << root1 << endl;
    } else {
        root1 = (-b + sqrt(delta)) / (2*a);
        root2 = (-b - sqrt(delta)) / (2*a);
        cout << "PT co 2 nghiem rieng biet: " << root1 << " and " << root2 << endl;
    }
}

int main() {
    double a, b, c, root1, root2;

    cout << "nhap  3 so  a, b, va c: ";
    cin >> a >> b >> c;

    quadraticEquation(a, b, c, root1, root2);

    return 0;
}