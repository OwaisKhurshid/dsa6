#include <iostream>
#include <cmath>
using namespace std;

double calculateVariance(int n, double numbers[]) {
    double sum = 0;
    double sumSquared = 0;
    

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
        sumSquared += numbers[i] * numbers[i];
    }
    

    double mean = sum / n;
    double variance = (sumSquared / n) - (mean * mean);
    
    return variance;
}

double calculateStdDev(double variance) {
    return sqrt(variance);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    

    if (n <= 0) {
        cout << "Number of elements should be greater than zero." << endl;
        return 1; 
    }
    
    double numbers[n];
    

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    

    double variance = calculateVariance(n, numbers);
    double stdDev = calculateStdDev(variance);
    

    cout << "The variance of the entered numbers is: " << variance << endl;
    cout << "The standard deviation of the entered numbers is: " << stdDev << endl;
    
    return 0; 
}
