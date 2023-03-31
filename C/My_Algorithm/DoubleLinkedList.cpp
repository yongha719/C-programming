#include "DoubleLinkedList.h"
#include <assert.h>

Node* head = nullptr;
Node* curnode = nullptr;

Node* Add(Node* const node)
{
	// ���� ��尡 NULL�� �ƴҶ�
	if (curnode != nullptr) {
		curnode->nextnode = node;
		curnode->prevnode = curnode;
		curnode = node;
		return curnode;
	}

	// ó�� ������ ����̹Ƿ� �ʱ�ȭ
	if (head == nullptr) {
		head = node;
		curnode = head;
		return curnode;
	}

	// �߰� �� �ҽ� nullptr ��ȯ�ϰ� �׳� ����
	return nullptr;
}

//template <typename T>
void Remove(int node)
{

}
