#include <iostream>
using namespace std;
bool check(int n) {
 return n % 5 == 0;
}
bool check2(int n) {
 bool result;
 result = n % 5 == 0;
 return result;
 
}
bool check3(int n) {
 bool result;
 if (n % 5 == 0) {
  result = true;

 }
 else {

  result = false;
 }
 
 return result;

}
int Stepin(int a, int b) {
 
 int result=1;
 for (int i = 1; i <= b; i++) {
  
  result = result * a;
  //cout << "i: " << i << "  result:" << result << endl;
 }
 return result;
}
  

int main() {
 Stepin(2, 10);
 int n;
 cin >> n;
 int start;
 start = Stepin(10, n - 1);
 int end;
 end = start * 10 - 1;
 cout << start << " " << end << endl;
 for (int i = 0; i <= end; i++)
 {
  if (check(i)) {
  //if(i%5==0){

   cout << i << endl;
  }

 }



}
// n=3 від 100 до 1 000-1 
//n=4 від 1 000 до 10 000-1
//n=5 від 10 000 до 100 000-1
