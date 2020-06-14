//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCCKOrderFeedRequest : NSObject
{
    NSString *_feedID;
    unsigned long long _maxOrder;
    unsigned long long _minOrder;
    unsigned long long _resultsLimit;
    unsigned long long _topK;
}

@property(nonatomic) unsigned long long topK; // @synthesize topK=_topK;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(nonatomic) unsigned long long minOrder; // @synthesize minOrder=_minOrder;
@property(nonatomic) unsigned long long maxOrder; // @synthesize maxOrder=_maxOrder;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

