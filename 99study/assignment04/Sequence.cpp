#include "Sequence.h"

int Sequence::getAt(int i) const
{
    DNode *p = atIndex(i); // i 인덱스로 노드 찾아내기
    return p->data;        // 데이터 리턴
}

void Sequence::setAt(int i, int e)
{
    DNode *p = atIndex(i); // 인덱스로 노드 찾아낸다음 data 를 입력값으로 변환
    p->data = e;
}

void Sequence::insertAt(int i, int e)
{
    if (i == 0)
    {
        insertFront(e); // 맨앞일때
    }
    else
    {
        DNode *p = atIndex(i); // 데이터가 들어갈 뒤쪽 노드
        DNode *newNode = new DNode();

        newNode->data = e; // 데이터 삽입

        // newNode -> next = p -> next;
        // newNode -> prev = p;
        // p -> next -> prev = newNode;
        // p->next = newNode;

        newNode->prev = p->prev;
        newNode->next = p;

        p->prev->next = newNode;
        p->prev = newNode;

        count++;
    }
}

void Sequence::eraseAt(int i)
{
    if (i == 0)
    {
        eraseFront();
    }
    else
    {
        DNode *p = atIndex(i);
        p->prev->next = p->next; // p 앞의 노드가 연결을 변경한다.
        p->next->prev = p->prev;
        delete p; // p 노드를 삭제함으로써 삭제할 노드가 연결하고 있던 선들 소멸
        count--;
    }
}

DNode *Sequence::atIndex(int i) const
{
    if (i < 0 || i >= count)
    { // 예외 상황
        return nullptr;
    }

    DNode *p;
    if (i < count / 2)
    { // 반으로 나눠서 앞에서부터 찾는게 빠른지, 뒤에서부터가 빠른지를 판단
        p = header->next;
        for (int j = 0; j < i; j++)
        {
            p = p->next;
        }
    }
    else
    {
        p = trailer;
        for (int j = count; j > i; j--)
        {
            p = p->prev;
        }
    }
    return p;
} // 시간 복잡도..?

int Sequence::indexOf(DNode *p) const
{
    int i = 0;
    DNode *current = header->next;
    while (current != p && current != trailer)
    {
        current = current->next;
        i++;
    }

    if (current == trailer)
    {
        return 0;
    }
    return i;
}

// 추가 : 5번 Bubble Sort
void bubbleSort(Sequence& ns) {
    int n = ns.size();//리스트 사이즈 만큼 반복
    
    // n-1번 묶음 반복
    //왜냐하면 [1,2,3,4,5,6]이라 한다면 비교 횟수는 5번이 될것.
    for (int i = 0; i < n - 1; i++) {

        // 인접한 원소들을 비교하며 큰 값을 뒤로 보냄
        for (int j = 0; j < n - 1 - i; j++) {

            // 앞의 값이 뒤의 값보다 크면 swap
            if (ns.getAt(j) > ns.getAt(j + 1)) {
                int temp = ns.getAt(j);//temp 를 이용하여 이전 값을 기억
                ns.setAt(j, ns.getAt(j + 1));
                ns.setAt(j + 1, temp);
            }
        }
    }
}