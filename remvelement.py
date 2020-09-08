def removeElement(arr:list, s:int):
    count = 0
    # traverse through list
    for i in range(len(arr)):
        if arr[i]!=s:
            count +=1
    
    return count

print(removeElement([0,1,2,2,3,0,4,2],2))