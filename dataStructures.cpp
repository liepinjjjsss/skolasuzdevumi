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

    int sum = 0;

    int fibSequence[10] = {1,1};
    string cities[5] = {"riga","tallinaaa","vilna","maskava","parize"};

    //1.uzdevums
    for (int i = 0; i < numberOfElementsArr; i++){
        arrSquared[i] = arr[i]*arr[i];
    }
    cout << "squared numbers are: ";
    for(int n : arrSquared){
        cout << n << ", ";
    }
    cout << endl;

    //2. un 3. uzdevumi
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

    //4.uzdevums
    for (int i = 0; i < 10; i++){
        fibSequence[i+2] = fibSequence[i]+fibSequence[i+1];
        cout << fibSequence[i] << " ";
    }

    //5. uzdevums
    int citiesNameLenght[sizeof(cities)/sizeof(cities[0])];
    for (int i = 0; i < sizeof(cities)/sizeof(cities[0]) ; i++){ //es to uzrakstiju, bet man ir bail no taa
        sum = 0;
        for(char a : cities[i]){
            sum++;
        }
        citiesNameLenght[i] = sum;
        
        cout << endl << citiesNameLenght[i];
    }
    string longestName;
    for(string city : cities){
        for(int i = 0; i < sizeof(citiesNameLenght)/sizeof(citiesNameLenght[0]); i++){
            if (citiesNameLenght[i] > citiesNameLenght[i-1]){
                longestName = cities[i];
            }
        }
    }
    cout << endl<< longestName << endl;

    //BubbleSorrt
    int numbers1[] = {1,6,3,7,12,83,2,79,5,43,324,543,534266,245,24512,26,1,6,55,64,25,26,7454,725,26,22,2,7,9,42,6};
    int numbers2[] = {5,2,6,46,7,2,8,37,3,6};
    int combinedarraylenght = sizeof(numbers1)/sizeof(numbers1[0])+sizeof(numbers2)/sizeof(numbers2[0]);
    int combinedNumbers[combinedarraylenght];
    int arrayLenght = sizeof(numbers1)/sizeof(numbers1[0]);
    for(int i = 0; i < arrayLenght; i++){
        for(int j = 0; j < arrayLenght-1; j++){
            if(numbers1[j] > numbers1[j+1]){
                    int tmp = numbers1[j];
                    numbers1[j] = numbers1[j+1];
                    numbers1[j+1] = tmp;
                }
        }
    }
    for (int n : numbers1){
        cout << n << ", ";
    }
    cout << endl;

    for(int i = 0; i < arrayLenght; i++){
        for(int j = 0; j < arrayLenght-1; j++){
            if(numbers2[j] > numbers2[j+1]){
                    int tmp = numbers2[j];
                    numbers2[j] = numbers2[j+1];
                    numbers2[j+1] = tmp;
                }
        }
    }
    for (int n : numbers2){
        cout << n << ", ";
    }
    cout << endl;

    for (int i = 0; i < combinedarraylenght; i++){
        if (numbers1[i] != '\0' || numbers2[i] != '\0'){
            if(numbers1[i] < numbers2[i]){
                combinedNumbers[i] = numbers1[i];
                continue;
            }
            else if (numbers1[i] > numbers2[i]){
                combinedNumbers[i] = numbers2[i];
                continue;
            }
        }
        else{
            if
        }
    }
    for (int n : combinedNumbers){
        cout << n << ", ";
    }
    cout << endl;
    return 0;
}
