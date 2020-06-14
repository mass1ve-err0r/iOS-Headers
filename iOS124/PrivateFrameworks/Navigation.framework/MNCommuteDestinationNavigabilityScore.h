//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import <Navigation/MNCommuteDestinationObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationNavigabilityScore : MNCommuteDestinationScore <MNCommuteDestinationObserver>
{
    _Bool _destinationInvalid;
}

+ (double)weight;
- (id)descriptionExtras;
- (void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2;
- (void)_checkDestinationRoute:(id)arg1;
- (_Bool)destinationInvalid;
- (void)updateScoreIfPossible;
- (id)initWithDestination:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

