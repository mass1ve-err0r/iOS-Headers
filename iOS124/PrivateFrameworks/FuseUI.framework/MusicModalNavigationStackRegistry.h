//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/SKUINavigationControllerDelegate-Protocol.h>
#import <FuseUI/SKUINavigationDocumentDelegate-Protocol.h>
#import <FuseUI/UINavigationControllerDelegate-Protocol.h>

@class MusicClientContext, NSMapTable, NSString, SKUIClientContext;

@interface MusicModalNavigationStackRegistry : NSObject <SKUINavigationDocumentDelegate, MusicClientContextConsuming, SKUINavigationControllerDelegate, UINavigationControllerDelegate>
{
    NSMapTable *_navigationControllerToItemMap;
    MusicClientContext *_clientContext;
}

+ (id)sharedModalNavigationStackRegistry;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_rebuildJSNavigationDocumentsIfNeeded;
- (id)_appContext;
- (void)_handleClientDidLoadNotification:(id)arg1;
- (void)unregisterModalNavigationStackForNavigationController:(id)arg1;
- (void)registerModalNavigationStackForNavigationController:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationDocumentController:(id)arg1 requestsAccessToAppContextUsingBlock:(CDUnknownBlockType)arg2;
- (id)jsNavigationDocumentForNavigationDocumentController:(id)arg1 inContext:(id)arg2;
- (id)jsNavigationDocumentForNavigationController:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

