//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (SortedArrayExtensions)
- (unsigned long long)mf_removeObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (unsigned long long)mf_insertObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 allowDuplicates:(_Bool)arg4;
- (unsigned long long)mf_removeObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)mf_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 allowDuplicates:(_Bool)arg3;
@end

