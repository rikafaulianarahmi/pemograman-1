def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

def main():
    bilangan = int(input())
    angka = list(map(int, input().split()))  
    
    maks = -100000
    minim = 100000
    
    for nilai in angka:
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)
    
    print(maks, minim)

if __name__ == "__main__":
    main()



