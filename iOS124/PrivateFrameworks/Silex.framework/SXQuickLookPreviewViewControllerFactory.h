//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookPreviewViewControllerFactory-Protocol.h>

@class NSString;
@protocol SXMediaSharingPolicyProvider;

@interface SXQuickLookPreviewViewControllerFactory : NSObject <SXQuickLookPreviewViewControllerFactory>
{
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
}

@property(readonly, nonatomic) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
- (void).cxx_destruct;
- (id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2;
- (id)initWithMediaSharingPolicyProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

