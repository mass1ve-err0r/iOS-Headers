//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSFormAutoFillCorrectionSet;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider;

@protocol WBSFormAutoFillFeedbackProcessor <NSObject>
@property(retain, nonatomic) id <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;
- (void)sendFeedbackWithCorrectionSet:(WBSFormAutoFillCorrectionSet *)arg1;
@end

