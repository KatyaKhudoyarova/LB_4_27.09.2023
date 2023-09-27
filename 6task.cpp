#include <iostream>


using namespace std;

int main() {
    bool answer;
    int value;
    cout << "Enter a value: ";
    cin >> value;

    answer = (value >= 0 && value < 10) || ((value * 2) < 20) && ((value - 2) > -2) ||
             ((value - 1) > 1) && ((value / 2) < 10) ||
             (value == 111);

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}






  /* if(value>=0&&value<10) {
       cout << "That`s TRUE" <<
            endl;


   }

else if((value*2 )<20)
cout<< "That`s TRUE"<<endl;
else if((value-2)>-2 )
cout<< "That`s TRUE"<<endl;
else if((value-1)>1 )
cout<< "That`s TRUE"<<endl;
else if((value/2)<10 )
cout<< "That`s TRUE"<<endl;
else if(value==111)
cout<< "That`s TRUE"<<endl;

else{
cout<< "That`s not TRUE"<<endl;
}
}*/












