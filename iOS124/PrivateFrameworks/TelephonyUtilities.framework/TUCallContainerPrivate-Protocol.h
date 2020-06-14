//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCallContainer-Protocol.h>

@class NSArray, TUCall;

@protocol TUCallContainerPrivate <TUCallContainer>
@property(readonly, nonatomic) _Bool existingCallsHaveMultipleProviders;
@property(readonly, retain, nonatomic) TUCall *frontmostAudioOrVideoCall;
@property(readonly, nonatomic) TUCall *frontmostCall;
@property(readonly, nonatomic) TUCall *conferenceCall;
@property(readonly, nonatomic) TUCall *displayedCall;
@property(readonly, copy, nonatomic) NSArray *_allCalls;
- (TUCall *)callPassingTest:(_Bool (^)(TUCall *))arg1 sortedUsingComparator:(long long (^)(id, id))arg2;
@end

