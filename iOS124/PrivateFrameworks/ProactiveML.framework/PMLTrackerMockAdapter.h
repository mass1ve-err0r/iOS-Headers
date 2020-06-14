//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLTrackerAdapterProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol>
{
    NSMutableArray *_trackedMessages;
}

- (void).cxx_destruct;
- (id)trackedMessagesByClass:(Class)arg1;
- (void)clearAllTrackedMessages;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

