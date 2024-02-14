def armstrong():
    a = str(153)
    total_sum = 0
    
    for digit in a:
        total_sum += int(digit) ** len(a)
    
    if total_sum == int(a):     
        print(total_sum)
    else:
        print("It's not an Armstrong number")

armstrong()