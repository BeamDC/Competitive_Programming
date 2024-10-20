def decomp(s: str) -> str:
    r = ''
    current = s[0]
    rep = 0
    for c in s:
        if c == current:
            rep += 1
        else:
            r += str(rep) + ' ' + current + ' '
            current = c
            rep = 1
    r += str(rep) + ' ' + current + ' '
    return r

n = int(input())
for _ in range(n):
    s = input()
    print(decomp(s))
