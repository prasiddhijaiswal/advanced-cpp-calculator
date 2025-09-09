 #include <iostream>
 #include <cmath> // for sqrt() and pow()
 using namespace std;
 int main(){
    char operation;
    double num1, num2;
    bool keepRunning = true;
    cout<<"Advanced Calculator in c++\n";
    while (keepRunning){
        cout<<"\nEnter an operation(+, -, *, /, %, ^, s for sqrt, q to quit):";
        cin>> operation; 
        
        if (operation == 'q'){
            cout<<"Exiting calculator. goodbye!\n";
            keepRunning = false;
            break;
        }
        if(operation == 's'){
            cout<<"Enter a number:";
            cin>> num1;
            if(num1>=0)
              cout<<"Result:"<< sqrt(num1)<<endl;
            else
              cout<<"Error! cannot calculate sqr of a negative number."<<endl;
        }else{
            cout<<"enter two numbers:";
            cin>> num1>> num2;
            switch(operation){
             case '+':
             cout<<"Result:"<< num1 + num2 <<endl;
             break;

             case '-':
             cout<<"Result:"<< num1 - num2 <<endl;
             break;
    
             case '*':
              cout<<"Result:"<< num1 * num2 <<endl;
              break;
         
             case '/':
             if (num2 != 0)
             cout<<"Result:"<< num1 / num2 <<endl;
            else 
              cout<<"Error! division by zero"<<endl;
            break;

            case '%':
             cout<<"Result:"<< static_cast<int>(num1) % static_cast<int>(num2)<< endl;
             break;

            case '^':
             cout<<"Result:"<< pow(num1, num2)<< endl;
             break;

            default:
             cout<<"Invalid operator!"<<endl;
             break;
            }
        }
    }
    return 0;
 }