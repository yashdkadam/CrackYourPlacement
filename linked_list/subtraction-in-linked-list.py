#User function Template for python3

def toint(li):
    str1 = ""
    while(li != None):
        str1 += str(li.data)
        li = li.next
    return int(str1)

def subLinkedList(l1, l2): 
    # Code here
    # return head of difference list
    diff = abs(toint(l1) - toint(l2))
    diff = str(diff)
    ans = LinkedList()
    for i in diff:
        ans.insert(int(i))
    return ans.head

