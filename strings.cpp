#include <iostream>
#include <string>
using namespace std;
int main() {

    string A, B;
    //string input
    do{
        cout << "enter first string (1-10 characters): ";
        cin >> A;
    } while (A.size() < 1 || A.size() > 10);
    //string input
    do {
        cout << "enter second string (1-10 characters): ";
        cin >> B;
    } while (B.size() < 1 || B.size() > 10);
    //size of both strings
    cout << "size of A and B: " << A.size() << "  " << B.size()<<endl;
    //concatenated strings
    cout << "concatenated string : " << A+B<< endl;
    //swap
    if (A.size()>0 && B.size()>0){
        char temp = A[0];
        A[0] = B[0];
        B[0] = temp;
    }
    cout << "strings after swapping : " << A << "  " << B << endl;
    return 0;
}
