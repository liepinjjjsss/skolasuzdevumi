#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,-6,7,8,9,10};
    int numberOfElementsArr = sizeof(arr)/sizeof(arr[0]);
    
    int arrSquared[numberOfElementsArr];

    int largestNumber = arr[0];
    int smallestNumber = arr[0];

    int sum;

    int fibSequence[10] = {1,1};
    string cities[5] = {"riga","tallina","vilna","maskava","parize"};
    for (int i = 0; i < numberOfElementsArr; i++){
        arrSquared[i] = arr[i]*arr[i];
    }

    cout << "squared numbers are: ";
    for(int n : arrSquared){
        cout << n << ", ";
    }
    cout << endl;

    for(int n : arr){
        if (n > largestNumber){ //largest number
            largestNumber = n;
        }
        else if(n < smallestNumber){ //smallest number
            smallestNumber = n;
        }

        sum += n; //finding sum
    }
    cout << "largest number is: " << largestNumber << endl;
    cout << "smallest number is: " << smallestNumber << endl;

    cout << "sum of numbers is: " << sum << endl;

    for (int i = 0; i < 10; i++){
        fibSequence[i+2] = fibSequence[i]+fibSequence[i+1];
        cout << fibSequence[i] << " ";
    }

    int citiesNameLenght[sizeof(cities)/sizeof(cities[0])];
    for (int i = 0; i < sizeof(cities)/sizeof(cities[0]); i++){ //es to uzrakstiju, bet man ir bail no taa
        sum = 0;
        for(char a : cities[i]){
            sum++;
        }
        citiesNameLenght[i] = sum;
        
        cout << endl << citiesNameLenght[i];
    }








    return 0;
}