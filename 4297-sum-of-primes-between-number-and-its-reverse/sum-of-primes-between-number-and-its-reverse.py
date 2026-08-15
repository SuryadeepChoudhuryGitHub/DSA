class Solution(object):
    def is_prime(self, n):
        if n <= 1:
            return False
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0: # Found a divisor
                return False
        return True

    def sumOfPrimesInRange(self, n):
        num = int((str(n))[::-1])
        lower = 0
        higher = 0
        if num > n:
            lower = n
            higher = num
        else:
            lower = num
            higher = n
        
        # find primes
        output = 0
        for i in range(lower, higher +1):
            if self.is_prime(i):
                output += i

        return output
            
        