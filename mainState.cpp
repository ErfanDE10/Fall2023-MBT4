#include <iostream>
using namespace std ;
enum class PatientState {
    Healthy,
    Fever,
    Cough,
    Weakness,
    choice ,
    Recovered 
};

class PatientStateMachine {
public:
     
    PatientStateMachine() : currentState(PatientState::Healthy) {}

   
               
    void transitionTo(PatientState newState , choice) {
        switch (newState) {
            case PatientState::Healthy:
                  cout << "The patient changed to a healthy state. " << endl;
                  break;
            case PatientState::Fever:
                  cout << "The patient became febrile." << endl;
                  break;
            case PatientState::Cough:
                  cout << "The patient changed to a coughing state." << endl;
                  break;
            case PatientState::Weakness:
                  cout << "The patient changed to a weak state." << endl;
                  break;
            case PatientState::Recovered:
                  cout << "The patient changed to an improved condition." << endl;
                  break;
        }
        currentState = newState;
    }

    void performAction() {
        switch (currentState) {
            case PatientState::Healthy:
                   cout << "The patient is healthy and does not need any operation." << endl;
                   break;
            case PatientState::Fever:
                   cout << "The patient has a fever. Treat fever." << endl;
                   break;
            case PatientState::Cough:
                   cout << "The patient coughs. Treat cough." << endl;
                   break;
            case PatientState::Weakness:
                   cout << "The patient is weak. Treat weakness." << endl;
                   break;
            case PatientState::Recovered:
                   cout << "The patient has recovered and does not need any operation." << endl;
                   break;
        }
    }

private:
    PatientState currentState;
};

int main() {

 
     PatientStateMachine patient;
     patient.performAction(); 
     int choice ; 
            cout << "please enter your statuse < Healthy : 0 , Fever : 1 , Cough = 2 , Weakness = 3 , Recovered = 4 " << endl ;
            cin >> choice ; 
    
     while ( choice < 5 ) {
    patient.transitionTo(choice);  
    patient.performAction();  
           }

    return 0;
}
