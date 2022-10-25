#include <iostream>



class Solution{
    public:
    // Function to find the num of n natural numbers

    int SumOfNNaturalNumbers(int n)
    {

	int sum =0;
	    for(int i=0;i<=n;i++)
	    {
		sum+=i;

	    }
    		
	    return sum;
            
   }
 

};



int main(int argc, char *argv[])
{

        int n;
	std::cout<<"enter no to print it's sum of natural number  :  ";
	std::cin>>n;	
        Solution ob;

        //calling equilibriumPoint() function
	std::cout << ob.SumOfNNaturalNumbers(n) << std::endl;
    
    return 0;
}
