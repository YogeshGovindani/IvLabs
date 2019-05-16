def computepay(h,r):
    if h>= 40 :
        return 1.5*(h-40)*r + 40*r
    else :
        return h*r

hrs = input("Enter Hours:")
rate = input("Enter Rate:")
p = computepay(float(hrs),float(rate))
print(p)
