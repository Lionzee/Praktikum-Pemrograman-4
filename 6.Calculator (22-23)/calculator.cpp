#include "calculator.h"
#include <iostream>
#include <queue>

using namespace std;

int main() {
	
	
	
    Calc calculator(21,7);
    
	Cmd *command(0);
    
	AddCommand addCmd(&calculator);
    
	SubstractCommand strCmd(&calculator);
    
	command = &strCmd;
    
    cout << "Hasil : ";
	int result = command->execute();
    
	cout<<result<<endl;
}
