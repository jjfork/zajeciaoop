//#include <iostream>
//
//
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
