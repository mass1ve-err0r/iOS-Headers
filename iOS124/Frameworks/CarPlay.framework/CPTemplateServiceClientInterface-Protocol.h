//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPBannerDelegate-Protocol.h>

@class NSUUID;

@protocol CPTemplateServiceClientInterface <CPBannerDelegate>
- (void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (void)templateIdentifierDidDismiss:(NSUUID *)arg1;
- (void)templateIdentifierDidPop:(NSUUID *)arg1;
- (void)clientExceededHierarchyDepthLimit;
@end

