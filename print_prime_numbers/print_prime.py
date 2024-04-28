def soe(max):
    mask = [True] * (max + 1)
    p =  1
    while(p * p <= max):
        if(mask[p] == True):
            for i in range(p * p, max + 1, p):
                mask[i] = False
        p += 1
    prime = [p for p in range(2, max + 1) if mask[p]]
    return prime

print(soe(10000））

