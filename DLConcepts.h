#include<vector>
#include<algorithm>
#include<DLMath.h>

// not using namespace std remember!!! 


template <typename Domain> Domain Perceptron (std::vector<Domain> weightsVector, std::vector<Domain> inputsVector, Domain bias, Domain activationFuntion);

template <typename Domain> Domain LossOptimization (std::vector<Domain> weightsVector, std::vector<Domain> InputsVector, Domain ouptut,  int i, int n); 
