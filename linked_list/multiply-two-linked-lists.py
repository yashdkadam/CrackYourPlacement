MOD = 10**9+7
# your task is to complete this function
# Function should return an integer value
# head1 denotes head node of 1st list
# head2 denotes head node of 2nd list

'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def toint(head):
    str1 = ""
    while(head != None):
        str1 += str(head.data)
        head = head.next
    # str1 = str1[::-1]
    # print(str1)
    return int(str1)%MOD

def multiplyTwoList(head1, head2):
    # Code here
    # print(toint(head1))
    # print(toint(head2))
    return (toint(head1)*toint(head2))%MOD
    

