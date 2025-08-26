// string library function 


#include <iostream>
#include <string>
#include <algorithm> // it is used for sorting the string 

using namespace std;

int main () {

    { // at is used to access any specific position 
    
        string name = "ABC";
        cout << name << endl;
        cout << name.at(0) << endl;
        cout << name.at(1) << endl;
        cout << name.at(2) << endl; 
    
    }

/*
    { // append is used to add two strings 
    
        string name1 = "Rohit ";
        string name2 = "sir ";
        cout << name1.append(name2) << endl;
        cout << name2.append(name1) << endl;
    
    }
*/    

/*
    { // insert is used to insert characters to any string 
    
        string name = "prati";
        cout << name << endl;
        cout << name.insert(3, "japa") ;
        
    
    }
*/
    

/*
    { // subsyr is udes to extract words from any string 
    
        string name = "telephone";
        cout << name << endl;
        cout << name.substr(4,5) << endl;
    
    }
*/    

/*
    { // sort is used to sort string is ascending order 
    
        string name = "hteaconfxk";
        cout << name << endl;
        sort(name.begin(), name.end());
        cout << name << endl;
        
    }
*/
    

/*
    { // find is used to any elements of string 
    
        string name = {"instagramcom"};
        cout << name.find("a") << endl; // it return first index 5
        cout << name.find("Aditya"); // it give wrong output
          
    }
*/    


/*
    { // eras is used to erase string elements 
    
        string name = {"Birthday"};
        cout << name << endl;
        cout << name.erase(3,2) << endl; // 3 is starting index , and 2 is no of elements to be deleted
    
    }
*/    
    

/*
    { // compare is used to compare two strings 
    
        string s1 = "pyar";
        string s2 = {"love"};
        if (s1.compare(s2) == 0)
            cout << "string is same" << endl;
        else 
            cout << "string is not same" << endl;  
            
        // using comparison operator 
        if (s1 == s2)  
            cout << "string is same" << endl;   
        else 
            cout << "string is not same" << endl;    
    
    }
*/    
    

/*
    { // empty is used to check string is empty or not
    
        string s1 = "";
        int result = s1.empty();
        cout << result << endl;
        cout << s1.empty() << endl;
        if (s1.empty()) 
            cout << "string is empty" << endl;
        else
            cout << "string is not empty" << endl;
    
    }
*/    

/*
    { // clear is used to delete the string 
    
        string s1 = "Aditya";
        cout << s1 << endl;
        s1.clear();
        cout << s1 << endl;
        
    }
*/


/*
    { // length or size 

        string name = "Aditya Kumar";
        cout << name << endl;
        int strsize;
        // strsize = name.size(); // both are right
        strsize = name.length(); // both are right
        cout << "length of string is : " << strsize << endl;

        string name1 = "Aditya";
        string name2 = "love";
        string newstring;
        newstring = name1 + name2;
        cout << newstring << endl;

    } 
*/    


    return 0;
}