//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOrderedCollectionAdditions-Protocol.h>

@class NSIndexSet;
@protocol FCOrderedCollection;

@protocol FCOrderedMutableCollectionAdditions <FCOrderedCollectionAdditions>
- (NSIndexSet *)fc_mergeSortedOrderedCollection:(id <FCOrderedCollection>)arg1 usingComparator:(long long (^)(id, id))arg2;
@end

