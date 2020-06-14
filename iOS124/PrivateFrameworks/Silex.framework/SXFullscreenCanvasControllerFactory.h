//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFullscreenCanvasControllerFactory-Protocol.h>

@class NSString;
@protocol SXFullscreenCaptionViewFactory, SXMediaSharingPolicyProvider, SXPresentationAttributesProvider;

@interface SXFullscreenCanvasControllerFactory : NSObject <SXFullscreenCanvasControllerFactory>
{
    id <SXFullscreenCaptionViewFactory> _captionViewFactory;
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
}

@property(readonly, nonatomic) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
@property(readonly, nonatomic) id <SXPresentationAttributesProvider> presentationAttributesProvider; // @synthesize presentationAttributesProvider=_presentationAttributesProvider;
@property(readonly, nonatomic) id <SXFullscreenCaptionViewFactory> captionViewFactory; // @synthesize captionViewFactory=_captionViewFactory;
- (void).cxx_destruct;
- (id)fullscreenCanvasControllerForShowable:(id)arg1;
- (id)initWithCaptionViewFactory:(id)arg1 presentationAttributesProvider:(id)arg2 mediaSharingPolicyProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

