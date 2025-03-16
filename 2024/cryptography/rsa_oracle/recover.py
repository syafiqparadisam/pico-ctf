def recover_n(pairings, e):
    pt1, ct1 = pairings[0]
    N = ct1 - pow(pt1, e)
    
    # loop through and find common divisors
    for pt,ct in pairings:
        val = gmpy2.mpz(ct - pow(pt, e))
        N = gmpy2.gcd(val, N)
return N

