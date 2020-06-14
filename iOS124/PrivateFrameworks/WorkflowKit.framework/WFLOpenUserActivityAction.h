//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFLAction.h>

@class NSString, NSUserActivity;

@interface WFLOpenUserActivityAction : WFLAction
{
    NSString *_appBundleIdentifier;
    NSUserActivity *_userActivity;
    NSString *_launchOrigin;
}

+ (void)createActionWithIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createActionWithUserActivity:(id)arg1 appBundleIdentifier:(id)arg2 launchOrigin:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) NSString *launchOrigin; // @synthesize launchOrigin=_launchOrigin;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (id)appBundleIdentifier;
- (void).cxx_destruct;
- (Class)implementationClass;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithUserActivity:(id)arg1 userActivityData:(id)arg2 appBundleIdentifier:(id)arg3 launchOrigin:(id)arg4;

@end

