//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface ASBackgroundObserver : NSObject
{
    UIViewController *_viewController;
    CDUnknownBlockType _block;
}

@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

