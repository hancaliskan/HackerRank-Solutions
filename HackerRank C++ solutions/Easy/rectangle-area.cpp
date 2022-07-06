#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle{
    protected:
        int width, height;
     
    public:
        int display(){
            
            return width * height;
        }
        void read_input(){
            cin >> width >> height;
            cout << width << ' ' << height << '\n';
        } 
 };
 
 class RectangleArea: public Rectangle{
    public:
        int display(){
            cout << width * height;
            
            return width * height;
        }
 };


