//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSUpdatableAssetController-Protocol.h>

@class SKUIClientContext;

@interface SKUIJSUpdatableAssetController : IKJSObject <SKUIJSUpdatableAssetController>
{
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (void)refreshCachedManifest:(id)arg1;
- (id)newestCachedManifestVersion;
- (id)loadResource:(id)arg1;
- (id)currentManifestVersion;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;

@end

