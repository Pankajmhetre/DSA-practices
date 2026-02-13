#include<iostream>
using namespace std;
// q1.Basics students marks less 35 array ques.
int main(){
   int size;
   cout<<"enter no. of students:";
   cin>>size;
   int marks[size];
   cout<<"students marks:";
   for(int i=0;i<=size-1;i++){
      cin>>marks[i];
   }
   for(int i=0;i<=size-1;i++){
      if( marks[i]<35 ){
         cout<<i<<" ";
      }
   }
   return 0;
}
// q2.Sum of elements of array 
// int main(){
//    int x;
//    cout<<"enter size of array:";
//    cin>>x;
//    int arr[x];
//    for(int i=1;i<=x;i++){
//       cin>>arr[i];
//    }
//    int sum=0;
//    for(int i=1;i<=x;i++){
//       sum=sum+arr[i];
//    }
//    cout<<"sum of array is "<<sum;
//    return 0;
// }
//q3.Product of array elements
//  int main(){
//    int x;
//    cout<<"enter size of array:";
//    cin>>x;
//    int arr[x];
//    for(int i=1;i<=x;i++){
//       cin>>arr[i];
//    }
//    int Product=1;
//    for(int i=1;i<=x;i++){
//       Product=Product*arr[i];
//    }
//    cout<<"Product of array is "<<sum;
//    return 0;
// }
//linear search
// int main(){
//    int n;
//    cout<<"enter size of array:";
//    cin>>n;
//    int arr[n];
//    cout<<"enter array elements:";
//    for(int i=1;i<=n;i++){
//       cin>>arr[i];
//    }
//    int x;
//    cout<<"enter element you want search:";
//    cin>>x;
//    //when in a array has multiple same value in output is repeated print present...present...to avoide use checkmark using boolean value
//    // for(int i=1;i<=n;i++){
//    //    if (arr[i]==x) cout<<"present";
//    // }
//    //use check mark for this type of question to avoide printing repetations etc...
//    bool flag=false;
//    for(int i=1;i<=n;i++){
//       if(arr[i]==x) flag=true;
//    }
//    if (flag==true) cout<<"element is present !!";
//    else cout<<"element is not present !!";
//    return 0;
// }