
Write a function to make change. Given some number of cents, return a dictionary
 containing the minimum number of quarters, dimes, nickles, and pennies 
 necessary to give the correct change. 

Note: that even if there are no coins of a certain denomination needed, you
should still include that in the dictionary, it's value will just be zero.

Note: you must use the modulo operator (%) and/or some sort of a loop. 

Examples:
    MakeChange(41) returns {'quarters': 1, 'dimes': 1, 'nickles': 1, 'pennies': 1}
    MakeChange(248) returns {'quarters': 9, 'dimes': 2, 'nickles': 0, 'pennies': 3}
"""

def MakeChange(cents):
	d = {}
	remainder = cents % 25
	d['quarters'] = cents / 25

	d['dimes'] = remainder / 10

	d['nickles'] = (remainder % 10) / 5

	d['pennies'] = ((remainder % 10) % 5) / 1

	return d 

