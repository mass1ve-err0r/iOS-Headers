//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class JSContext, NSDictionary, NSError, TVApplicationController, TVPlayer;

@protocol TVApplicationControllerDelegate <NSObject>

@optional
- (TVPlayer *)playerForAppController:(TVApplicationController *)arg1;
- (void)appController:(TVApplicationController *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 didFailWithError:(NSError *)arg2;
- (void)appController:(TVApplicationController *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
@end

