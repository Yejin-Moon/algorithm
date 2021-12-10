def selection_sort(arr):
    for i in range(len(arr)-1):
        smallest = i
        for j in range(i,len(arr)):
            if arr[j]<arr[smallest]:
                smallest = j
        arr[i],arr[smallest] = arr[smallest],arr[i]
    return arr

arr = [5,4,3,2,1]
print(selection_sort(arr))

