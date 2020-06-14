//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoProviderFactory-Protocol.h>

@class NSString;
@protocol NUVideoEventTracker;

@interface NUVideoProviderFactory : NSObject <NUVideoProviderFactory>
{
    id <NUVideoEventTracker> _eventTracker;
}

@property(readonly, nonatomic) id <NUVideoEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
- (void).cxx_destruct;
- (id)createVideoProviderWithVideoItem:(id)arg1;
- (id)initWithEventTracker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

