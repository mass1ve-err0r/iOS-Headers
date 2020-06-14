//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SVVideoEventTrackerProviding;

@interface SVVideoInteractionEventTrackerManager : NSObject <SVVideoInteractionHandlerFactory>
{
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
}

@property(readonly, nonatomic) id <SVVideoEventTrackerProviding> eventTrackerProvider; // @synthesize eventTrackerProvider=_eventTrackerProvider;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoEventTrackerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

