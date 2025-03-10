def two_power_check(n):
    power = 1
    while(True):
        if 2**power == n:
            return True
        if power > 10000:
            return False
        power += 1

for i in range(10,1000):
    if two_power_check(int(str(2**i)[1:])):
        print(i, " and ", 2**i)