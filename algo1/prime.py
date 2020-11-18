def isPrime(n):
    for i in range(2,n):
        if n%i ==0 :
            ret = False
            break
    else:
        ret = True
    return ret

n = input('==>')
if(isPrime(int(n))):
    print(n, ' is prime.')
else:
    print(n, ' is not prime.')