
// comment one of them the run 


// work like mod which convert negative to postive 



#include <iostream>
#include <cstdlib>  // For abs()
using namespace std;

int main() {
    int a = -5;
    int result = abs(a);  // Converts -5 to 5
    cout << "The absolute value of " << a << " is: " << result << endl;

    return 0;
}


#include <iostream>
#include <cmath>  // For fabs()
using namespace std;

int main() {
    double a = -5.7;
    double result = fabs(a);  // Converts -5.7 to 5.7
    cout << "The absolute value of " << a << " is: " << result << endl;

    return 0;
}
