class Solution {
  /* 
    Approach #1: (Sort & Loop):
    ------------
    Time Complexity: O(N)
    Space Complexity: O(N)

    1. We sort the list of numbers so every similar numbers remain consecutive.
    2. loop over the list of numbers, if I find 2 of the same number we break the loop and return true
    if the loop finished without breaking then there's no numbers alike then return false  
  */
  bool containsDuplicateUsingSort(List<int> nums) {
    nums.sort();
    for (int i = 1; i < nums.length; i++)
      if (nums[i - 1] == nums[i]) return true;
    return false;
  }

  /* 
    Approach #2: (Set & Loop):
    ------------
    Time Complexity: O(N)
    Space Complexity: O(N)

    1. We Create a set to store uiquqe numbers
    2. loop over the list of numbers and add the current number to the set
    3. if the set already has the number the loop breaks and return true
    if the loop finishes without breaking then there's no duplicate numbers then return false
  */
  bool containsDuplicateUsingSet(List<int> nums) {
    Set<int> s = {};
    for (int i in nums) {
      if (s.isNotEmpty) {
        if (s.contains(i))
          return true;
        else
          s.add(i);
      } else
        s.add(i);
    }
    return false;
  }
}
