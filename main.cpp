//This file has all the basic notes for what is required when working on a C++ project

#include <iostream>
#include <cmath> //similar to module in python

using namespace std; //the first few lines are configuration options for C++

/* multi-line comment
extra lines

*/

// single line comment

/*return type //
//void means doesn't return anything
// return type is basically the data type-- can be double string char int
//very important note, the function you want to execute must be above the main. */

void sayHi(string name, int age); //this is still valid even if function is defined further below main function
//you can call it in the main function and it will work


int main() //function (main is the one that will be executed)
{
    cout<<"Hello World!"<<endl;
    return 0;
}



void sayHi(string name, int age)
{
    cout<<"Hello "<<name<<". You are "<<age<<" years old."<<endl;

}

//all this code below won't be recognised by the compiler even if you call the function in the main function.
//but you can do like the sayHi function and call it.
void variables()
{   //Variables
    string characterName = "George";
    int characterAge; //semi-colon means done with the line of code
    characterAge = 70;

    cout << "There was once a man named "<<characterName << endl; //console out and end line
    cout << "He was "<< characterAge <<" Years old" << endl;

    characterName = "Mike";

    cout << "He liked the name "<<characterName << endl;
    cout << "But did not like being "<<characterAge << endl;




}

void dataTypes()
{
    // Different data types:
    char grade = 'A'; //1 single character. note the single quotes
    string phrase = "Hello"; //a string. Note the double quotes
    int age = 22;
    float price = 20.50;
    double gpa = 4.5; //use double. Preferred over the float
    //float vs double difference is how many decimal points they can store. Double can store more. If want to be more specific then choose double
    bool isMale = true ; // other boolean value is false

    cout <<grade<<endl; //to print the above variables regardless of the data type

    cout<<"Hello";
    cout<<"Sai Ganesh"<<endl; //This line will be same printed as Hello. since there is no endl in the previous line

    cout<<"Hello\n"; //\n notation is for a new line
    cout<<"Sai Ganesh"<<endl;



}

void strings()
{
    //Working with strings:

    string phrase = "Hello Sai Ganesh";
    cout<<phrase.length()<<endl; // returns length of the string
    cout<<phrase[0]<<endl; //to access first character
    //to change value of single character in string
    phrase[0] = 'T';
    cout<<phrase<<endl;

    cout<<phrase.find("Sai", 0)<<endl; //what you want to find for and the index you want to start finding from
    //the output above is 6 as the S is at index 6

    cout<<phrase.substr(8,3)<<endl; //starts at index 8 and prints 3 characters

    string phrasesub;

    phrasesub = phrase.substr(10, 6);
    cout<<phrasesub<<endl;

}

void numbers()
{
 //Working with numbers
    cout<<40<<endl;
    cout<<40.345<<endl;
    cout<<5 + 7<<endl; //operations: * / + -  Follows BODMAS rules
    cout<< 10 % 3<<endl;// remainder. a.k.a. modulus operator

    int wnum = 5;
    double dnum = 5.5;

    wnum ++; //adds 1
    wnum --; // minus 1

    wnum += 3; // try different operations with this

    cout << 10/3<<endl; //will get an integer number back
    //if any one of the above numbers was a decimal number, then the output will be decimal

    //after cmath package is included
    //all the below can use decimal numbers as well
    cout<<pow(2,5)<<endl;
    cout<<sqrt(36)<<endl;
    cout<<round(4.3)<<endl;
    cout<<ceil(4.1)<<endl; //rounds the number up
    cout<<floor(4.6)<<endl;//rounds the number down
    cout<<fmax(3,10)<<endl; //returns bigger of the 2 numbers
    cout<<fmin(3,10)<<endl;//returns the smaller number
    //note that for fmax and fmin can only include 2 numbers

}

void getInput()
{
    int age;

    //cout << "Enter your age: ";
    //cin >> age; //this can be used for char, double but not for string
    //cout << "You are "<<age<<" years old."<<endl;

    //note that i was not able to input below when the above code was not comments. Why was that.
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Your name is " <<name<<"."<<endl;

}

