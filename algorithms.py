


# Selection Sort 

for i in range(len(list)):
	for j in xrange(i , len(list)):
		if list[j] < list[i]:
			list[j], list[i] = list[i] , list[j]
		
#Bubble Sort 

def BubbleSort(items):

    length = len(items) -1

    

    while 0 <= length:

        for i in xrange(length):
 
            if items[i] > items[i+1]:
                save = items[i]
	        	items[i] = items[i+1]
                items[i+1] = save 

     	length -= 1
	  


    return items


#Linear Search

def LinearSearch(x, items):

    if len(items)== 0:
        return -1

    length = len(items) - 1

    for i in xrange(length):
  
        if items[i] == x:
            return i

    return -1 
        

#Binary Search

def BinarySearch(x, items):


    end = len(items) - 1 

    if len(items) == 0:  # if list is empty return -1
        return -1

    if items [len(items)-1] < x or items[0] > x:  # if value is outside range of list 
        return -1

    while True:

        half = ((start + end) // 2)
  
        if x > items[half]:

            start = half + 1	

        elif x < items[half]: 
            
            last = half - 1      
        else:
            return half 







