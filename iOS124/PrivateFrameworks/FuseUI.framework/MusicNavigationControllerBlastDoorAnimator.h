//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface MusicNavigationControllerBlastDoorAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _reversed;
}

@property(nonatomic, getter=isReversed) _Bool reversed; // @synthesize reversed=_reversed;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

