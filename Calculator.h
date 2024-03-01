#pragma once
#include <stdexcept>

using std::runtime_error;

class Calculator{

public:
    static Calculator& getInstance() {  // Estructura Singleton para calculadora
        static Calculator instance;
        return instance;
    }

    double add(double a,double b) {
        return a + b;
    }

    double substract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        }
        else {
            throw runtime_error("ZERO DIVISION ERROR");
            return 0; // Manejo básico del error
        }
    }



};

