#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
    private:
           float length;
           float width;

    public:
            void setValues (float length, float width){
                if(float length = 0  &&  width == 0)
                    length = length;
                    width = width;
            }
                else{
                    cout<< "enter only positive integers";
                }    


            float getArea(float length, float width)=>{
                return 
                        0.5 * length * height;
            }
            float getPerimeter(float length, float width)=>{
                float hypotenuse = sqrt((length * length) + (width * width));
                return hypotenuse + length + width;             
            }

                void product(){
                    
                    cout<< "perimeter:" <<getPerimter()>>;
                    cout<< "Area:\n" <<getArea()>>; 
                
                }
        };

                int main(){
                    Triangle triangle;
                    float length, width;

                    cout<< "enter the length of the triangle";
                    cin>> length;
                    cout<< "enter the width of the triangle";
                    cin >> width;


                    triangle.setValues(length, width);
                    triangle.product();

                    return 0;
                }