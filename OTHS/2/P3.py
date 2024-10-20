# click second until the next clikc is too big, then go with first
n = input()
m = 9
clicks = 0
for i in range(1,10):
    if int(str(i) * 4) <= int(n):
        clicks += 1
    else:
        break
clicks += int(n) - int(str(clicks) * 4)
print(clicks)
