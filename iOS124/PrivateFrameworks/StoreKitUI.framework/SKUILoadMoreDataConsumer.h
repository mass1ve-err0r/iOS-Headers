//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@class NSSet;

@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer
{
    NSSet *_unavailableItemIdentifiers;
}

@property(copy, nonatomic) NSSet *unavailableItemIdentifiers; // @synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers;
- (void).cxx_destruct;
- (id)_itemsWithDictionary:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;

@end

