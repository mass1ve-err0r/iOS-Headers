//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface UISpringBoardHostedView : UIView
{
    NSString *_remoteViewIdentifier;
    UIWindow *_remoteWindow;
    _Bool _remoteViewOpaque;
}

- (void).cxx_destruct;
- (id)remoteViewIdentifier;
- (void)unregister;
- (void)dealloc;
- (void)registerWithIdentifier:(id)arg1 andController:(id)arg2;
- (void)setRemoteViewOpaque:(_Bool)arg1;

@end

