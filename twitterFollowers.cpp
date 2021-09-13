#include <iostream> 
using namespace std; 
int main() 
{  
// Store the starting number of followers  
double startingFollowers = 12000; 

// Calculate and store the amount of new followers this week  
double newFollowers = startingFollowers * 0.35; 

// Calculate and store calculates the total amount of followers (use both variables you created above in your calculation)  
double totalFollowers = startingFollowers + newFollowers; 

// Display the result (as shown below) using cout commands. 
cout << "Marcelo started the week with " << startingFollowers << " followers." << endl;  
cout << "He gained " << newFollowers << " followers this week." << endl;  
cout << "He ended the week with " << totalFollowers << " total followers." << endl;
return 0; 
}