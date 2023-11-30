#include<iostream>

using namespace std;
//TAsk 1:
//
//int main(){
//
//int n;
//
//cout<<" Enter the number of rows:";
//
//cin>>n;
//
//for(int i=1; i<=n; i++){
//
//for(int j=1; j<=i; j++){
//
//cout<<" "<<j;
//
//}
//
//cout<<endl;
//
//}
//
//return 0;
//
//}
//Task 02
//int main(){
//
//int n;
//
//cout<<" Enter the value of n:";
//
//cin>>n;
//
//cout<<"1"<<endl;
//
//for(int i=2; i<=n; i=i+2){
//
//for(int j=1; j<=i; j+=1){
//
//cout<<i<<" ";
//
//}
//
//cout<<endl;
//
//}
//
//return 0;
//
//}

//Task 3:
int main() {

int n, check = 1, sum = 0;

cout << "upto what numbers we want to sum prime numbers: ";

cin >> n;

for(int i = 2; i <= n; i++) {

check = 1;

for(int j = 2; j < i; j++){

if (i % j == 0) {

check = 0;

break;

}

}

if(check)

sum += i;

}

cout << "Sum of prime numbers up to " << n << " is " << sum <<endl;

return 0;

}
