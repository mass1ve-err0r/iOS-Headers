//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TIContactCollection : NSObject
{
    NSMutableArray *_contacts;
    long long _count;
    _Bool _sourceHasRelevancyScore;
}

@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) _Bool sourceHasRelevancyScore; // @synthesize sourceHasRelevancyScore=_sourceHasRelevancyScore;
- (void).cxx_destruct;
- (void)enumerateContactsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addContact:(id)arg1;
- (id)initWithRelevanceScoreType:(_Bool)arg1;

@end

