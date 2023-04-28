#include<vector>
#include<algorithm>
#include<DLMath.h>

// not using namespace std remember!!! 


template <typename Domain> Domain Perceptron (std::vector<Domain> weightsVector, std::vector<Domain> inputsVector, Domain bias, Domain activationFuntion); // y = g(z), z = w0 + X * W
 
template <typename Domain> Domain LossOptimization (std::vector<Domain> weightsVector, std::vector<Domain> InputsVector, Domain ouptut, int layers);

template<typename Domain> Domain BackPropagation(std::vector<Domain> weightsVector, std::vector<Domain> InputsVector, Domain loss, Domain output, int layers);

