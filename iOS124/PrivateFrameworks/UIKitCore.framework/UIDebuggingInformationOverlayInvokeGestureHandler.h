//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlayInvokeGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _didCreateTools;
}

+ (id)mainHandler;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleActivationGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

