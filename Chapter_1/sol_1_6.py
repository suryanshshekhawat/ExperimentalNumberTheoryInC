import math

def lcm(x, y):
    return x * y // math.gcd(x, y)

def find_triplets():
    triplets = []
    
    # Loop through a and b such that LCM(a, b) = 1000
    for a in range(1, 1001):
        for b in range(1, 1001):
            if lcm(a, b) == 1000:
                # Now check for c such that LCM(b, c) = 2000 and LCM(a, c) = 2000
                for c in range(1, 2001):
                    if lcm(b, c) == 2000 and lcm(a, c) == 2000:
                        triplets.append((a, b, c))
    
    return triplets

# Get the triplets
triplets = find_triplets()

# Print the triplets
for triplet in triplets:
    print(triplet)
    
# print the total number
print("Total number of triplets: ", len(triplets))
