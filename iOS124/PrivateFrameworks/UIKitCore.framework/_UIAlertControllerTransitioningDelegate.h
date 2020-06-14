//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIForceTransitioningDelegate-Protocol.h>

@class NSString, UIInteractionProgress;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTransitioningDelegate : NSObject <UIForceTransitioningDelegate>
{
    UIInteractionProgress *interactionProgressForPresentation;
}

@property(retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // @synthesize interactionProgressForPresentation;
- (void).cxx_destruct;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)_interactionControllerForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

