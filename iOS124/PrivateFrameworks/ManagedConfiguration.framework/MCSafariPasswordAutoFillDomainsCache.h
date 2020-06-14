//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MCSafariPasswordAutoFillDomainsCache : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableArray *_memberQueueCache;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableArray *memberQueueCache; // @synthesize memberQueueCache=_memberQueueCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void).cxx_destruct;
- (void)memberQueueRereadCache;
- (void)rereadCache;
- (_Bool)isSafariPasswordAutoFillAllowedForURL:(id)arg1;
- (id)init;

@end

