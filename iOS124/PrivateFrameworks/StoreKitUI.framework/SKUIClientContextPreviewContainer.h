//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIClientContextPreviewContainer-Protocol.h>

@class SKUIClientContext, SKUIPreviewContainerViewController;

@interface SKUIClientContextPreviewContainer : IKJSObject <SKUIClientContextPreviewContainer>
{
    SKUIClientContext *_clientContext;
    SKUIPreviewContainerViewController *_previewContainerViewController;
}

- (void).cxx_destruct;
- (void)previewDocument:(id)arg1:(id)arg2;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3;

@end

