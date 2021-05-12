#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//PROGRAMMER: HARVY JONES PONTILLAS DICT 1-2
int main()
{   //VARIABLES DECLARATION
    int empNum, TotalNum_Transaction = 0;
    char another;
    string empName;
    float no_hrs_Worked = 0.00, ratePer_hour = 0.00, salary = 0.00, GTotalSalary = 0.00;

    //LOOP OPERATION
    do{
        //COUNTER TO DETERMINE THE TOTAL NUMBER OF TRANSACTIONS
        TotalNum_Transaction += 1;

        //HEADING
        cout << "\n\t\t\t   DIGITPROGRAMMED IT SOLUTINS\n\n";
        cout << "\t\t  #4 REAL ST. CUBAO, QUEZON CITY, PHILIPPINES\n\n";
        cout << "\t\t\t\t PAYROLL REPORT\n\n\n";
        cout << "\t***************************************************************\n\n";

        //INPUT ITEMS
        cout << "\tEMPLOYEE NUMBER\t\t\t:\t\t";
        cin >>empNum;
        cin.ignore(100, '\n');
        cout << "\n\tEMPLOYEE NAME\t\t\t:\t\t";
        getline(cin,empName);
        cout << "\n\tNO. OF HOURS WORKED\t\t:\t\t";
        cin >>no_hrs_Worked;
        cout << "\n\tRATE PER HOUR\t\t\t:\t\tPHP. ";
        cin >>ratePer_hour;

        //SALARY COMPUTATION AND DISPLAY OUTPUT
        salary = no_hrs_Worked*ratePer_hour;
        cout <<fixed<<setprecision(2);
        cout << "\n\tYOUR SALARY IS\t\t\t:\t\tPHP. " <<salary;

        //GRAND TOTAL SALARY COMPUTATION
        GTotalSalary += salary;

        //"PROCESS ANOTHER?" OPERATION
        cout << "\n\n\n\n\tPROCESS ANOTHER? (Y/N)\t\t:\t\t";
        cin >> another;
        cout <<endl;
    }while(another=='Y'||another=='y');

    cout << "*******************************************************************************\n";
    //DISPLAYING TOTAL NUMBER OF TRANSACTION
    cout << "*\t\t\t\t\t\t\t\t\t      *";
    cout << "\n*\t  TOTAL NO. OF TRANSACTION\t   :\t\t";
    cout << TotalNum_Transaction << "\t\t      *"<<endl;

    //DISPLAYING GRAND TOTAL SALARY
    cout << fixed<<setprecision(2);
    cout << "*\t\t\t\t\t\t\t\t\t      *";
    cout <<"\n*\t  GRAND TOTAL SALARY IS\t\t   :\t\tPHP. ";
    cout <<GTotalSalary <<"\t      *"<<endl;
    cout << "*\t\t\t\t\t\t\t\t\t      *";
    cout << "*******************************************************************************\n";
    return 0;
}
