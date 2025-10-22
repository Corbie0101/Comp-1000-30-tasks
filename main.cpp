#include <iostream>
#include <cmath>
using namespace std;

int studentID = 25121868;//declaring the global variable for student ID can be accessed by all functions

 void task1() {

     int num1 = 6;
     int num2 = 8;
     cout << "Number 1: " <<  num1 << endl << "Number 2: " << num2 << endl;


 }

 void task2() {

     int studentIDFirstNum = 2;
     int multNumber1 = 10; //set this number as a float to prevent errors if user puts in a number below 0

     float multiplicationAnswer;


     multiplicationAnswer = multNumber1 * studentIDFirstNum;
     cout << "The answer is : " << multiplicationAnswer << endl;

 }

void task3() {

     int idMod = studentID % 20;
     if (idMod < 20) {

        for (int i = 1; i <= 10; i++) {
            cout << i << " \n";
        }

     }


 }
void task4() {
    if (studentID % 2 == 0) {
        cout << "Your number is even " << endl;


    }
    else if (studentID % 2 == 1) {
        cout << "Your number is odd" << endl;
    }


 }
void task5() {
     int daysOfWeekDisplayed;
     daysOfWeekDisplayed = studentID % 7;
     switch (daysOfWeekDisplayed) {
         case 1: {
             cout << "Monday";
             break;
         }
         case 2: {
             cout << "Tuesday" << endl;
             break;
         }
         case 3: {
             cout << "Wednesday" << endl;
             break;
         }
         case 4: {
             cout << "Thursday";
             break;
         }
         case 5: {
             cout << "Friday";
             break;
         }
         case 6: {
             cout << "Saturday";
             break;
         }
        case 7: {
             cout << "Sunday";
         }
     }






 }
void task6() {
    int task6Mod = studentID % 50;
     int MyNumbers[5] = {task6Mod, 1 , 5 , 10 , 20};
     cout << MyNumbers[3] << endl;





 }






void euclideanDistanceCalculator() {
     double x1 = 1.0, y1 = 2.0;
     double x2 = 6.0, y2 = 8.0;

     double euclideanDistance = std::hypot(x1 - y1 , x2 - y2);
     cout << "EuclideanDistance: " << euclideanDistance << endl;





 }


void task7() {
    euclideanDistanceCalculator();
 }

void timesCalled() {
     static int count = 0;
     count++;
     cout << "The function has been called " << count << "  times." << endl;


 }




void task8() {
    static int count = 0;
     int timesToCall = (studentID % 5 )+1;

    for (int i = 0; i <= timesToCall; i++) {
        timesCalled();
    }


 }


double averagePositive() {
     double sum = 0; //changed sum variable type to double incase decimal numbers are used as an input
     int count = 0;
     double num = 0;
     do {
         cin >> num;

         if (num == -1) {
            break;//stops if the input is -1
         }
         if (num > 0) { //checks that the number is valid and adds to the count and continues to loop
             sum += num;
             count++;
         }


     } while (true);
     if (count == 0) {
        return 0.0;
     }
     // Potential issue: division correctness and edge cases
     return sum / count;
 }


int main() {

     task1();
     task2();
     task3();
     task4();
     task5();
     task6();
     task7();
     task8();
     averagePositive();
    return 0;
}