def bubbleSort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(0, n-i-1):
            if arr[j+1] < arr[j]:
                tmp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = tmp

#Test cases
test1 = [23, 78, 43, 14, 90, 82]
test2 = [65, 32, 17, 75, 55, 4]

bubbleSort(test1)
bubbleSort(test2)

print("Test 1: ")
for i in range(len(test1)):
    print("%d" %test1[i])

print("Test 2: ")
for i in range(len(test2)):
    print("%d" %test2[i])