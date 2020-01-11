Given a string, write a function to check if the second string is first string's permutation and palindrome. A palindrome is a word or phrase that is same forwards and backwards. A permutation is rearrangement of letters. The palindrome does not need to be limited
to just dictionary words.

EXAMPLE:

Input1: Tact Coa
Input 2: taco cat
Output: True(permutations: taco cat, atco cta, etc.)

Input1: Tact Coa
Input 2: atco cta
Output: True(permutations: taco cat, atco cta, etc.)

Input1: tap tap
Input 2: tap pat
Output: True

RUNTIME: sort: n log n. Check for palindrome: n/2

total runtime n long n + n/2 = n log n
