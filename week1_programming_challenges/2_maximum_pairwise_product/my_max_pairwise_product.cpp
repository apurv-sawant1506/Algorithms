#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int n = numbers.size();

    int max1=numbers[0];
    int max2=numbers[1];

    if(max2>max1){
        int temp=max2;
        max2=max1;
        max1=temp;
    }

    if(n>2){
        for(int i=2;i<n;i++){
            if(numbers[i]>max2){
                if(numbers[i]>max1){
                    max2=max1;
                    max1=numbers[i];
                }
                else{
                    max2=numbers[i];
                }
            }
        }
    }

    return (long long)max1*max2;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
