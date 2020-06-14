//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class IKAppContext, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIActionCommerceTransaction : VUIAction
{
    NSString *_commerceActionRef;
    NSDictionary *_contextData;
    IKAppContext *_appContext;
}

+ (void)_removeTransactionForBuyParams:(id)arg1;
+ (void)_addTransaction:(id)arg1 forBuyParams:(id)arg2;
+ (_Bool)isTransactionInProgressForBuyParams:(id)arg1;
+ (id)_skuDownloadKind:(long long)arg1;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(copy, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSString *commerceActionRef; // @synthesize commerceActionRef=_commerceActionRef;
- (void).cxx_destruct;
- (void)_displayConfirmationForChannelName:(id)arg1;
- (void)_postSubscriptionNotificationWithChannelName:(id)arg1 buyParams:(id)arg2 error:(id)arg3;
- (void)_postPurchaseNotification:(id)arg1 error:(id)arg2;
- (void)_postTransactionDidStartNotificationWithBuyParams:(id)arg1;
- (void)_startSubscribeFlowForOffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startPurchaseFlowForOffer:(id)arg1 playWhenDone:(_Bool)arg2 appContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3;

@end

