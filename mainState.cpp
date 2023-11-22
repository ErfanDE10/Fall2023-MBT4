#include <iostream>

using namespace std ;

enum PatientState {
    Healthy,
    Fever,
    Cough,
    Weakness,
    Recovered 
};

class PatientStateMachine {

public:
    
    PatientStateMachine() : currentState(Healthy) {}


    void transitionTo(int newState ) {
        switch (newState) {
            case Healthy:
                  cout << "The patient changed to a healthy state. " << endl;
                  break;
            case Fever:
                  cout << "The patient became febrile." << endl;
                  break;
            case Cough:
                  cout << "The patient changed to a coughing state." << endl;
                  break;
            case Weakness:
                  cout << "The patient changed to a weak state." << endl;
                  break;
            case Recovered:
                  cout << "The patient changed to an improved condition." << endl;
                  break;
        }
          currentState =  newState ;
    }

    void performAction() {
        switch (currentState) {
            case Healthy:
                   cout << "The patient is healthy and does not need any operation." << endl;
                   break;
            case Fever:
                   cout << "The patient has a fever. Treat fever." << endl;
                   break;
            case Cough:
                   cout << "The patient coughs. Treat cough." << endl;
                   break;
            case Weakness:
                   cout << "The patient is weak. Treat weakness." << endl;
                   break;
            case Recovered:
                   cout << "The patient has recovered and does not need any operation." << endl;
                   break;
        }
    }

private:
    int currentState;
};

int main() {
    int  choice ;
    cout << "please enter your statuse < Healthy : 0 , Fever : 1 , Cough = 2 , Weakness = 3 , Recovered = 4 " << endl ;
    PatientStateMachine patient;
   


    while ( choice < 5 ) {
        cin >> choice ; 
        patient.transitionTo(choice);  
        patient.performAction();
    }


return 0;
}
