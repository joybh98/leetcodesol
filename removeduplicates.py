''' Given a sorted array nums, remove the duplicate in-place such that each element 
appear only once and return the new length'''

def removeduplicates(arr:list):
    # traverse through the list
    for i in arr:
        # check if the count of i is greater than 1 i.e it occurs more than once
        if(arr.count(i)>1):
            while(arr.count(i)>1):
                arr.remove(i)
    #print(arr)
    length = len(arr)
    return length

print(removeduplicates([1,1,1,1]))