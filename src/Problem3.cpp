/*

ProblemCode : SOLOTRIPS
Difficulty : Easy
Marks : 15

It is Hack planning his Trip again , but this time he is planning it Solo as had lots of difficulties last time planning it with Code .
Code knows that Hack is a miser and wouldnt like to spend much on a Trip .So he challenged Hack that His Solo trip would fail and he wouldnt even spend some X Rupees
on the Trip.

There are N islands on a line ,Assume it is A,B,C,D,E .... and every island is connected by Bridges .Hack can start his trip on any island , but now can only go to the
islands on the right side of his starting island but not left and he can stop his trip at any island .

Some of the same trips for Islands [A,B,C,D,E] can be ABC , CDE , BCD , ABCDE , CD   etc .
To go from One Island to another , the only way is to cross a Bridge ,and he has to pay certain cost at each bridge
Let us assume the Bridge costs for above islands are [4,3,2,5] .Bridges count will always be 1 less than number of islands .

That means to cross from A to B hack has to pay 4Rs. To Cross B to C ,he has to pay 3Rs. 
A sample BCD Trip costs [BC Bride Cost + CD Bridge Cost] ==> 3+2 ==> 5.
A sample ABCDE Trip costs ==> 4+3+2+5 => 14.
ABCD => 9 ; CD => 2 .

Given an Array of Bridge Costs you need to find ,In how many ways Hack can plan his Trip such that the total cost exceeds the minCost ammount challenged by Code .
Two Trips are different if either of their starting or ending Islands are different.

Example :
Bridge Costs are [10,2,5,7] for Islands A,B,C,D,E .
Min Cost 13 .

The Trips whose cost can exceed 13 are .
ABC => 10+2+5 => 17 .
BCD => 2+5+7 => 14
ABCD => 24.

Output :3 .

Note :
There are some bridges part of "Please visit our Island Campaign" which Gift you money ,instead of taking money from you , Those gifts will be represented by '-' sign.
ie Bridge costs can be [10,2,-5,7] .Crossing CD Bridge will get you 5RS Profit , so that means -5 Total Cost . [Think :D ].


Constraints:
-1000 <= len of bridge costs <= 1000
-1e5  <= bridgeCosts[i] <= 1e5
-1e9  <= minCost <= 1e9

1e9 means 1* 10^9 .
*/

#include<malloc.h>
#include<stdlib.h>

int nTripCount(int const *bridgeCosts, int len, int minCost)
{
	return 0;
}