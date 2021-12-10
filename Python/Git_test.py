def insert_sort(arr):
    for i in range(len(arr)):
        for j in range(1,len(arr)):
            while True:
                if arr[j-1]<arr[j] or j==0:
                    break
                if arr[j-1]>arr[j]:
                    arr[j-1],arr[j]=arr[j],arr[j-1]
                    j=j-1
    return arr

def buble_sort(arr):
    for i in range(len(arr)):
        for j in range(len(arr)-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1] = arr[j+1], arr[j]
    return arr

arr = [5,4,3,2,1]
#print(insert_sort(arr))   
print(buble_sort(arr))     
