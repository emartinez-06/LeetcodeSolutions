#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *tempHead = new ListNode();
        ListNode *currNode = tempHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = 0;
            int val2 = 0;

            if (l1 != nullptr) {
                val1 = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                val2 = l2->val;
                l2 = l2->next;
            }

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            int currVal = sum % 10;

            currNode->next = new ListNode(currVal);
            currNode = currNode->next;
        }
        return tempHead->next;
    }
};

int main() {
    cout << "Hello World!\n";

    return 0;
}
