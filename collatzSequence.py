def collatz(number):
    if number % 2 != 0:
        return 3 * number + 1
    else:
        return number // 2

for i in range(9):   
    k=9
    print("Enter a positive number")

    try :
        number = int(input())
    except ValueError:
        print("Invalid input")
        k=1

    if k!= 1:
        while number != 1:    
            number=collatz(number)
            print(number)
