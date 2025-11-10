We will use vector of prefix & suffix product of numers
and use this equation: number[i] = prefix[i-1] * suffix[i+1]
but for the first number it will be suffix[1] 
and for the last number it will be prefix[n-2]

example:

numbers: 1          2     3     4    5
prefix:  1          2     6     24   120
suffix:  120        120   60    20   5
algo:    suff[1]    1*60  2*20  6*5  pref[n-2]
