//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessResolver-Protocol.h>

@class CNContactStore, CNUIMeContactMonitor, CNUIPRPersonaStoreObservableProvider, NSString, PRPersonaStore;
@protocol CNSchedulerProvider, CNUIPlaceholderProviderFactory;

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver>
{
    long long _prohibitedSources;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    id <CNSchedulerProvider> _schedulerProvider;
    CNUIPRPersonaStoreObservableProvider *_personaStoreProvider;
    CNUIMeContactMonitor *_meMonitor;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
}

+ (id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
+ (id)photoObservableWithPhotoFuture:(id)arg1 scheduler:(id)arg2;
+ (id)observableFromLikenessProviderBlock:(CDUnknownBlockType)arg1 withScheduler:(id)arg2;
+ (id)basicMonogramObservableFromString:(id)arg1;
+ (id)basicMonogramObservableForContactFuture:(id)arg1;
+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) CNUIPRPersonaStoreObservableProvider *personaStoreProvider; // @synthesize personaStoreProvider=_personaStoreProvider;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) long long prohibitedSources; // @synthesize prohibitedSources=_prohibitedSources;
- (void).cxx_destruct;
- (id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(_Bool)arg3;
- (id)photoFutureForContactFuture:(id)arg1 scheduler:(id)arg2;
- (_Bool)isMeContact:(id)arg1;
- (_Bool)mayIncludeSource:(long long)arg1;
- (id)silhouetteWithPlaceholderProviderFactory:(id)arg1;
- (id)basicMonogramObservableFromString:(id)arg1;
- (id)basicMonogramObservableWithContactFuture:(id)arg1;
- (id)remoteImagesObservableWithContactFuture:(id)arg1;
- (id)personaLikenessObservableWithContactFuture:(id)arg1;
- (id)blessedPhotoObservableWithFuture:(id)arg1 contact:(id)arg2;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg1;
- (id)contentObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2;
- (id)likenessObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2;
- (id)likenessesForContact:(id)arg1;
- (id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 meMonitor:(id)arg4;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 schedulerProvider:(id)arg3 meMonitor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

