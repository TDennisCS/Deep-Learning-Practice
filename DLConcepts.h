#include<vector>
#include<iostream>
#include<algorithm>
#include<DLMath.h>




template <typename T> class Perceptron // y = g(w + XW)
{
    private:
        std::vector<T> weights; // weights 
        std::vector<T> inputs; // Inputs
        T bias; // w 
        T activationFunction; // g 
        T output; // y

    public:
        Perceptron(std::vector<T> weightsVector, std::vector<T> inputsVector, T bias, T activationFuntion);
        T CalcaluteOutput(); 
        T Output();




};

