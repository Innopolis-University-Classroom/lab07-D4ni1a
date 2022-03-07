template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() { return num1+num2; }
    T subtract() { return num1-num2; }
    T multiply() { return num1*num2;}
    T divide() { if (num2!=0) return num1*num2; return 0; }
};
