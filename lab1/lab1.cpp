#include <iostream>

class animals {
public:
    int height;
    std::string type;

    animals(int Height, int Length, std::string Type) {
        height = Height;
        length = Length;
        type = Type;
        std::cout << "Created object " << type << "!\n";
    }

    ~animals() {
        std::cout << "Destoryed object " << type << "!\n";
    }

    void setLength(int Length) {
        if (Length > 0)
            length = Length;
        else
            std::cout << "Length cannot be less than 0\n";
    }

    int getLength() {
        return length;
    }

private:
    int length;
};

int main() {
    animals dog(5, 5, "blablador");

    dog.height = 10;
    std::cout << dog.height << std::endl;

    dog.setLength(-15);
    std::cout << dog.getLength() << std::endl;

    animals *monke = new animals(30, 30, "Proboscis");

    delete monke;

    std::cout << "eoj4Khere\n";


    return 0;
}