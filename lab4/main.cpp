#include <iostream>

using namespace std;

struct Point2i{
    int x;
    int y;
    Point2i(int nX, int nY){
        x = nX;
        y = nY;
    }

    Point2i operator ++(){
        x++;
        y++;
    }

    Point2i operator ++(int){
        x++;
        y++;
    }
};

ostream& operator << (ostream& os, const Point2i& point) {
    os << point.x << " , " << point.y;
    // ogarni czemu to nie dziala dzienki
}
int main()
{
    Point2i koordynaty(15, 10);
    cout << koordynaty.x << endl;
    koordynaty++;
    cout << koordynaty.x << endl;
    cout << koordynaty << endl;

};
//class Human{
//public:
//    int age;
//
//    Human(int nAge){
//        age = nAge;
//        numberOfObjects++;
//    }
//
//    Human(const Human &copy){
//        age = copy.age;
//        numberOfObjects++;
//
//    }
//    void printNumberOfObjects(){
//        std::cout << numberOfObjects << std::endl;
//    }
//
//    ~Human(){
//        numberOfObjects--;
//    }
//
//private:
//    inline static int numberOfObjects = 0;
//};
//
//int main()
//{
//    Human *donut = new Human(420);
//    donut->printNumberOfObjects();
//    Human monitor(69);
//    monitor.printNumberOfObjects();
//    delete donut;
//    monitor.printNumberOfObjects();
//}


//int main() {
//
//    int option = 0;
//    int flaga = 0;
//
//    while(flaga == 0)
//    {
//        std::cout << "Choose avaiable options:\nWelcome.\nNaura.\noooooo.";
//        std::cin >> option;
//        switch(option){
//            case(1):
//                 std::cout << "Hey\n\n";
//                 break;
//
//            case(2):
//                std::cout << "naura\n\n";
//                break;
//
//            case(3):
//                std::cout << "ooooooo!\n\n";
//                break;
//
//            case(4):
//                flaga = 1;
//                break;
//
//            default:
//            std::cout << "take one of the avaiable options\n\n";
//            break;
//        }
//        std::cout << "you exit matrix!";
//        return 0;
//    }
//}
