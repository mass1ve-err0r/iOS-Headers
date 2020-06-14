//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface FCCKFeedResponse : NSObject
{
    _Bool _reachedEnd;
    _Bool _reachedOrderLimit;
    _Bool _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    unsigned long long _extent;
    NSData *_cursor;
}

@property(nonatomic) _Bool wasDropped; // @synthesize wasDropped=_wasDropped;
@property(copy, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) unsigned long long extent; // @synthesize extent=_extent;
@property(nonatomic) _Bool reachedOrderLimit; // @synthesize reachedOrderLimit=_reachedOrderLimit;
@property(nonatomic) _Bool reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(copy, nonatomic) NSArray *feedItemAndArticleRecords; // @synthesize feedItemAndArticleRecords=_feedItemAndArticleRecords;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
- (id)description;

@end

