#include <iostream>
using namespace std;


class Drobb {
private:
    int chisl;
    int znamen;
public:
    Drobb(int c, int z) {
        chisl = c;
        znamen = z;
    }

    void SetChisl(int c) {
        chisl = c;
    }
    int GetChisl() {
        return chisl;
    }

    void SetZnamen(int z) {
        znamen = z;
    }
    int GetZnamen() {
        return znamen;
    }

    int Plus() {
        return chisl + znamen;
    }
    int Minus() {
        return chisl - znamen;
    }
    int Umn() {
        return chisl * znamen;
    }
    int Del() {
        if (znamen == 0) {
            return 1;
        }
        return chisl / znamen;
    }

    void Print() {
        cout << "Plus: " << Plus() << endl;
        cout << "Minus: " << Minus() << endl;
        cout << "Umn: " << Umn() << endl;
        cout << "Del: " << Del() << endl;
    }
};

int main() {
    Drobb d(8, 4);
    d.Print();
}
