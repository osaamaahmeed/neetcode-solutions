The Problem idea is to find the correct algorithm to encode & decode a string without using any characters from UTF-8
a way to solve it is to save the length of each string so we can use it later to return the string correctly
example:

Original Vector: ["neet", "code", "love", "you"]
Encoded String: 4,4,4,3#neetcodeloveyou
(4, 4, 4, 3 # neet code love you) 

then after # we keep counting to create each string from the sizes

Time Complxity: O(N)
N: sum of lengths of all the strings