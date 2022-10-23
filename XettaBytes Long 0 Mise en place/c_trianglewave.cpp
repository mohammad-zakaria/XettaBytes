/* 
Solved By: Mohammad Zakaria
Email: zakaria.eee.iiuc@gmail.com
Linkedin: https://www.linkedin.com/in/thisismohammad/


In this problem you are to generate a triangular wave form according to a specified pair of Amplitude
and Frequency.

Input
The input begins with a single positive integer on a line by itself indicating the number of the cases
following, each of them as described below. This line is followed by a blank line, and there is also a
blank line between two consecutive inputs.
Each input set will contain two positive integers, each on a separate line. The first integer is the
Amplitude; the second integer is the Frequency.


Output
For each test case, the output must follow the description below. The outputs of two consecutive cases
will be separated by a blank line.
For the output of your program, you will be printing wave forms each separated by a blank line.
The total number of wave forms equals the Frequency, and the horizontal “height” of each wave equals
the Amplitude. The Amplitude will never be greater than nine.
The waveform itself should be filled with integers on each line which indicate the “height” of that
line.
NOTE: There is a blank line after each separate waveform, excluding the last one.
Sample Input
1
3
2
Sample Output
1
22
333
22
1
1
22
333
22
1 

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int amplitude,frequency;cin>>amplitude>>frequency;

        while(frequency--)
        {
            for(int j = 1;j<= amplitude;j++)
            {
                for(int k = 0;k<j;k++)
                {
                    cout<<j;
                }
                cout<<endl;
            }
            for(int j = amplitude-1;j>=1;j--)
            {
                for(int k =0;k<j;k++)
                {
                    cout<<j;
                }
                cout<<endl;
            }
            if(frequency > 0)cout<<endl;
                

        }
        if(t>0 ) cout<<endl;

    }

    return 0;
}

