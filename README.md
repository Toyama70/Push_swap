# Push_swap
This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, you will have to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting.

# Remarks
This interesting project requires you to sort a series of integers stacked in A, using only limited moves such as :
- Rotate the whole stack up or down
- Swap first and second number
- Push int on top of stack A to the top of stack B
- ...

The objective is to develop your algorithm skills. I proceeded with a first check to see if the stack was already sorted, if not, the program parses the integers depending on the stack size. Under 6 integers, the numbers are parsed and sorted through an algorithm I wrote that sorts 3 integers. This is possible because in case of having a size 5 stack, I search for the smallest int, save it in stack B, search again for the smallest int, save it on top of stack B, then I am left with only three integers to sort, which my algorithm can handle. Once it's sorted I send back the B stack integers in the same order, ending up with a sortedstack.

For a stack bigger than 5 integers, I adopted a Radix sorting. To manage that, I put all integers in metaphorical boxes : I reattribute the integers with numbers from 1 to infinite that I convert to binary numbers. Then I just need to Radix sort the binary stack. The reason I relied on this method is because initially Radix doesn't handle negative numbers, but my program had to handle it so I transfered the integers to boxes as I call them, allowing me to get rid of the negative numbers the time for me to find a sorting way.

To test the program, enter the integers as arguments in the terminal. The output is the maneuver required for sorting, here is an explanation of each maneuver :

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).

sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

pb : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.

rrr : rra and rrb at the same time.