void calculator()
{
    //basic calculator
    int num1, num2;
    cout<<"Enter first number: ";
    cin >> num1;

    cout<<"Enter second number: ";
    cin >>  num2;

    cout<< num1 + num2;
}


void madLibs()
{
    string color, pluralNoun, celebrity;

    cout<<"enter a color: ";
    getline(cin, color);

    cout<<"enter a plural noun: ";
    getline(cin, pluralNoun);

    cout<<"enter a celebrity: ";
    getline(cin, celebrity);


    cout<<"Roses are "<<color<<endl;
    cout<<pluralNoun<< " are blue"<<endl;
    cout<<"I love "<<celebrity <<endl;
}


void arrays()
{
    //Arrays
    int luckyNums[] = {4,8, 15,16,23,42};
    cout<<luckyNums[0]<<endl;//same index as string
    //change element in array:
    luckyNums[4] = 19;

    int testList[20] = {5 , 6, 10, 20, 30, 231}; //list has 20 elements but we can
    testList[10] = 23; //can even give an element at index 10 even if the above list

    int anotherList[10];
    anotherList[0] = 20;
}

double cube(double num){
    return pow(num, 3); //possible since include <cmath>
    //if not:
    //double result = num * num * num;
    //after the return keyword , whatever you type doesn't take into effect, return is the last keyword
}


void boolean_comparison_operators()
{
    //operators:
    // and:  &&
    // or:  ||
    // not: !

    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall){
        cout<<"You are a tall male."<<endl;
    } else if(isMale && !isTall){
        cout<< "You are a short male."<<endl;
    } else if(!isMale && isTall) {
        cout<< "You are tall but not male."<<endl;
    } else {
        cout << "You are not male and not tall."<<endl;
    }

}


int getMax(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2>=num1 && num2>=num3){
        result = num2;
    } else {
        result = num3;
    }


    return result;
    //other comparison operators same as python:
    // <= >= == !=
}

int improved_calculator(){

    int num1, num2, result;
    char op;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter operator: ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;

    if(op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else if (op == '/'){
        result = num1 / num2;
    } else {
        cout<<"Invalid Operator"<<endl;
    }

    cout<<result<<endl;
}


//Switch Statement
string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number.";
    }


    return dayName;
}


void while_loop(){
    int index = 1;
    while(index <= 5){
        cout<<index<<endl;
        index++; // remember this line to avoid while loop
    }

    int i = 6;
    do{
        cout<<i<<endl; //prints 6
        i++; //becomes 7 but doesn't print this since do-while loop ends

    }while(i<= 5); //executes the code first the changes the condition
}

string guess_game(){
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;


    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
                cout<<"Enter guess: ";
                cin>> guess;
                guessCount++;
            }else {
                outOfGuesses = true;
            }
    }
    //do{
      //  cout<<"Enter guess: ";
        //cin>>guess;
    //}while(secretNum != guess)

    if (outOfGuesses){

        cout<<"You Lose!"<<endl;
    }else{
        cout<<"You Win!"<<endl;
    }


}


void for_loop(){
    //for loop
    for(int i =1;i<=5;i++){ //note no semicolon after ++
        cout<<i<<endl;
    }


    int nums[] = {1,3,5,7,9};
    for(int j = 0;j< 5;j++){ //note no semicolon after ++
        cout<<nums[j]<<endl;
    }


}



int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0;i<powNum;i++){

        result = result * baseNum; // the loop will be baseNum, baseNum squared, baseNum cubed.. and so on until reach baseNum to power of powNum
    }
    return result;
}


int twoD_array(){
    //2D array where every element inside the array is another array
    // 2DArray[number of arrays within array][number of elements within each array]
    //important to specify those numbers
    int numberGrid[3][2] = {
                            {1,2},
                            {3,4},
                            {5,6}
                        };

    cout<< numberGrid[0][1];
    //the above is valid for n-dimensional array not only 2

}

void nested_loops_and_multi_dimensional_arrays(){
     //2D array where every element inside the array is another array
    // 2DArray[number of arrays within array][number of elements within each array]
    //important to specify those numbers
    int numberGrid[3][2] = {
                            {1,2},
                            {3,4},
                            {5,6}
                        };

    //cout<< numberGrid[0][1];
    //the above is valid for n-dimensional array not only 2

    for(int i= 0;i<3;i++){
        for(int j = 0;j<2;j++){
            cout<<numberGrid[i][j];
        }
        cout<<endl; //enters new line after each nested array
    }
}


