#include<iostream>
using namespace std;

int main(){

    int num = 1;
    int even=0,odd=0;

    while(num != 0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num % 2 == 0){
            if(num!=0){
                even += 1;
            }
            
        }
        else{
            odd += 1;
        }
    }

    

    cout << "\n#Even numbers = "<<even;
    cout << "\n#Odd numbers = "<<odd;

    return 0;
}
