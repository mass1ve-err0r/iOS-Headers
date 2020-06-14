//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoTransitionObserver;

@protocol SVVideoTransitionManager <NSObject>
- (void)removeTransitionObserver:(id <SVVideoTransitionObserver>)arg1;
- (void)addTransitionObserver:(id <SVVideoTransitionObserver>)arg1;
- (void)transitionToVideo:(id <SVVideo>)arg1;
@end

