T = 0
N = 0 
T = int(input("Enter Test Cases: "))

def get_fibonacci_series(terms):
    n1 = 0
    n2 = 1
    series = []
    for i in range(terms):
        series.append(n1)
        temp = n1 + n2
        n1 = n2
        n2=temp
    return series

def get_even_series(series_arg):
    new_list = []
    for i in range(len(series_arg)):
        if i%2 != 0:
            new_list.append(series_arg[i])
    return new_list

for index in range(T):
    N = int(input("Enter Number of terms: "))
    fibonacci_series = get_fibonacci_series(N)
    new_series = []

    for number in fibonacci_series:
        if number >= 10:
            new_series.append(number % 10)
        else:
            new_series.append(number)

    even_series = new_series
    x = len(even_series)
    i = 0

    while True:
        even_series = get_even_series(even_series)
        if len(even_series) <= 1:
            break
    
    print(even_series)
