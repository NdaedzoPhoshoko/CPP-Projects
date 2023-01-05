#include <iostream>

using namespace std;
void displayLargest(double x, double y, double z)
{
    if(x>=y && y>=z){
        cout<<x;}
    else if(x<=y && x>=z){
        cout<<y;}
    else if(x<=y && x<=z){
        cout<<z;}
}

int main()
{
    int a, b, c;
    cout<<"\nEnter your 3 numbers: ";
    cin>>a>>b>>c;
    cout<<"\n";
    cout<<"The largest number is: ";
    displayLargest(a,b,c);

return 0;

}
