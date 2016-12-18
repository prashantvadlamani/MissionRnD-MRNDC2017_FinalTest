/*

ProblemCode : TicTacToe
Marks : 20.
Difficulty : Medium .

Vaibhav is the instructor for this year's Machine Learning course at Mission RnD.
He is trying to convey to the students that any behaviour can be modelled as mathematical
function.

If you've taken a Machine Learning class, you'd know that
Supervised learning is when you give some pre-existing examples of the behaviour and tell
the model to learn the mathematical function behind it.
For example, you'd tell the model that  for input 1 the ouput is 2,
for input 2 the ouput is 3,
for input 9 the output is 10.
The model would then figure out that the above behaviour is the
mathematical function h(x) = x+1.
After demonstrating the above example, he decides to take it a bit further and
do the same to teach a model to tell if the state in a TicTacToe game is won or
lost or if no one won.
For example, if the state is 
X | O | O
X | O |
X |   |   , 
then the output would be that 'X won'.

As you might have guessed, Vaibhav needs more examples inorder to teach the
model the correct math function. Otherwise, the model might end up learning
some other incorrect math function.
For this, he seeks your help. He collected a list of moves made by each player
during some games and asks you to label them if player 1 won or lost or if no one won.

Example 1:
The moves for the above state could be,
(0, 1) (0, 0) (1, 1) (1, 0) (0, 2) (2, 0)
   O      X      O      X      O      X

Input : 
An Array of moves . An Integer which specifies number of moves 
if numOfMoves is 10 ,array would be having 20 ints .

Your output should be  
1 if the player who started won.
2 if the other player won.
0 if no one won.


Notes:
->The above moves would be given to you as, 0, 1, 0, 0, 1, 1, 1, 0, 0, 2, 2, 0
->((0, 0) is the TOP-LEFT)
-> You can assume any Letter starts the game ,Letter is not important , Who started first has won or lost is important .


Example 2:
For moves 0, 0, 0, 1, 1, 0, 2, 0, 1, 1, 2, 2, 1, 2
i.e: (0, 0) (0, 1) (1, 0) (2, 0) (1, 1) (2, 2) (1, 2)
the state would be,
O | X |
O | O | O
X |   | X

Return 1 because the player 'O' won and 'O' started the game.

Vaibhav already removed invalid moves, you need not check
for the correctness for the moves.

*/

#include<malloc.h>
#include<stdlib.h>

int gameOutput(int *moves, int nMoves)
{

	return 0;
}
