//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSArray, NSDictionary, NSString;

@interface NSURL (ChatKitAdditions)
+ (id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2;
+ (id)ckURLForResource:(id)arg1 withExtension:(id)arg2;
@property(readonly, nonatomic) NSString *ckLaunchURLPresentContentForMessageGUID;
@property(readonly, nonatomic) NSArray *ckSuggestedReplies;
@property(readonly, nonatomic) NSString *ckLaunchURLPostComposeDismissal;
@property(readonly, nonatomic) _Bool ckIsUnitTestingURL;
@property(readonly, nonatomic) _Bool ckIsLaunchAppURL;
@property(readonly, nonatomic) _Bool ckAllowRetargeting;
@property(readonly, nonatomic) NSDictionary *ckLaunchURLBalloonPluginPayload;
@property(readonly, nonatomic) NSString *ckLaunchURLBalloonPluginBundleID;
- (_Bool)ckIsSMSPrivateURLScheme;
@property(readonly, nonatomic) _Bool ckShouldShowDigitalTouchCanvas;
@property(readonly, nonatomic) _Bool ckShouldShowComposeUI;
- (id)ckWillNotLaunchComposeUIURL;
@end

