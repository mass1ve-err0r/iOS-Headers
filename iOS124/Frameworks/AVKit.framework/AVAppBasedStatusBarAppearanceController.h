//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVAppBasedStatusBarAppearanceController : NSObject
{
    _Bool _clientPrefersStatusBarHidden;
    id _statusBarHiddenObserver;
}

@property(nonatomic) _Bool clientPrefersStatusBarHidden; // @synthesize clientPrefersStatusBarHidden=_clientPrefersStatusBarHidden;
@property(retain, nonatomic) id statusBarHiddenObserver; // @synthesize statusBarHiddenObserver=_statusBarHiddenObserver;
- (void).cxx_destruct;
- (void)_stopObservingStatusBarHiddenIfNeeded;
- (void)_startObservingStatusBarHiddenIfNeeded;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)restoreClientPreference;
- (void)start;
- (id)init;

@end

