i

nt main() {
    MyClass obj1;
    obj1.setData("Hello");

    // 拷貝建構子
    MyClass obj2 = obj1;
    obj2.print(); // Hello

    // 拷貝賦值運算符
    MyClass obj3;
    obj3 = obj1;
    obj3.print(); // Hello

    return 0;
}