void pointers(){
    //pointers are memory addresses
    int age = 19;
    int *pAge = &age; //for pointer variables start with asteriks(*)

    double gpa = 4.50;
    double *pGpa = &gpa;

    string name = "Ganesh";
    string *pName = &name;

    cout<< pAge<<endl;
    cout<<*pAge<<endl; //dereferences the pointer

    //dereferencing and referencing back to pointers:
    cout<<&gpa<<endl;
    cout<<*&gpa<<endl;
    cout<<&*&gpa<<endl;

    /*
    in everyone's computer there is memory space, RAM (random access memory). active memory that
    computer is using to run programs.

    it's storing all these variables above inside its memory. 19 is stored inside variable age which is stored inside a physical memory address (pointer)

    Note the data types in above code is the same as the variable
    */

    //  cout<< &age; //memory address where the age is stored or the 19. will give a hexadecimal number which is the physical memory address

}


//_________________________________________________________________________________________________________________________________________________
/* Object Oriented Programming:

codes used */
class Book { //class name usually starts in capital letters

    public:
        string title;
        string author;
        int pages;
        //constructor is called whenever we create an object of the class in main
        //this is a constructor:
        Book(string aTitle, string aAuthor, int aPages ){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
        //multiple constructors .. multiple ways you can create the object in the main function
        Book(){
        title = "no title";
        author = "no author";
        pages = 0;
        }
};


int oop_main() //changed to test_main just for notes purpose. Remember to always use main for actual code.
{
    Book book1("Harry Potter", "J.K. Rowling", 500); // this can still be modified

    Book book2("Lord of the Rings", "Tolkein", 700);

    cout<<book1.title<<endl;
    book1.title = "Order of Phoenix";
    cout<<book1.title<<endl;


    Book book3;
    cout<<book3.title;

    return 0;
}




//instance functions or object functions:
class Student {

    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa ){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        //object functions a.k.a instance function
        bool hasHonors(){ //take note don't need parameters here
            if(gpa>=3.5){
                return true;
            }
            return false;
            }
        };


int objectfun_main() //main if used for code above. For notes purpose changed name of function.
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);


    //calling object functions
    cout<<student2.hasHonors()<<endl; //0 is false and 1 is true.
    cout<<student1.hasHonors()<<endl;
    return 0;
}







//setters and getters:

class Movie {

    private:
        //set rating as private to avoid other non-rating stuff included in the ratings
        string rating; //main function won't be able to print the rating below in main function since in private
        //check in main function difference between putting in private and putting in public

    public: //public means any other code outside of the class can access it
        string title;
        string director;

        //constructor:
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating); //constructor still has access to rating as the constructor is still in the same class
        }
        setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;

            }else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }

    };


int setter_main() //setter_main used for notes purpose. Use main if executing this code.
{
    Movie avengers("The Avengers", "Joss Whedon", "Dog");
    //cout<< avengers.rating; //error as rating is in private
    cout<<avengers.getRating()<<endl;//outputs NR as dog is invalid

    //Notice that you are not able to change it now as  below once rating in private you can't access rating:

    //avengers.rating = "Dog";
    //cout<<avengers.rating<<endl; // outputs dog when rating in public
    return 0;
}





//inheritance of class:

class Chef {
    public:
        void makeChicken(){
            cout<<"The chef makes chicken"<<endl;
        }
        void makeSalad(){
            cout<<"The chef makes salad"<<endl;
        }

        void makeSpecialDish(){
            cout<<"The chef makes bbq ribs"<<endl;
        }
    };

//ItalianChef has inherited all the Chef's functions
//Chef is super class and ItalianChef is the subclass
class ItalianChef : public  Chef{
    public:

        void makePasta(){
            cout<<"The chef makes pasta."<<endl;
        }
        //overrides function in inherited class;
        void makeSpecialDish(){
            cout<<"The chef makes pizza"<<endl;
        }
};

int inheritance_main() //function (main is the one that will be executed)
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();
    return 0;
}

