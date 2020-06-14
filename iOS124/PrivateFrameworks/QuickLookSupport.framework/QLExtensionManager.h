//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class QLExtensionManagerCache;

@interface QLExtensionManager : NSObject
{
    QLExtensionManagerCache *_thumbnailExtensionCache;
    QLExtensionManagerCache *_previewExtensionCache;
    QLExtensionManagerCache *_previewHighMemoryExtensionCache;
    QLExtensionManagerCache *_thumbnailHighMemoryExtensionCache;
}

+ (id)sharedManager;
@property(retain, nonatomic) QLExtensionManagerCache *thumbnailHighMemoryExtensionCache; // @synthesize thumbnailHighMemoryExtensionCache=_thumbnailHighMemoryExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *previewHighMemoryExtensionCache; // @synthesize previewHighMemoryExtensionCache=_previewHighMemoryExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *previewExtensionCache; // @synthesize previewExtensionCache=_previewExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *thumbnailExtensionCache; // @synthesize thumbnailExtensionCache=_thumbnailExtensionCache;
- (void).cxx_destruct;
- (void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)_extensionPointNameForExtensionType:(unsigned long long)arg1;
- (id)extensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)qlExtensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (void)extensionContextForContentType:(id)arg1 appBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (_Bool)existsExtensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generationType:(unsigned long long)arg4;
- (id)_cachesForExtensionType:(unsigned long long)arg1;
- (void)_setupCache;

@end

