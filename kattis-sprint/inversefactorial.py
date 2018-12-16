from math import log10
def main():
    x = input()
    logx = log10(int(x)) if len(x) < 10 else log10(int(x[:3])) - 3 + len(x) - 1
    logc = 0
    for i in range(1, 1000000):
        logc += log10(i)
        if logc - logx > -1e-3:
            print(i)
            return

if __name__ == "__main__":
    main()
