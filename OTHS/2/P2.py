def __main__():
    k = int(input())
    n = int(input())
    f = False
    for i in range(n):
        s = int(input())
        if s >= k:
            print('fight')
            return
    print('run away')

__main__()