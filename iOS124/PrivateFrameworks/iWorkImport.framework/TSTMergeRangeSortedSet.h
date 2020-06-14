//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSTMergeRangeSortedSet : NSObject
{
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem>> *mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__ptr_;
    } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (id).cxx_construct;
- (void)reset;
- (struct UIEdgeInsets)getPaddingInsets;
- (_Bool)isCheckbox;
- (struct CGSize)getSize;
- (struct TSUCellRect)iter;
- (struct TSUCellRect)begin;
- (unsigned long long)count;
- (void)addRange:(struct TSUCellRect)arg1 andSize:(struct CGSize)arg2 andPaddingInsets:(struct UIEdgeInsets)arg3 andIsCheckbox:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end

