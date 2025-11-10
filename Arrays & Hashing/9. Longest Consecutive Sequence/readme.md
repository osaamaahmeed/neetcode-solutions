we use a set to store sorted numbers and remove duplicates
then loop over the set 
let's take the first number and keep checking if that number + 1 is in the set
if it exist -> we increase a counter
if it don't exists -> we compare the last loop with the current and put the max in the asnwer
and also keep looping over the set after the last number I was on

Time Complxity O(N * Log N)

need optimization !