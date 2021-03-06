/** 
 * @file linked_list.h
 * @brief linked list definition
 * @author Eugene Lin
 * @date 2021.2.23
 */
#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <cuda_runtime.h>
#include <cuda_runtime_api.h>

class LinkedList{
friend class TestLinkedList;
private:
	LinkedList * next;
	LinkedList * prev;
public:
	__host__ LinkedList();
	__device__ __host__ LinkedList * getNext();
	__device__ __host__ LinkedList * getPrev();
	__device__ __host__ void setNext(LinkedList *);
	__device__ __host__ void setPrev(LinkedList *);
	virtual __device__ __host__ double getValue()=0;
	virtual ~LinkedList();
};

__device__ __host__ LinkedList * linkedListMergeSort(LinkedList *);

__global__ void vectorAddInt(int * a, int *b, int *c, unsigned int num_elements);

#endif
