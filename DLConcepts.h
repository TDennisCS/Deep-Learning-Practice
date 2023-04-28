#include<vector>
#include<iostream>
#include<algorithm>
#include<DLMath.h>

// not using namespace std remember!!! 


template <typename T> class Perceptron // y = g(w0 + sum of the dot poducts of (x, w))
{
    private:
        std::vector <std::vector<T>> weights; // list of weight vectors  --> w
        std::vector <std::vector<T>> inputs; // list of Input vectors --> x
        T bias; // bias --> w0
        T activationFunction; // activation function --> g  
        T output; //  output of the perceptron --> y 
        virtual Calcalute();

    public:
        Perceptron(std::vector<std::vector<T>> weightsVector, std::vector<std::vector<T>> inputsVector, T bias, T activationFuntion);
        T Output();
};

