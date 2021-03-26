/*******************************************
*.  Copyright (c) <2021> 
*.  Author: Chloe Huang
*.  Created: Mar 25, 2021
*.  Estimate time: 2 Hours
*.  All rights reserved.
*   Description: Practice Variables, Assignments, Branches, Pass by references and Functions
******************************************/

#include <iostream>
#include <string>
using namespace std;

/*****This function determines whether user input height and width are equal like a square.*****/
bool IsItSquare (double& height, double& width){
    
    if (height == width){
        cout << "A rectangle with height " << height << " and width " << width << " is a square." << endl;
        return true;
    }else{
        
        cout << "A rectangle with height " << height << " and width " << width << " is not a square."<< endl;
        return false;
    }    
}

/*****This function makes unequal height and width even.*****/
void MakeSquare(double& height, double& width){
    height = (height + width)/2;
    width = height;   
}

/*****This function computes the perimeter.*****/
double CalcPerimeter(double& height, double& width){
    double totalPerimeter;
    
    totalPerimeter = 2 *(height+width);
    
    return totalPerimeter;
}

/*****This function prints out the result.*****/
void PrintPerimeter(double height, double width){
    
    cout << "A rectangle with height " << height << " and width " << width << " has a perimeter of " << CalcPerimeter(height, width) << "." <<endl;
}

int main()
{
    //declare variables 
    double h = 0.0;
    double w = 0.0;
    double oh = 0.0;
    double ow = 0.0;
    double total = 0.0;
    
    //Ask user input
    cout << "Enter Height: " << endl;
    cin >> h;
    cout << "Enter Width: " << endl;
    cin >> w;
    
    //call functions 
    bool IsSquare = IsItSquare(h,w);
    if (IsSquare != true){
        oh = h;
        ow = w;
        MakeSquare(h,w);
        PrintPerimeter(oh,ow);
    }else{
        
        PrintPerimeter(h,w);
    }  
}
