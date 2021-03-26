#include <iostream>
#include <vector>
using namespace std;
int oddEvenSort{
public:
    //ood list link list  and even list 
    listNode * OddEvenlist(listNode * head) {
    if (!head || !(head->next)) return head;
    // pointers that will be used in the link list
    listNode* head_odd = head;
    listNode* head_even = head->next;
    listNode* odd = head_node;
    listNOde* even = head_even;

    while (even) {
        // unsure the odd that will != null 
        if (even->next)
            odd->next = even->next;
        else {
            //as we know that odd wil not become null  buit the next node is null 
            // so we apoint odd head to the even head 
            odd->next = head_even;
            //go back to the head even 
            return head_odd;
        }
        // appoint the end of the odd head to the first even head
        odd = odd.next;
        even->next = odd->next;
        even = even->next

    }

    //even = null then end beacsue even is the lst node 
    // and id there is anothe odd head next to the end of last even head we apponit that to the first even head 
    odd->next = head_even;
    return head_odd;
    }
};
