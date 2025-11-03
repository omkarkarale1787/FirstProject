#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number for corresponding shape (Circle=1, Rectangle=2, Triangle=3) ";
    cin>>x;
    if (x==1){
        int radius;
        cout<<"Enter the radius: ";
        cin>>radius;
        double area = 3.14*radius*radius;
        double perimeter = 2*3.14*radius;
        cout<<"The area of the circle is "<<area<<endl;
        cout<<"The Perimeter of the circle is "<<perimeter;
    }
    else if (x==2){
        int l,b;
        cout<<"Enter the length of the Rectangle: ";
        cin>>l;
        cout<<"Enter the width of the Rectangle: ";
        cin>>b;
        double area = l*b;
        double perimeter = 2*(l+b);
        cout<<"The area of the circle is "<<area<<endl;
        cout<<"The Perimeter of the circle is "<<perimeter;
    }
    else if (x==3){
        int t;
        cout<<"Do you have all the sides of traingle - Press 1"<<"Do you have height and base of the triangle - Press 2";
        cin>>t;
        if (t==1){
            int s1, s2 ,s3;
            cout<<"Enter the 1st side";
            cin>>s1;
            cout<<"Enter the 2nd side";
            cin>>s2;
            cout<<"Enter the 3rd side";
            cin>>s3;
            double perimeter = s1+s2+s3;
            // double area = sqrt(s(s-a)*(s-b)*(s-c))));
            cout<<"Perimeter of the given triangle is: "<<perimeter;
        }
        else if (t==2){
            int h,b;
            cout<<"Enter the height of the Traingle: ";
            cin>>h;
            cout<<"Enter the base of the Traingle: ";
            cin>>b;
            double area = 0.5*h*b;
            //double side1 = sqrt(((b*0.5)*(b*0.5)+(h*h)));
            double side1 = (((b*0.5)*(b*0.5)+(h*h)));
            double side2 = side1; // Assuming Isoscales triangle
            double perimeter = b+side1+side2;
            cout<<"The area of the circle is "<<area<<endl;
            cout<<"The Perimeter of the circle is "<<perimeter;
        }
        else cout<<"Please enter the correct number";
    }
    else cout<<"Please enter the sahpe from given shape only.";
   return 0;
}