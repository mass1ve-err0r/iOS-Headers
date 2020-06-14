//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPassGroupView, PKPassView, UIAlertController;
@protocol PKPassDeleteAnimationControllerDelegate;

@interface PKPassDeleteAnimationController : NSObject
{
    UIAlertController *_alertController;
    id <PKPassDeleteAnimationControllerDelegate> _delegate;
    PKPassView *_passView;
    PKPassGroupView *_groupView;
}

+ (void)performPassbookDeleteWithView:(id)arg1 inSuperview:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, retain, nonatomic) PKPassGroupView *groupView; // @synthesize groupView=_groupView;
@property(readonly, retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property(nonatomic) __weak id <PKPassDeleteAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_unregisterForEnterBackgroundNotification;
- (void)_registerForEnterBackgroundNotification;
- (void)_startAnimation;
- (void)finished:(_Bool)arg1;
- (void)forceDeleteAnimation;
- (void)showInViewController:(id)arg1;
- (void)dealloc;
- (id)initWithPassView:(id)arg1 groupView:(id)arg2;

@end

