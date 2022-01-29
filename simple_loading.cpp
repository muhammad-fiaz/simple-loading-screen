#include <iostream> //library files
#include <windows.h> 
using namespace std; 
void loadingBar()// Function to creating loading bar 
{ 
/*

LIST OF COLOURS TO SELECT:
     0 - black background, 
     A - Green Foreground 
     1 - blue
     2 - green
    3 -cyan
    4 - red
     5 - megenta 
    6- brown
    7 - light gray
    8 - dark gray
    9 - light blue
    10 - light green
    11 - light cyan
     12 - light red
     13 - light magenta
     14 - yellow
     15 - white
     A - bright green 
     B - bright cyan
     C - Bright Red
     D - bright magenta
     E - bright yellow
     F - white
     */
    system("color 0A"); 
  
    // Initialize char for printing 
    // loading bar 
    char a = 177, b = 219; 
  
    printf("\n\n\n\n"); 
    printf("\n\n\n\n\n\n\n\t\t\t\t\t Loading...\n\n"); 
    printf("\t\t\t\t\t"); 
    
    // Print initial loading bar 
    for (int i = 0; i < 26; i++) 
        printf("%c", a); 
    
    // Set the cursor again starting 
    // point of loading bar 
    printf("\r"); 
    printf("\t\t\t\t\t"); 
  
    // Print loading bar progress 
    for (int i = 0; i < 26; i++) { 
        printf("%c", b); 
  
        // Sleep for 1 second 
        Sleep(1000); 
    } 
} 
int main()//main 
{ 
    // Function Call 
    loadingBar(); 
    return 0; 
}
