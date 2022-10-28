def prime(n):
  for i in range(2,int((n**(0.5)))+1):
    if n%i==0:
      return False
  else:
    return True

def nth_prime(n):
  number_of_primes=0
  x=2
  while(1):
    if prime(x):
      number_of_primes+=1
    if number_of_primes==n:
        return x
    x+=1  

print(nth_prime(10001))
    
