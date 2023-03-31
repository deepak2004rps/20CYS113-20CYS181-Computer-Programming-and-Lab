print("Enter the no of employess:")
n = int(input())
rate = [0] * (n)
hour = [0] * (n)
pay = [0] * (n)

for i in range(0, n - 1 + 1, 1):
    print("Enter the employee" + str(i + 1) + " rate of pay:")
    rate[i] = int(input())
    print("Enter the number of hours worked:")
    hour[i] = int(input())
    pay[i] = rate[i] * hour[i]
for i in range(0, n - 1 + 1, 1):
    print("The employee" + str(i + 1) + "weekly pay is:" + str(pay[i]))
