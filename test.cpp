#include <iostream>
#include <cstring>
#include <cstdlib>
class MyClass {
private:
    char* data;
	std::string _name;

public:
    // 預設建構子
    MyClass(std::string name) : data(nullptr), _name(name) 
	{std::cout << "default constructor" << std::endl;}

    // 拷貝建構子
    MyClass(const MyClass& other) {
		std::cout << "copy constructor" << std::endl;
        if (other.data) {
            data = new char[std::strlen(other.data) + 1];
            std::strcpy(data, other.data);
        } else {
            data = nullptr;
        }
    }

    // 拷貝賦值運算符
    MyClass& operator=(const MyClass& other) {
		std::cout << "operator" << std::endl;
        if (this != &other) { // 避免自我賦值
            delete[] data; // 釋放舊資源
            if (other.data) {
                data = new char[std::strlen(other.data) + 1];
                std::strcpy(data, other.data);
            } else {
                data = nullptr;
            }
        }
        return *this;
    }

    // 解構子
    ~MyClass() {
		std::cout << _name <<" destructor" << std::endl;
        delete[] data;
    }

    // 設置資料
    void setData(const char* value) {
        delete[] data;
        data = new char[std::strlen(value) + 1];
        std::strcpy(data, value);
    }

    // 打印資料
    void print() const {
        if (data) {
            std::cout << data << std::endl;
        } else {
            std::cout << "No data" << std::endl;
        }
    }
};

int main() {
    MyClass obj1("1");
	std::cout<< "\n\033[31m 1 ========\033[0m\n";
    obj1.setData("Hello");
std::cout<< "\n\033[31m 2 ========\033[0m\n";
    // 拷貝建構子
    MyClass obj2 = obj1;
	std::cout<< "\n\033[31m 3 ========\033[0m\n";
    obj2.print(); // Hello
std::cout<< "\n\033[31m 4 ========\033[0m\n";
    // 拷貝賦值運算符
    MyClass obj3("3");
	std::cout<< "\n\033[31m 5 ========\033[0m\n";
    obj3 = obj1;
	std::cout<< "\n\033[31m 6 ========\033[0m\n";
    obj3.print(); // Hello
std::cout<< "\n\033[31m 7 ========\033[0m\n";
	
	int n = std::rand();
	printf("n = %d\n",n);
    return 0;
}
